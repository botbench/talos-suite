/*!@addtogroup common_includes
 * @{
 * @defgroup common Main common include
 * Commonly used functions used by drivers
 * @{
 */

/** \file common.c
 * \brief Commonly used functions used by drivers.
 *
 * common.c provides a number of frequently used functions that are useful for writing
 * drivers.
 * License: This code is released under LGPL
 *
 * \author Xander Soldaat (xander_at_botbench.com)
 * \date 10 August 2013
 */

#include <stdio.h>
#include <stdint.h>


/**
 * Clear out the error state on I2C bus by sending a bunch of dummy
 * packets.
 * @param link the port number
 * @param address the I2C address we're sending to
 */
void clearI2CError(tSensors link, uint8_t address) {
  uint8_t error_array[2];
  error_array[0] = 1;           // Message size
  error_array[1] = address; // I2C Address

#ifdef __COMMON_H_DEBUG__
  fprintf(stderr, "rxmit: %d", error_array[1]);
#endif // __COMMON_H_DEBUG__

  for (int i = 0; i < 5; i++) {
    sendI2CMsg(link, &error_array[0], 0);
    wait1Msec(5);
  }
}


/**
 * Wait for the I2C bus to be ready for the next message
 * @param link the port number
 * @return true if no error occured, false if it did
 */
bool waitForI2CBus(tSensors link)
{
  //TI2CStatus i2cstatus;
  while (true)
  {
    //i2cstatus = nI2CStatus[link];
    switch (nI2CStatus[link])
    //switch(i2cstatus)
    {
	    case NO_ERR:
	      return true;

	    case STAT_COMM_PENDING:
	      break;

	    case ERR_COMM_CHAN_NOT_READY:
	      break;

	    case ERR_COMM_BUS_ERR:
	#ifdef __COMMON_H_DEBUG__
	      PlaySound(soundLowBuzz);
	      while (bSoundActive) {}
	#endif // __COMMON_H_DEBUG__
        return false;
    }
    EndTimeSlice();
  }
}


/**
 * Write to the I2C bus. This function will clear the bus and wait for it be ready
 * before any bytes are sent.
 * @param link the port number
 * @param request the data to be sent
 * @return true if no error occured, false if it did
 */
bool writeI2C(tSensors link, tByteArray &request) {

  if (!waitForI2CBus(link)) {
    clearI2CError(link, request[1]);

    // Let's try the bus again, see if the above packets flushed it out
    // clearI2CBus(link);
    if (!waitForI2CBus(link))
      return false;
  }

  sendI2CMsg(link, &request[0], 0);

  if (!waitForI2CBus(link)) {
    clearI2CError(link, request[1]);
    sendI2CMsg(link, &request[0], 0);
    if (!waitForI2CBus(link))
      return false;
  }
  return true;
}


/**
 * Write to the I2C bus. This function will clear the bus and wait for it be ready
 * before any bytes are sent.
 * @param link the port number
 * @param request the data to be sent
 * @param reply array to hold received data
 * @param replylen the number of bytes (if any) expected in reply to this command
 * @return true if no error occured, false if it did
 */
bool writeI2C(tSensors link, tByteArray &request, tByteArray &reply, int replylen) {
  // clear the input data buffer

  if (!waitForI2CBus(link)) {
    clearI2CError(link, request[1]);

    // Let's try the bus again, see if the above packets flushed it out
    // clearI2CBus(link);
    if (!waitForI2CBus(link))
      return false;
  }

  sendI2CMsg(link, &request[0], replylen);

  if (!waitForI2CBus(link)) {
    clearI2CError(link, request[1]);
    sendI2CMsg(link, &request[0], replylen);
    if (!waitForI2CBus(link))
      return false;
  }

  // ask for the input to put into the data array
  readI2CReply(link, &reply[0], replylen);

  return true;
}

#endif // __COMMON_H__

/* @} */
/* @} */

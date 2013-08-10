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
#include <sensor.h>
#include <i2c.h>
#include "common.h"

/**
 * Write to the I2C bus. This function will clear the bus and wait for it be ready
 * before any bytes are sent.
 * @param link the port number
 * @param request the data to be sent
 * @param reply array to hold received data
 * @param replylen the number of bytes (if any) expected in reply to this command
 * @return true if no error occured, false if it did
 */
bool writeI2C(sensor_port_t *link, char *request, char *reply, uint8_t replylen) {
  // clear the input data buffer
/*
int i2c_transfer(sensor_port_t *port, //sensor port
    uint8_t devAddr, //device address
    uint8_t writeSize, //how many bytes to write out
    char *writeBuf, //buffer to write from
    uint8_t readSize, //number of bytes to read back
    char *readBuf); //buffer for return values
*/
	uint8_t devAddr = request[1] >> 1;
	uint8_t writeSize = request[0];
	char *writeBuf = &request[2];

#ifdef DEBUG
	fprintf(stderr, "i2c_transfer[%d]: addr: %d, wrsize: %d, replylen: %d\n", *link, devAddr, writeSize, replylen);
#endif // DEBUG
  i2c_transfer(link, devAddr, writeSize, writeBuf, replylen, reply);
  return true;
}

/* @} */
/* @} */

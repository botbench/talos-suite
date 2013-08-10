#ifndef __HTMC_H__
#define __HTMC_H__

#include "common.h"

// I2C address + registers
#define HTMC_I2C_ADDR       0x02  /*!< HTMC I2C device address */
#define HTMC_MODE           0x41  /*!< HTMC Mode control */
#define HTMC_HEAD_U         0x42  /*!< HTMC Heading Upper bits */
#define HTMC_HEAD_L         0x43  /*!< HTMC Heading Lower bit */

// I2C commands
#define HTMC_MEASURE_CMD    0x00  /*!< HTMC measurement mode command */
#define HTMC_CALIBRATE_CMD  0x43 /*!< HTMC calibrate mode command */

bool HTMCstartCal(sensor_port_t *link);
bool HTMCstopCal(sensor_port_t *link);
int HTMCreadHeading(sensor_port_t *link);
int HTMCreadRelativeHeading(sensor_port_t *link);
int HTMCsetTarget(sensor_port_t *link, int offset);

#ifdef __HTSMUX_SUPPORT__
int HTMCreadHeading(tMUXSensor muxsensor);
int HTMCreadRelativeHeading(tMUXSensor muxsensor);
int HTMCsetTarget(tMUXSensor muxsensor, int offset);

tConfigParams HTMC_config = {HTSMUX_CHAN_I2C, 2, 0x02, 0x42}; /*!< Array to hold SMUX config data for sensor */
#endif // __HTSMUX_SUPPORT__

tByteArray HTMC_I2CRequest;       /*!< Array to hold I2C command data */
tByteArray HTMC_I2CReply;         /*!< Array to hold I2C reply data */

int target[6][4] = {{0, 0, 0, 0},   /*!< Offsets for the compass sensor relative readings */
                  {0, 0, 0, 0},
                  {0, 0, 0, 0},
                  {0, 0, 0, 0},
                  {0, 0, 0, 0},
                  {0, 0, 0, 0}};

#endif // __HTMC_H__

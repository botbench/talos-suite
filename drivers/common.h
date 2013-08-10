#ifndef __COMMON_H__
#define __COMMON_H__

#undef __COMMON_H_DEBUG__
//#define __COMMON_H_DEBUG__

#ifndef MAX_ARR_SIZE
/**
 * Maximum buffer size for byte_array, can be overridden in your own program.
 * It's 17 bytes big because the max I2C buffer size is 16, plus 1 byte to denote
 * packet length.
 */
#define MAX_ARR_SIZE 17
#endif

/**
 * This define returns the smaller of the two numbers
 */
#define min2(a, b) (a < b ? a : b)

/**
 * This define returns the smallest of the three numbers
 */
#define min3(a, b, c) (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c)

/**
 * This function returns the biggest of the three numbers
 */
#define max3(a, b, c) (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)


/**
 * Returns x if it is between min and max. If outside the range,
 * it returns min or max.
 */
#define clip(a, b, c) min2(c, max2(b, a))

/**
 * Array of bytes as a struct, this is a work around for RobotC's inability to pass an array to
 * a function.
 */
typedef uint8_t tByteArray[MAX_ARR_SIZE];
typedef sbyte tsByteArray[MAX_ARR_SIZE];
typedef uint8_t tMassiveArray[128];             /*!< 128 byte array for very large blobs of data */
typedef uint8_t tHugeByteArray[64];             /*!< 64 byte array for very large blobs of data */
typedef uint8_t tBigByteArray[32];              /*!< 32 byte array for large blobs of data */
typedef uint8_t tIPaddr[4];                     /*!< Struct for holding an IP address */

/**
 * Array of ints as a struct, this is a work around for RobotC's inability to pass an array to
 * a function.
 */
typedef int tIntArray[MAX_ARR_SIZE];

bool waitForI2CBus(tSensors link)
bool writeI2C(tSensors link, tByteArray &request)
bool writeI2C(tSensors link, tByteArray &request, tByteArray &reply, int replylen)
long getUID()
void clearI2CError(tSensors link, uint8_t address)
void clearI2Cbus(tSensors link)

#endif // __COMMON_H__

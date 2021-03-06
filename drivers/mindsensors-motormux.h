bool MSMMUXreadStatus(tMUXmotor muxmotor, ubyte &motorStatus)
bool MSMMUXreadStatus(tMUXmotor muxmotor, ubyte &motorStatus, ubyte address)
bool MSMMUXsendCommand(tSensors link, ubyte channel, long setpoint, byte speed, ubyte seconds, ubyte commandA, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMUXsendCommand(tSensors link, ubyte channel, long setpoint, byte speed, ubyte seconds, ubyte commandA, ubyte address)
bool MSMMUXsendCommand(tSensors link, ubyte command, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMUXsendCommand(tSensors link, ubyte command, ubyte address)
bool MSMMUXsetPID(tSensors link, unsigned int kpTacho, unsigned int kiTacho, unsigned int kdTacho, unsigned int kpSpeed, unsigned int kiSpeed, unsigned int kdSpeed, ubyte passCount, ubyte tolerance, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMUXsetPID(tSensors link, unsigned int kpTacho, unsigned int kiTacho, unsigned int kdTacho, unsigned int kpSpeed, unsigned int kiSpeed, unsigned int kdSpeed, ubyte passCount, ubyte tolerance, ubyte address)
bool MSMMotor(tMUXmotor muxmotor, byte power, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMotor(tMUXmotor muxmotor, byte power, ubyte address)
bool MSMMotorBusy(tMUXmotor muxmotor, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMotorBusy(tMUXmotor muxmotor, ubyte address)
bool MSMMotorEncoderReset(tMUXmotor muxmotor, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMotorEncoderReset(tMUXmotor muxmotor, ubyte address)
bool MSMMotorEncoderResetAll(tSensors link, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMotorEncoderResetAll(tSensors link, ubyte address)
bool MSMMotorStalled(tMUXmotor muxmotor, ubyte address = MSMMUX_I2C_ADDR)
bool MSMMotorStalled(tMUXmotor muxmotor, ubyte address)
bool MSMotorStop(tMUXmotor muxmotor, bool brake, ubyte address = MSMMUX_I2C_ADDR)
bool MSMotorStop(tMUXmotor muxmotor, bool brake, ubyte address)
bool MSMotorStop(tMUXmotor muxmotor, ubyte address = MSMMUX_I2C_ADDR)
bool MSMotorStop(tMUXmotor muxmotor, ubyte address)
long MSMMotorEncoder(tMUXmotor muxmotor, ubyte address = MSMMUX_I2C_ADDR)
long MSMMotorEncoder(tMUXmotor muxmotor, ubyte address)
void MSMMUXinit()
void MSMMotorSetBrake(tMUXmotor muxmotor)
void MSMMotorSetEncoderTarget(tMUXmotor muxmotor, long target)
void MSMMotorSetEncoderTarget(tMUXmotor muxmotor, long target, bool relative)
void MSMMotorSetFloat(tMUXmotor muxmotor)
void MSMMotorSetRamping(tMUXmotor muxmotor, bool ramping)
void MSMMotorSetRotationTarget(tMUXmotor muxmotor, long target)
void MSMMotorSetSpeedCtrl(tMUXmotor muxmotor, bool constspeed)
void MSMMotorSetTimeTarget(tMUXmotor muxmotor, int target)

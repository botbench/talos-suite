bool HDMMUXreadStatus(tSensors link, ubyte &motorStatus, long &tachoA, long &tachoB, long &tachoC)
bool HDMMUXsendCommand(tSensors link, ubyte mode, ubyte channel, ubyte rotparams, long duration, byte power, byte steering)
bool HDMMotor(tMUXmotor muxmotor, byte power)
bool HDMMotorBusy(tMUXmotor muxmotor)
bool HDMMotorEncoderReset(tMUXmotor muxmotor)
bool HDMMotorEncoderResetAll(tSensors link)
bool HDMotorStop(tMUXmotor muxmotor)
bool HDMotorStop(tMUXmotor muxmotor, bool brake)
long HDMMotorEncoder(tMUXmotor muxmotor)
void HDMMUXinit()
void HDMMotorSetBrake(tMUXmotor muxmotor)
void HDMMotorSetEncoderTarget(tMUXmotor muxmotor, long enctarget)
void HDMMotorSetFloat(tMUXmotor muxmotor)
void HDMMotorSetRamping(tMUXmotor muxmotor, ubyte ramping)
void HDMMotorSetRotationTarget(tMUXmotor muxmotor, float rottarget)
void HDMMotorSetSpeedCtrl(tMUXmotor muxmotor, bool constspeed)
void HDMMotorSetTimeTarget(tMUXmotor muxmotor, float timetarget)

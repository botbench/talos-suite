bool MSTPgetTouch(tSensors link, int &x, int &y, ubyte &buttons, ubyte addr = MSTP_I2C_ADDR)
bool MSTPgetTouch(tSensors link, int &x, int &y, ubyte &buttons, ubyte addr)
bool MSTPsendCmd(tSensors link, ubyte cmd, ubyte addr = MSTP_I2C_ADDR)
bool MSTPsendCmd(tSensors link, ubyte cmd, ubyte addr)
int MSTPgetGesture(tSensors link)

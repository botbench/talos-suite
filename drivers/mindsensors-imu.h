bool MSIMUreadAccelAxes(tSensors link, int &_x, int &_y, int &_z)
bool MSIMUreadGyroAxes(tSensors link, int &_x, int &_y, int &_z)
bool MSIMUreadMagneticFields(tSensors link, int &_x, int &_y, int &_z)
bool MSIMUreadTiltAxes(tSensors link, int &_x, int &_y, int &_z)
bool MSIMUsetGyroFilter(tSensors link, ubyte level)
bool _MSIMUsendCMD(tSensors link, ubyte cmd)
int MSIMUreadHeading(tSensors link)

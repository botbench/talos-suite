bool NXTCAMinit(tSensors link, ubyte address = NXTCAM_I2C_ADDR)
bool NXTCAMinit(tSensors link, ubyte address)
bool NXTCAMinitTL(tSensors link, ubyte address = NXTCAM_I2C_ADDR)
bool NXTCAMinitTL(tSensors link, ubyte address)
bool _camera_cmd(tSensors link, byte cmd, ubyte address)
int NXTCAMgetBlobs(tSensors link, blob_array &blobs, bool mergeBlobs, ubyte address = NXTCAM_I2C_ADDR)
int NXTCAMgetBlobs(tSensors link, blob_array &blobs, bool mergeBlobs, ubyte address)
int NXTCAMgetBlobs(tSensors link, blob_array &blobs, ubyte address = NXTCAM_I2C_ADDR)
int NXTCAMgetBlobs(tSensors link, blob_array &blobs, ubyte address)
int _merge(int nblobs, blob_array &blobs)
int _mergeBlobs(int blob1, int blob2, int nblobs, blob_array &blobs)
void NXTCAMgetAverageCenter(blob_array &blobs, int nblobs, int colourindex, int &x, int &y)
void NXTCAMgetCenter(blob_array &blobs, int index, int &x, int &y)
void _sortBlobs(int nblobs, blob_array &blobs)

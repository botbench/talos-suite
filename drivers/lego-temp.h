bool LEGOTMPreadAccuracy(tSensors link, tLEGOTMPAccuracy &accuracy)
bool LEGOTMPreadTemp(tSensors link, float &temp)
bool LEGOTMPsetAccuracy(tSensors link, tLEGOTMPAccuracy accuracy)
bool LEGOTMPsetContinuous(tSensors link)
bool LEGOTMPsetSingleShot(tSensors link)
bool _LEGOTMPreadConfig(tSensors link, ubyte &config)
bool _LEGOTMPsetConfig(tSensors link, ubyte &config)
tLEGOTMPAccuracy _LEGOTMPconvertAccuracy(ubyte config)

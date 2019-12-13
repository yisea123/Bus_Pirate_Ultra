void setBoundingBox(uint16_t xs, uint16_t xe, uint16_t ys, uint16_t ye);
void writeLCDcommand(uint16_t command);
void writeLCDdata(uint16_t data);
void setupLCD(void);
void initializeLCD(void);
void clearLCD(void);
void writeCharacterToLCD(uint8_t c);
void updateLCD(uint8_t initial);
void writeFileToLCD(void);
void writeByteNumberToLCD(uint8_t c);
void writePSUstate(void);
void modeLabelsSetupLCD(const char *labels);
void enableLCD(void);
void disableLCD(void);
void initializeILI9341(void);
#ifndef LCD_H
#define LCD_H
void InitLCD(void);
void clearDisplay();
void SEND_CHAR (unsigned char c);
void SEND_CMD (unsigned char e);
void MAKE_DEFINED_CHAR(unsigned char c);
void Delayx100us(unsigned char b);
void InitDisplayFull();
void WyslijNapis(const char*, int, int);
#endif

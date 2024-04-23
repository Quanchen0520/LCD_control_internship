#include <LiquidCrystal.h> //引用LCD函式庫
const int rs = 48, en = 46, d4 = 50, d5 = 51, d6 = 52, d7 = 53; // 定義LCD相關腳位
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#define RW 47 //定義LCD讀寫模式腳位 

void setup() {
  pinMode(RW,OUTPUT); // 設定 RW 腳為輸出腳
  digitalWrite(RW,0); // 設定RW腳位模式為輸出，並設為讀取模式 (0:讀取模式,1:寫入模式) 
  lcd.begin(16, 2); // 設定LCD的字元數與行數
  lcd.print("Hello, Arduion!"); // 顯示訊息
}

void loop() {
  lcd.setCursor(0, 1); // 設定起始位置為第 0 字元，第 1 行
  lcd.print(millis() / 1000); // 顯示 Arduino 的開機總時長
}

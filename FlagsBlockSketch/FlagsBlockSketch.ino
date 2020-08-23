// Flag's Block 產生的草稿碼

// setup() 會先被執行且只會執行一次
void setup() {
  Serial.begin(9600);
}

// loop() 裡面的程式會不斷重複執行
void loop() {
  Serial.println("Hello World.");
  delay(2000);
}

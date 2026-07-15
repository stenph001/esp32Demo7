#include <Arduino.h>
#include <WiFi.h>

#define LED       2

char *ssid="redmi k80";
char *password="12345678";


void setup() {
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  WiFi.begin(ssid,password);
  Serial.println("ESP32 启动成功！");
  while(WiFi.status()!=WL_CONNECTED){
    digitalWrite(LED,!digitalRead(LED));
    Serial.println("..");
    delay(500);
  }
  Serial.println("连接成功");
  Serial.println("WIFI地址");
  Serial.print(WiFi.localIP());
  digitalWrite(LED,0);
}

void loop() {
//   Serial.println("Hello ESP32");
//   Serial.println("AAA");
//     //digitalWrite(2, !digitalRead(2));  // 板载LED闪烁
//  delay(50);
}
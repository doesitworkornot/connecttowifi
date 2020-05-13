#include <Arduino.h>
#include <WiFi.h>

char ssid[]="urssid";
char password[]="urpassword";
int status = WL_IDLE_STATUS;

void setup()
{
 Serial.begin(9600);
 while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, password);
    delay(10000);
}
Serial.print("Connected");
}

void loop(){

}

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//PASTE KODE TOKEN EMAIL
char auth[] = "3mM8R5Jw7ku6w16PG0_ltegAmN-Tl4rp";

char ssid[] = "Rio_wifi";       // NAMA WIFI
char pass[] = "Rivierio2025";// PAS WIFI

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);
}

void loop()
{
  Blynk.run();
}

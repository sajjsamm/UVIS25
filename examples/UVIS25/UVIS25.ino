#include <Wire.h>
#include <UVIS25.h>

UVIS25 UV; //Ultraviolet sensor


void setup(){
  
  Wire.begin();
  UV.init();
  Serial.begin(9600);
}
void loop(){
	
	Serial.println(UV.readUV());
    delay(100);
}
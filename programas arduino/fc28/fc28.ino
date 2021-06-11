 int SensorPin = A0;
 void setup() {
   Serial.begin(9600);
 }
   // 0 sumergido en agua hasta 1023
   // en el aire (o en un suelo muy seco)
 void loop() {  
   int humedad = analogRead(SensorPin);
   Serial.println(humedad);
   delay(1000);
 }
 
 

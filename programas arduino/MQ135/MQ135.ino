#define MQ_CO2 (2) // pin declarado
int mql135;

void setup() {
   
  Serial.begin(9600);
}

void loop() {
  
  mql135=analogRead(MQ_CO2);
  Serial.print(mql135,DEC);
  Serial.println(" ppm de CO2"); //calidad de aire
  delay(500);

}

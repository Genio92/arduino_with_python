float temp_c=0;
float temp_f=0;
float hum=0;
void setup() {
Serial.begin(115200);
}

void loop() {
  
for (int i =0;i<=345;i++){
  temp_c=float(i)/3.0;
  temp_f=temp_c+73.2;
  hum=temp_c+33.9;
  Serial.print(temp_c);
  Serial.print(",");
  Serial.print(temp_f);
  Serial.print(",");
  Serial.println(hum);
  delay(200);
  }
for (int i =345;i>=0;i--){
  temp_c=float(i)/3.0;
  temp_f=temp_c+73.2;
  hum=temp_c+33.9;
  Serial.print(temp_c);
  Serial.print(",");
  Serial.print(temp_f);
  Serial.print(",");
  Serial.println(hum);
  delay(202);
  }
  
}

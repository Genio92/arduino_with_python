int red_value;
int green_value;
int blue_value;
void setup() {
Serial.begin(115200);
pinMode(12,OUTPUT);

}

void loop() {
if(Serial.available()){
  red_value=Serial.readStringUntil(':').toInt();//.......... very important single comma (char) not double (string)
  green_value=Serial.readStringUntil(':').toInt();
  blue_value=Serial.readStringUntil('\r').toInt();
  Serial.print(red_value);
  Serial.print(":");
  Serial.print(green_value);
  Serial.print(":");
  Serial.println(blue_value);
  if(red_value==255)digitalWrite(12,1);
  else digitalWrite(12,0);
  }
}

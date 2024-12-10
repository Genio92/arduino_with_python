#define led 12
String cmd;
void setup() {
Serial.begin(115200);
pinMode(led,OUTPUT);
}

void loop() {
 if(Serial.available()==1){
  cmd=Serial.readStringUntil("\r");
  Serial.println(cmd);
  if(cmd=="on"){digitalWrite(led,HIGH);}
  if(cmd=="off"){digitalWrite(led,LOW);}
  }


}

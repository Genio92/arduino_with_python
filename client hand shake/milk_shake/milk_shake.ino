#define pot_x A0
#define pot_y A1
String data;
void setup() {
  pinMode(pot_x,INPUT);
  pinMode(pot_y,INPUT);
  Serial.begin(115200);

}

void loop() {
if(Serial.available()){
data=Serial.readStringUntil('\n');
if (data=="x read"){
  Serial.print("x read:");
  Serial.println(analogRead(pot_x));
}
else if (data=="y read"){
  Serial.print("y read:");
  Serial.println(analogRead(pot_y));
}
else Serial.println("E:");
  
}
  
}



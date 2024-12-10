#define pot_x A0
#define pot_y A1
#define push_bot A2

void setup() {
 pinMode(pot_x,INPUT);
 pinMode(pot_y,INPUT);
 pinMode(push_bot,INPUT);
 digitalWrite(push_bot,HIGH);
 Serial.begin(115200); 

}

void loop() {
  int x_value=analogRead(pot_x);
  int y_value=analogRead(pot_y);
  bool bot_value=digitalRead(push_bot);
  Serial.print(x_value);
  Serial.print(":");
  Serial.print(y_value);
  Serial.print(":");
  Serial.println(bot_value);
  delay(10);

}

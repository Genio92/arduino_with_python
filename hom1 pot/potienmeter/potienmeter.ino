#define pot A0
int pot_value;
void setup() {
pinMode(pot,INPUT);
Serial.begin(115200);

}

void loop() {
 pot_value=analogRead(pot);
 Serial.println(pot_value);
 delay(100);

}

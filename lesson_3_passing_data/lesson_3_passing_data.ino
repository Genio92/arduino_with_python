int x=1;
int y=10;
int z=100;


void setup() {
Serial.begin(115200);

}

void loop() {
Serial.print(x);
Serial.print(",");
Serial.print(y);
Serial.print(",");
Serial.println(z);


delay(100);
x++;
y++;
z++;
}

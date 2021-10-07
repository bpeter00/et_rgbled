int r=9;
int b=10;
int g=11;
void setup() {
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);

  digitalWrite(r,1);
  delay(500);
  digitalWrite(r,0);
  digitalWrite(b,1);
  delay(500);
  digitalWrite(b,0);
  digitalWrite(g,1);
  delay(500);
  digitalWrite(g,0);

  digitalWrite(b,1);
  digitalWrite(r,1);
  digitalWrite(g,1);
}

void loop() {
  // put your main code here, to run repeatedly:

}

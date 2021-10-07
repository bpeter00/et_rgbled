int r=9;
int b=10;
int g=11;
int poti=0;
int poti2=0;
int poti3=0;
int kapcs=2;
byte fenyEro=0;
byte fenyEro2=0;
byte fenyEro3=0;
byte irany=1;
bool mukodik=true;
void setup() {
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(kapcs,INPUT_PULLUP);
  Serial.begin(9600);

 /* digitalWrite(r,1);
  delay(500);
  digitalWrite(r,0);
  digitalWrite(b,1);
  delay(500);
  digitalWrite(b,0);
  digitalWrite(g,1);
  delay(500);
  digitalWrite(g,0);

  digitalWrite(b,0);
  digitalWrite(r,0);
  digitalWrite(g,0);*/

  /*analogWrite(r, 122);
  analogWrite(g, 0);
  analogWrite(b, 122);*/

  
}

void loop() {
if (mukodik){
poti=analogRead(A0);
fenyEro=map(poti,0,1023,0,255);
analogWrite(g, fenyEro);


poti2=analogRead(A1);
fenyEro2=map(poti2,0,1023,0,255);
analogWrite(r, fenyEro2);

poti3=analogRead(A2);
fenyEro3=map(poti3,0,1023,0,255);
analogWrite(b, fenyEro3);
}else
{
  digitalWrite(r,0);
  digitalWrite(b,0);
  digitalWrite(g,0);
}
/*Serial.print("kapcsolo: ");
Serial.println(digitalRead(kapcs));*/

if (digitalRead(kapcs)==0)
{
  delay(100);
  if (digitalRead(kapcs)==0){
  Serial.println("Gomb megnyomva");
  mukodik=!mukodik;
  Serial.println(mukodik);
  }
}

 /*if (fenyEro==255) {irany=-1;}
 if (fenyEro==0) irany=1;
 fenyEro=fenyEro+irany;
 delay(10);*/
 

}

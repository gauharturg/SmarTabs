
int but=7;
int count;
boolean flag=false,knopka;
void setup() {
  // put your setup code here, to run once:
  pinMode(but,INPUT);
Serial.begin(9600);
}

void loop() {
  knopka=digitalRead(but);
  if(knopka==HIGH&&flag==false)
  {
    flag=true;}
   if(knopka==LOW&&flag==true)
   {
    count++;
    flag=false;
    }
    Serial.println(count);
  // put your main code here, to run repeatedly:

}

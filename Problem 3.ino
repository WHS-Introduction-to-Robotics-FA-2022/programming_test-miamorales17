int inPin = A2;
int val = 0;

void setup()
{
   Serial.begin(9600);
    pinMode(inPin,INPUT);
    
}

void loop()
{
   val = analogRead(inPin);
   
   
   Serial.println(val,HEX);
    delay(250);
}

int counter=0;
int reading;


void setup()
{
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,INPUT);
 
}

void loop()
{
 
reading=digitalRead(7);
  if(reading==1)
  {
    counter++;
  
  if(counter==1)
  {digitalWrite(6,1);}
  else if(counter==2)
  {
    digitalWrite(5,1);
    digitalWrite(6,0);
  
  }
  else if(counter==3)
  {
    digitalWrite(4,1);
    digitalWrite(5,0);
  }
  else if(counter==4)
  {
    digitalWrite(4,0);
    counter=0;
  }
   
    delay(250);
  }

}

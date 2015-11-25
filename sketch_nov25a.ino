void setup (){
pinMode(13,OUTPUT);
}
void loop(){
for (int a=0; a<=255;a++) 
{
analogWrite(13,a); 
delay(2); 
} 
for (int a=255; a>=0;a--) 
{ 
analogWrite(13,a); 
delay(2); 
} 
delay(300); 
}

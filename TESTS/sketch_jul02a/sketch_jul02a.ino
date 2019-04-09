int RED[8];
int GREEN[8];
int BLUE[8];
//
//pin map
int clockpin = 2;
int datapin = 3;
//
//setup code
void setup()
{
pinMode(clockpin, OUTPUT);
pinMode(datapin, OUTPUT);
for (int i=0;i<8;i++)
{
RED[i]=0;
BLUE[i]=0;
GREEN[i]=0;
}
}
//
void updatestring()
{
for(int i=0;i<8;i++)
{
shiftOut(datapin, clockpin, MSBFIRST, BLUE[i]);
shiftOut(datapin, clockpin, MSBFIRST, GREEN[i]);
shiftOut(datapin, clockpin, MSBFIRST, RED[i]);
}
}
//
void loop()
{
for(int i=0;i<8;i++)
{
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=0;GREEN[i]=0;BLUE[i]=0;
delay(300);
}
}

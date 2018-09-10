#define INA1  5
#define INA2  4
#define INA3  3
#define INA4  2
#define INB1  6
#define INB2  7
#define INB3  8
#define INB4  9

#define belt_step 10
#define belt_dir 11

#define slider_step 13
#define slider_dir 12

#define punch A0 

# define no_of_char_per_line 4
# define no_of_lines_per_page 4

char c;
int Stepsa = 0,characters=0, lines=1;
int Stepsb =0;
unsigned long last_timea=micros(),last_timeb=micros();
unsigned long currentMillisa,currentMillisb;
int steps_lefta,steps_leftb;
void setup()
{
  Serial.begin(9600);
  pinMode(INA1, OUTPUT); 
  pinMode(INA2, OUTPUT); 
  pinMode(INA3, OUTPUT); 
  pinMode(INA4, OUTPUT);
  pinMode(INB1, OUTPUT); 
  pinMode(INB2, OUTPUT); 
  pinMode(INB3, OUTPUT); 
  pinMode(INB4, OUTPUT); 
  pinMode(belt_step, OUTPUT);
  pinMode(belt_dir, OUTPUT);
  pinMode(slider_step, OUTPUT);
  pinMode(slider_dir, OUTPUT);
  digitalWrite(belt_dir, HIGH);
  digitalWrite(slider_dir, HIGH);
  pinMode(punch, OUTPUT);
}
void loop()
{
  if(Serial.available()>0)
  {
    c=Serial.read();
    //Serial.println(c);
    switch(c)
    {
       case 'a':
               number(7,0);
               belt();
               number(1,0);
               break;
       case 'A':
               number(7,0);
               belt();
               number(1,0);
               break;
       case 'b':
               number(6,0);
               belt();
               number(2,0);
               break;
        case 'B':
               number(6,0);
               belt();
               number(2,0);
               break;
        case 'c':
               number(7);
               belt(0);
               number(1);
               number(1);
               belt(1);
               number(7);
               break;
       case 'C':
               number(7,1);
               belt();
               number(1,7);
               break;
       case 'd':
               number(7,4);
               belt();
               number(1,4);
               break;
        case 'D':
               number(7,4);
               belt();
               number(1,4);
               break;
        case 'e':
               number(7,3);
               belt();
               number(1,5);
               break;
       case 'E':
               number(7,3);
               belt();
               number(1,5);
               break;
       case 'f':
               number(6,1);
               belt();
               number(2,7);
               break;
        case 'F':
               number(6,1);
               belt();
               number(2,7);
               break;
        case 'g':
               number(6,4);
               belt();
               number(2,4);
               break;
       case 'G':
               number(6,4);
               belt();
               number(2,4);
               break;
       case 'h':
               number(6,3);
               belt();
               number(2,5);
               break;
        case 'H':
               number(6,3);
               belt();
               number(2,5);
               break;
        case 'i':
               number(3,1);
               belt();
               number(5,7);
               break;
       case 'I':
               number(3,1);
               belt();
               number(5,7);
               break;
       case 'j':
               number(3,4);
               belt();
               number(5,4);
               break;
        case 'J':
               number(3,4);
               belt();
               number(5,4);
               break;
        case 'k':
               number(2,0);
               belt();
               number(6,0);
               break;
       case 'K':
               number(2,0);
               belt();
               number(6,0);
               break;
       case 'l':
               number(5,0);
               belt();
               number(3,0);
               break;
        case 'L':
               number(5,0);
               belt();
               number(3,0);
               break;
        case 'm':
              number(2,1);
               belt();
               number(6,7);
               break;
       case 'M':
               number(2,1);
               belt();
               number(6,7);
               break;
       case 'n':
               number(6,4);
               belt();
               number(2,4);
               break;
        case 'N':
               number(6,4);
               belt();
               number(2,4);
               break;
        case 'o':
               number(2,3);
               belt();
               number(6,5);
               break;
       case 'O':
               number(2,3);
               belt();
               number(6,5);
               break;
       case 'p':
               number(5,1);
               belt();
               number(3,7);
               break;
        case 'P':
               number(5,1);
               belt();
               number(3,7);
               break;
        case 'q':
               number(5,4);
               belt();
               number(3,4);
               break;
       case 'Q':
               number(5,4);
               belt();
               number(3,4);
               break;
       case 'r':
               number(5,3);
               belt();
               number(3,5);
               break;
        case 'R':
               number(5,3);
               belt();
               number(3,5);
               break;
        case 's':
               number(4,1);
               belt();
               number(4,7);
               break;
       case 'S':
               number(4,1);
               belt();
               number(4,7);
               break;
       case 't':
               number(4,4);
               belt();
               number(4,4);
               break;
        case 'T':
               number(4,4);
               belt();
               number(4,4);
               break;
        case 'u':
               number(2,7);
               belt();
               number(6,1);
               break;
       case 'U':
               number(2,7);
               belt();
               number(6,1);
               break;
       case 'v':
               number(5,7);
               belt();
               number(3,1);
               break;
        case 'V':
               number(5,7);
               belt();
               number(3,1);
               break;
        case 'W':
               number(3,5);
               belt();
               number(5,3);
               break;
       case 'w':
               number(3,5);
               belt();
               number(5,3);
               break;
       case 'x':
               number(2,2);
               belt();
               number(6,6);
               break;
        case 'X':
               number(2,2);
               belt();
               number(6,6);
               break;
        case 'y':
               number(2,5);
               belt();
               number(6,3);
               break;
       case 'Y':
               number(2,5);
               belt();
               number(6,3);
               break;
       case 'z':
               number(2,6);
               belt();
               number(6,2);
               break;
        case 'Z':
               number(2,6);
               belt();
               number(6,2);
               break;
    }
    Serial.println(c);
  }
}
void number(int sta)
{
  steps_lefta=((sta*4096)/8)-1;
  //steps_leftb=((stb*4096)/8)-1;
    while(steps_lefta>0)
    {
   
          
          steppera(); 
          delayMicroseconds(850);
          steps_lefta--;    
    }
}
void steppera(){
switch(Stepsa){
   case 0:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, HIGH);
   break; 
   case 1:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, HIGH);
     digitalWrite(INA4, HIGH);
   break; 
   case 2:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, HIGH);
     digitalWrite(INA4, LOW);
   break; 
   case 3:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, HIGH);
     digitalWrite(INA3, HIGH);
     digitalWrite(INA4, LOW);
   break; 
   case 4:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, HIGH);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
   case 5:
     digitalWrite(INA1, HIGH); 
     digitalWrite(INA2, HIGH);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
     case 6:
     digitalWrite(INA1, HIGH); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
   case 7:
     digitalWrite(INA1, HIGH); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, HIGH);
   break; 
   default:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
}
Stepsa++;
if(Stepsa>7){Stepsa=0;}
} 
/*void stepperb(){
switch(Stepsb){
   case 0:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, HIGH);
   break; 
   case 1:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, HIGH);
     digitalWrite(INB4, HIGH);
   break; 
   case 2:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, HIGH);
     digitalWrite(INB4, LOW);
   break; 
   case 3:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, HIGH);
     digitalWrite(INB3, HIGH);
     digitalWrite(INB4, LOW);
   break; 
   case 4:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, HIGH);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 
   case 5:
     digitalWrite(INB1, HIGH); 
     digitalWrite(INB2, HIGH);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 

   
     case 6:
     digitalWrite(INB1, HIGH); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 
   case 7:
     digitalWrite(INB1, HIGH); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, HIGH);
   break; 
   default:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 
}
Stepsb++;
if(Stepsb>7){Stepsb=0;}
}*/

void belt(int option)
{
  if(characters<no_of_char_per_line)
  {
    if(option==1)
    {
      digitalWrite(punch, HIGH);
      delay(100);
      digitalWrite(punch, LOW);
      digitalWrite(belt_dir, LOW);
      for(int i=0;i<50;i++)
      {
        digitalWrite(belt_step, HIGH);
        delayMicroseconds(1000);
        digitalWrite(belt_step, LOW);
        delayMicroseconds(1000);
      }
      characters++;
    }
    else if(option==0)
    {
      digitalWrite(punch, HIGH);
      delay(100);
      digitalWrite(punch, LOW);
      digitalWrite(belt_dir, LOW);
      for(int i=0;i<10;i++)
      {
        digitalWrite(belt_step, HIGH);
        delayMicroseconds(1000);
        digitalWrite(belt_step, LOW);
        delayMicroseconds(1000);
      }
    }
  }
  if(characters==no_of_char_per_line)
  {
      delay(100);
      digitalWrite(belt_dir, HIGH);
      for(int i=0;i<((no_of_char_per_line-1)*50);i++)
      {
        digitalWrite(belt_step, HIGH);
        delayMicroseconds(1000);
        digitalWrite(belt_step, LOW);
        delayMicroseconds(1000);
      }
      for(int i=0;i<((no_of_char_per_line)*10);i++)
      {
        digitalWrite(belt_step, HIGH);
        delayMicroseconds(1000);
        digitalWrite(belt_step, LOW);
        delayMicroseconds(1000);
      }
      if(lines<no_of_lines_per_page)
      {
        digitalWrite(slider_dir, HIGH);
        for(int i=0;i<20;i++)
        {
          digitalWrite(slider_step, HIGH);
          delayMicroseconds(1000);
          digitalWrite(slider_step, LOW);
          delayMicroseconds(1000);
        }
        characters=0;
        lines++;
      }
      if(lines==no_of_lines_per_page)
      {
        digitalWrite(slider_dir, LOW);
        for(int i=0;i<no_of_lines_per_page*20;i++)
        {
          digitalWrite(slider_step, HIGH);
          delayMicroseconds(1000);
          digitalWrite(slider_step, LOW);
          delayMicroseconds(1000);
        }
        characters=0;
        lines=0;
      }
      
  }
      Serial.println(characters);
}
  /*if(characters>=no_of_char_per_line);
  {
    characters=0; 
    digitalWrite(belt_dir, HIGH);
    for(int i=0;i<((no_of_char_per_line-1)*50);i++)
    {
      digitalWrite(belt_step, HIGH);
      delayMicroseconds(1000);
      digitalWrite(belt_step, LOW);
      delayMicroseconds(1000);
    }
    for(int i=0;i<20;i++)
    {
      digitalWrite(slider_step, HIGH);
      delayMicroseconds(1000);
      digitalWrite(slider_step, LOW);
      delayMicroseconds(1000);
    }
    
  }
}*/
  



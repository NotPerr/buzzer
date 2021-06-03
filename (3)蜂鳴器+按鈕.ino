// C++ code
//
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

int buttonpin1=0;
int buttonpin2=0;
int buttonpin3=0;
int buttonpin4=0;
int buttonpin5=0;
int buttonpin6=0;
int buttonpin7=0;
int buttonpin8=0;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10,OUTPUT);
}

void loop()
{
  buttonpin1 = digitalRead(2); 
  buttonpin2 = digitalRead(3);
  buttonpin3 = digitalRead(4);
  buttonpin4 = digitalRead(5);
  buttonpin5 = digitalRead(6);
  buttonpin6 = digitalRead(7);
  buttonpin7 = digitalRead(8);
  buttonpin8 = digitalRead(9);
  
  if(buttonpin1 == LOW){
      tone(10, NOTE_C3, 100);
      delay(100);
      noTone(10);
    }
  else if(buttonpin2 == LOW){
      tone(10, NOTE_D3, 100);
      delay(100);
      noTone(10);
    }
  else if(buttonpin3 == LOW){
      tone(10, NOTE_E3, 100);
      delay(100);
      noTone(10);
    }
  else if(buttonpin4 == LOW){
      tone(10, NOTE_F3, 100);
      delay(100);
      noTone(10);
    }
  else if(buttonpin5 ==LOW){
      tone(10, NOTE_G3, 100);
      delay(100);
      noTone(10);
    }
  else if(buttonpin6 == LOW){
      tone(10, NOTE_A3, 100);
      delay(100);
      noTone(10);
    }
  else if(buttonpin7 == LOW){
      tone(10, NOTE_B3, 100);
      delay(100);
      noTone(10);
    }
  else if(buttonpin8 == LOW){
      tone(10, NOTE_C4, 100);
      delay(100);
      noTone(10);
    }
}
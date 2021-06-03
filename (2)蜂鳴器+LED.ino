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

int melody[]={
  NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3,
  NOTE_A3, NOTE_F3, NOTE_E3, NOTE_D3, NOTE_C3};

int noteDurations[] = {
 4,4,4,4,2,
 8,4,2,2,2};

byte pins[8]={4, 5, 6, 7, 8, 9};

void setup()
{
   for (byte i = 0; i < 6; ++i) {
   pinMode(pins[i], OUTPUT); 
  }
}

void loop()
{
  for (int thisNote = 0; thisNote < 10; thisNote++){
    
                                                    
    if(melody[thisNote] == NOTE_C3){
      digitalWrite(pins[0], HIGH);
      digitalWrite(pins[0], LOW);}
    
    else if(melody[thisNote] == NOTE_D3){
      digitalWrite(pins[1], HIGH);
      digitalWrite(pins[1], LOW);}
    
    else if(melody[thisNote] == NOTE_E3){
      digitalWrite(pins[2], HIGH);
      digitalWrite(pins[2], LOW);}
    
    else if(melody[thisNote] == NOTE_F3){
      digitalWrite(pins[3], HIGH);
      digitalWrite(pins[3], LOW);}
    
    else if(melody[thisNote] == NOTE_G3){
      digitalWrite(pins[4], HIGH);
      digitalWrite(pins[4], LOW);}
    
    else if(melody[thisNote] == NOTE_A3){
      digitalWrite(pins[5], HIGH);
      digitalWrite(pins[5], LOW);}
    
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(10, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(10);
  }
  delay(200);
}
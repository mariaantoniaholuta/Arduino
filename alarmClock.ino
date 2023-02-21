#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
#define REST 0

int melody[] = {
  NOTE_FS5, NOTE_FS5, NOTE_D5, NOTE_B4, NOTE_B4, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5,
  NOTE_A5, NOTE_A5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5,
  NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5
};

int durations[] = {
  8, 8, 8, 4, 4, 4,
  4, 5, 8, 8, 8, 8,
  8, 8, 8, 4, 4, 4,
  4, 5, 8, 8, 8, 8
};
int songLength = sizeof(melody) / sizeof(melody[0]);

//star wars

int tempoStarWars = 108;

int dividerStarWars = 0, noteDurationStarWars = 0;
int melodyStarWars[] = {

  NOTE_AS4, 8, NOTE_AS4, 8, NOTE_AS4, 8,  //1
  NOTE_F5, 2, NOTE_C6, 2,
  NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,
  NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,
  NOTE_AS5, 8, NOTE_A5, 8, NOTE_AS5, 8, NOTE_G5, 2, NOTE_C5, 8, NOTE_C5, 8, NOTE_C5, 8,
  NOTE_F5, 2, NOTE_C6, 2,
  NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,

  NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,  //8
  NOTE_AS5, 8, NOTE_A5, 8, NOTE_AS5, 8, NOTE_G5, 2, NOTE_C5, -8, NOTE_C5, 16,
  NOTE_D5, -4, NOTE_D5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
  NOTE_F5, 8, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 4, NOTE_D5, 8, NOTE_E5, 4, NOTE_C5, -8, NOTE_C5, 16,
  NOTE_D5, -4, NOTE_D5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,

  NOTE_C6, -8, NOTE_G5, 16, NOTE_G5, 2, REST, 8, NOTE_C5, 8,  //13
  NOTE_D5, -4, NOTE_D5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
  NOTE_F5, 8, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 4, NOTE_D5, 8, NOTE_E5, 4, NOTE_C6, -8, NOTE_C6, 16,
  NOTE_F6, 4, NOTE_DS6, 8, NOTE_CS6, 4, NOTE_C6, 8, NOTE_AS5, 4, NOTE_GS5, 8, NOTE_G5, 4, NOTE_F5, 8,
  NOTE_C6, 1

};
int notesStarWars = sizeof(melodyStarWars) / sizeof(melodyStarWars[0]) / 2;
int wholenoteStarWars = (60000 * 4) / tempoStarWars;



//#include <Adafruit_LiquidCrystal.h>
//Adafruit_LiquidCrystal lcd(0);


#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);


//animation matrix
byte clock[4][8] = {
  {
    B11111,
    B10101,
    B10101,
    B10101,
    B10001,
    B10001,
    B11111,
  },

  {
    B11111,
    B10001,
    B10001,
    B10111,
    B10001,
    B10001,
    B11111,
  },

  {
    B11111,
    B10001,
    B10001,
    B10101,
    B10101,
    B10101,
    B11111,
  },

  {
    B11111,
    B10001,
    B10001,
    B11101,
    B10001,
    B10001,
    B11111,
  }

};

byte note[4][8] = {
  { B00000,
    B00000,
    B01000,
    B01100,
    B01010,
    B01000,
    B11000,
    B11000 },

  { B00000,
    B00100,
    B00110,
    B00101,
    B00100,
    B01100,
    B01100,
    B00000 },

  { B00000,
    B00000,
    B01111,
    B01001,
    B01001,
    B11011,
    B11011,
    B00000 },

  { B00000,
    B00000,
    B11110,
    B10010,
    B10010,
    B11011,
    B11011,
    B00000 }

};

int stare = 0;
int stare2 = 4;
int time = 0;
unsigned long startTime;
unsigned long prevTime = 0;
unsigned long activTime = 0;
int songVal;
int setAlarmMenu;
int setSongMenu;

int secAlarm = 40;
int minAlarm = 0;
int hourAlarm = 9;

int buttonVar_1 = 0;
int buttonVar_2 = 0;
int alarmTime = 0;

int songSelection = 0;

unsigned long sec = 0;
unsigned long min = 0;
unsigned long hour = 9;

String inputString = "";
boolean stringComplete = false;
String alarmString = "";

int songMenuPin = 19;
//int songMenuPin = 21;
int alarmMenuPin = 20;
int changeSongPin = 18;


void setup() {
  lcd.begin(16, 2);

  lcd.createChar(0, clock[0]);
  lcd.createChar(1, clock[1]);
  lcd.createChar(2, clock[2]);
  lcd.createChar(3, clock[3]);

  lcd.createChar(4, note[0]);
  lcd.createChar(5, note[1]);
  lcd.createChar(6, note[2]);
  lcd.createChar(7, note[3]);

  lcd.begin(16, 2);

  delay(1000);

  //SET alarm menu
  pinMode(alarmMenuPin, INPUT_PULLUP);

  //change song selection
  pinMode(changeSongPin, INPUT_PULLUP);

  //SET song menu
  pinMode(songMenuPin, INPUT_PULLUP);


  Serial.begin(9600);
  startTime = millis() / 1000;
  inputString.reserve(200);
}


void loop() {

  setAlarmMenu = digitalRead(alarmMenuPin);
  songVal = digitalRead(changeSongPin);
  setSongMenu = digitalRead(songMenuPin);

  if (songVal == LOW) {
    songSelection++;
    if (songSelection > 1) {
      songSelection = 0;
    }
    Serial.println(" SONG 0 - StarWars \n SONG 1 - TakeOnMe");
    Serial.println("Selected song: ");
    Serial.println(songSelection);
    animationMenu();
  }

  //read from serial monitor
  byte n = Serial.available();  //to check that a charterer has come from Serial Monitor
  if (n != 0) {
    char x = Serial.read();
    inputString += x;
    //Serial.println(x);
    if (inputString.length() == 8 && inputString[2] == ':' && inputString[5] == ':') {
      alarmString = inputString;
    } else {
      Serial.println("Format hh:mm:ss");
      Serial.println("waiting to create the string...");
      Serial.print("Step ");
      Serial.print(inputString.length());
      Serial.println("/7");
      Serial.println(inputString);
    }
  }


  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(stare);
  lcd.setCursor(5, 0);
  lcd.print("Set Alarm-1");
  lcd.setCursor(10, 1);
  lcd.print("Song-2");
  stare++;
  lcd.setCursor(15, 0);
  if (stare == 4) {
    stare = 0;
  }

  //clock time
  lcd.setCursor(0, 1);
  activTime = (millis() / 1000) - startTime;
  if (prevTime < activTime) {
    sec++;
    prevTime = activTime;
  }

  if (sec >= 60) {
    min++;
    sec = 0;
  }

  if (min >= 60) {
    hour++;
    min = 0;
  }

  if (hour >= 24) {
    hour = 0;
  }

  if (hour < 10) {
    lcd.print("0");
    lcd.print(hour);
  } else {
    lcd.print(hour);
  }

  lcd.print(":");

  if (min < 10) {
    lcd.print("0");
    lcd.print(min);
  } else {
    lcd.print(min);
  }

  lcd.print(":");
  if (sec < 10) {
    lcd.print("0");
    lcd.print(sec);
  } else {
    lcd.print(sec);
  }

  if (sec == secAlarm && min == minAlarm && hour == hourAlarm && activTime > 0) {
    alarmTime = 1;
    Serial.print("alarm BEGIN!! ");
    //song2_star_wars();

    if (songSelection == 0) {
      song2_star_wars();
    } else {
      song1_take_on_me();
    }
  }

  delay(1000);


  if (setAlarmMenu == LOW) {
    setAlarm();
    //setSong();
  }

  if (setSongMenu == LOW) {
    songSelection++;
    if (songSelection > 1) {
      songSelection = 0;
    }
    setSong();
  }
}

void setAlarm() {
  buttonVar_1 = 1;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Alarm at:");
  if (alarmString.length() == 8) {
    if (alarmString.length() == 8 && alarmString[2] == ':' && alarmString[5] == ':') {

      lcd.setCursor(0, 1);
      lcd.print(alarmString);
    }
    if (alarmString[6] == '0') {
      secAlarm = alarmString[7] - '0';
    } else {
      secAlarm = 10 * (alarmString[6] - '0') + (alarmString[7] - '0');
    }
    if (alarmString[3] == '0') {
      minAlarm = alarmString[4] - '0';
    } else {
      minAlarm = 10 * (alarmString[3] - '0') + (alarmString[4] - '0');
    }
    if (alarmString[0] == '0') {
      hourAlarm = alarmString[1] - '0';
    } else {
      hourAlarm = 10 * (alarmString[0] - '0') + (alarmString[1] - '0');
    }
  }

  else {
    lcd.setCursor(0, 1);
    lcd.print(hourAlarm);
    lcd.print(":");
    lcd.print(minAlarm);
    lcd.print(":");
    lcd.print(secAlarm);
  }

  Serial.println("h: ");
  Serial.println(hourAlarm);
  Serial.println(hour);
  Serial.println("m: ");
  Serial.println(minAlarm);
  Serial.println(min);
  Serial.println("s: ");
  Serial.println(secAlarm);
  Serial.println(sec);

  if (sec == secAlarm && min == minAlarm && hour == hourAlarm) {
    alarmTime == 1;
    Serial.print("alarm!! ");
  }
  delay(5000);
}

void setSong() {
  Serial.println(" SONG 0 - StarWars \n SONG 1 - TakeOnMe");
  Serial.println("Selected song: ");
  Serial.println(songSelection);
  buttonVar_2 = 1;
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("SONG1");
  lcd.setCursor(8, 1);
  lcd.print("SONG2");

  lcd.setCursor(14, 0);
  if (songSelection == 0) {
    lcd.setCursor(6, 1);
    lcd.print("*");
    lcd.setCursor(8, 0);
    lcd.print("StarWars");
  } else {
    lcd.setCursor(14, 1);
    lcd.print("*");
    lcd.setCursor(8, 0);
    lcd.print("TakeOnMe");
  }

  //animation2
  lcd.setCursor(0, 0);
  lcd.print("Song");

  lcd.write(stare2);
  lcd.write(stare2 + 1);
  delay(500);
  stare2++;
  lcd.setCursor(5, 0);
  lcd.write(stare2);
  lcd.write(stare2 + 1);
  delay(500);
  stare2++;
  lcd.setCursor(5, 0);
  lcd.write(stare2);
  lcd.write(stare2 + 1);
  delay(500);
  stare2++;
  lcd.setCursor(5, 0);
  lcd.write(stare2);
  lcd.write(stare2 - 1);

  delay(500);
  if (stare2 == 7) {
    stare2 = 4;
  }
  delay(5000);

  buttonVar_2 = 0;
}


void animationMenu() {
  int j = 0;
  lcd.clear();
  
  for(int i = 0; i <= 15; i++) {
    lcd.setCursor(i, j);
    lcd.write(4);
    delay(250);
    
    if(j == 0)
      j = 1;
    else 
      j = 0;
  }
  
 for(int i = 0; i <= 15; i++) {
    lcd.setCursor(i, j);
    lcd.write(6);
    
    
    if(j == 0)
      j = 1;
    else 
      j = 0;
    lcd.setCursor(i-1, j);
    lcd.write(7);
    delay(250);
  }
  
}

void song1_take_on_me() {
  for (int thisNote = 0; thisNote < songLength; thisNote++) {
    // determine the duration of the notes that the computer understands
    // divide 1000 by the value, so the first note lasts for 1000/8 milliseconds
    int duration = 1000 / durations[thisNote];
    tone(8, melody[thisNote], duration);
    // pause between notes
    int pause = duration * 1.3;
    delay(pause);
    // stop the tone
    noTone(8);
  }
}

void song2_star_wars() {
  for (int thisNote = 0; thisNote < notesStarWars * 2; thisNote = thisNote + 2) {

    dividerStarWars = melodyStarWars[thisNote + 1];
    if (dividerStarWars > 0) {
      noteDurationStarWars = (wholenoteStarWars) / dividerStarWars;
    } else if (dividerStarWars < 0) {
      noteDurationStarWars = (wholenoteStarWars) / abs(dividerStarWars);
      noteDurationStarWars *= 1.5;
    }

    tone(8, melodyStarWars[thisNote], noteDurationStarWars * 0.9);

    delay(noteDurationStarWars);

    noTone(8);
  }
}
/* 
 Educational BoosterPack MK II - Birthday Tune
http://boosterpackdepot.info/wiki/index.php?title=Educational_BoosterPack_MK_II
 
 Play birthday tune through the buzzer, demonstrating
 buzzer tune() API and pitch/tone (hence music) generation
 
 Dec 2012 - Created for Educational BoosterPack
            buzzer Pin = 19
 Dec 2013 - Modified for Educational BoosterPack MK II
            buzzer Pin = 40
 by Dung Dang
 
 */

#define NOTE_C4_1 260

int buzzerPin = 40;
int buttonPin = 32;
// notes in the melody:

// note durations: 4 = quarter note, 8 = eighth note, etc.:


void setup() 
{
pinMode(buzzerPin,OUTPUT);
}
void loop() 
{

 
;
    tone(40, 277, 1000);

      //delay between pulse
    delay(50);
    
    noTone(buzzerPin);                // stop the tone playing
  }
}

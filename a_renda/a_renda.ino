#include <SwitchControlLibrary.h>

void setup(){
  // put your setup code here, to run once:
  for(int i=0;i<3;i++){
    SwitchControlLibrary().PressButtonR();
    delay(50);
    SwitchControlLibrary().ReleaseButtonR();
    delay(500);
    SwitchControlLibrary().PressButtonL();
    delay(50);
    SwitchControlLibrary().ReleaseButtonL();
    delay(500);
  }
  delay(2000);
}

void loop() {
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
}

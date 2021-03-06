#include <SwitchControlLibrary.h>

int n = 10;

void setup() {
  SwitchControlLibrary();

  for (int i=0;i<50;i++) {
    SwitchControlLibrary().PressButtonL();
    SwitchControlLibrary().PressButtonR();
    SwitchControlLibrary().ReleaseButtonL();
    SwitchControlLibrary().ReleaseButtonR();
  }

  delay(5000);

  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  delay(300);

  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  delay(300);

  delay(5000);

  for (int i=0;i<n;i++) {
    // ウッウロボ開始
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(2000);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(3000);

    // アイテム選択
    // 前回の最後のカーソル位置が上から2番目なので、1番目に戻す
    SwitchControlLibrary().MoveHat(0); // up
    delay(50);
    SwitchControlLibrary().MoveHat(8); // center
    delay(200);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    // down
    SwitchControlLibrary().MoveHat(4); // down
    delay(50);
    SwitchControlLibrary().MoveHat(8); // center
    delay(100);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);


    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    // 選択終了

    delay(2000);

    // 決定
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(3000);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(2000);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(4000);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(7000);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(1000);

    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);

    delay(3000);
  }
}

void loop() {
}

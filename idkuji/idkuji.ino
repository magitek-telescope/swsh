#include <SwitchControlLibrary.h>

void setup(){
  // put your setup code here, to run once:
  SwitchControlLibrary().PressButtonR();
  delay(50);
  SwitchControlLibrary().ReleaseButtonR();
  delay(500);
  SwitchControlLibrary().PressButtonL();
  delay(50);
  SwitchControlLibrary().ReleaseButtonL();
  delay(500);
  SwitchControlLibrary().PressButtonR();
  delay(50);
  SwitchControlLibrary().ReleaseButtonR();
  delay(500);
  SwitchControlLibrary().PressButtonR();
  delay(50);
  SwitchControlLibrary().ReleaseButtonR();
  delay(500);
  SwitchControlLibrary().PressButtonL();
  delay(50);
  SwitchControlLibrary().ReleaseButtonL();
  delay(500);
  SwitchControlLibrary().PressButtonR();
  delay(50);
  SwitchControlLibrary().ReleaseButtonR();
  delay(2000);
}

void loop() {
  
  // ロトミに話しかける
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(300);
  delay(300);

  // 選択画面に行く
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(300);

  // ID くじをえらぶ
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);

  // A連打 (レポートを書くロト？とかをYesにする)
  for (int i=0;i< 10; i++) {
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(300);
  }

  // B連打 (Aだと話しかけてしまう可能性があるので、安定をとってメッセージをすすめる)
  for (int i=0;i < 50; i++) {
    SwitchControlLibrary().PressButtonB();
    delay(50);
    SwitchControlLibrary().ReleaseButtonB();
    delay(200);
  }

  // ホーム画面に戻る
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(1000);

  // ↓→→→Aで ⚙ マークを押す
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1500);

  // ↓→↓↓↓Aで本体設定にいく
  SwitchControlLibrary().MoveHat(4); // down
  delay(2000);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(500);

  // ↓↓Aで時計
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(500);

  // →→↑AAAでずらしを確定
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(0); // up
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(200);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);

  // ホームからゲームに戻る
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(1000);

  // リセット処理 (A連打でロトミに話しかけるところまで)
  for (int i=0;i<3;i++) {
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(200);
  }

  // リセット処理 (戻りのためにロトミキャンセル連打)
  for (int i=0;i<10;i++) {
    SwitchControlLibrary().PressButtonB();
    delay(50);
    SwitchControlLibrary().ReleaseButtonB();
    delay(200);
  }

}


/*
        @file   Fibonacci.ino
        @brief  フィボナッチ数列生成
        @author CaseyNelson314
        @date   2021/10/10
*/

#define SetNum 40 //生成数(MAX47)

void setup() {
  Serial.begin(115200);
  //FibOut[0]は不使用

  unsigned long FibOut[SetNum + 1];
  FibOut[0] = 0;
  FibOut[1] = 1;
  for (int i = 2; i - 2 < SetNum; i++) FibOut[i] = FibOut[i - 1] + FibOut[i - 2];
  for (int i = 1; i - 1 < SetNum; i++) Serial.println(FibOut[i]);
}

void loop() {
}

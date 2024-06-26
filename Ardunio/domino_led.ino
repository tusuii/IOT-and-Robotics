//optimized code
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() 
{
  for (int i = 0; i < sizeof(leds)/sizeof(leds[0]); i++) 
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() 
{
  for (int i = 0; i < sizeof(leds)/sizeof(leds[0]); i++) 
  {
    logic(i);
  }

  for (int i = sizeof(leds)/sizeof(leds[0]) - 1; i >= 0; i--) 
  {
    logic(i);
  }
}

void logic(int i)
{
  digitalWrite(leds[i], HIGH);
  delay(500);
  digitalWrite(leds[i], LOW);
}

// non optimized code
// ------------------------------------------------
// int led1 = 2;
// int led2 = 3;
// int led3 = 4;
// int led4 = 5;

// int led5 = 6;
// int led6 = 7;
// int led7 = 8;
// int led8 = 9;

// void setup() {
//   pinMode(led1, OUTPUT);
//   pinMode(led2, OUTPUT);
//   pinMode(led3, OUTPUT);
//   pinMode(led4, OUTPUT);

//   pinMode(led5, OUTPUT);
//   pinMode(led6, OUTPUT);
//   pinMode(led7, OUTPUT);
//   pinMode(led8, OUTPUT);
// }

// void loop() {
  
//   for(int i=0;i<9;i++){
//     digitalWrite(led1 + i, HIGH);
//     delay(500);
//     digitalWrite(led1 + i,LOW);
//   }

//   for(int i=9;i>0;i--){
//     digitalWrite(led1 + i, HIGH);
//     delay(500);
//     digitalWrite(led1 + i,LOW);
//   }
// }

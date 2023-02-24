
#define pin_c 3
#define pin_d 4
#define pin_e 5
#define pin_b 6
#define pin_a 7
#define pin_f 8
#define pin_g 9


int num_0[] = {pin_b, pin_c, pin_a, pin_d, pin_e, pin_f, 0};
int num_1[] = {pin_b, pin_c, 0};
int num_2[] = {pin_a, pin_b, pin_g, pin_e, pin_d, 0};
int num_3[] = {pin_a, pin_b, pin_g, pin_c, pin_d, 0};
int allpins[] = {pin_a, pin_b, pin_c, pin_d, pin_e, pin_f, pin_g, 0};

int* nums[] = {num_0, num_1, num_2, num_3};

void setup() {

  pinMode(pin_c, OUTPUT);
  pinMode(pin_d, OUTPUT);
  pinMode(pin_e, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_a, OUTPUT);
  pinMode(pin_f, OUTPUT);
  pinMode(pin_g, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {

  for(int i = 0; i < 4; i++){
      writeNum(i);
      delay(1000);    
  }               
}

void writeNum(int i) {

  for(int j = 0; j < i; j++){

    digitalWrite(LED_BUILTIN, LOW);
    delay(50);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
  }
  digitalWrite(LED_BUILTIN, LOW);

  int* current_row = nums[i];
  for(int j =0; j < sizeof(allpins) ;j++) {
      digitalWrite(allpins[j], LOW);
  }
  delay(200);
  for(int j =0; *(current_row + j) != 0;j++) {
      digitalWrite(*(current_row + j), HIGH);
  }
}
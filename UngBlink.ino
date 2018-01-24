//ส่วนของการประกาศตัวแปร
int myOutput = D7;
int myOutput2 = D8;

int myDelayTime = 3000; //ค่าของเวลาจะมีหน่วยเป็น มิลิวินาที




//ส่วนของ Setup คือ ส่วนที่กำหนดค่าคงที่ ที่จะใช้ ในโค้ด จะทำงานครั้งแรก ครั้งเดียว
void setup() {

//  ส่วนที่กำหนด การส่ง Digital Out จากขาของ Node
  pinMode(myOutput, OUTPUT);
  pinMode(myOutput2, OUTPUT);


  
} // end of setup

//ส่วนของ loop จะทำงาน วนไปมา ตาม Digital Logic
void loop() {

//  for myOutput
  digitalWrite(myOutput, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelayTime);                       // wait for a second
  digitalWrite(myOutput, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelayTime);                       // wait for a second

//  for myOutput2
  digitalWrite(myOutput2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelayTime);                       // wait for a second
  digitalWrite(myOutput2, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelayTime);                       // wait for a second

  
} // end of Loop







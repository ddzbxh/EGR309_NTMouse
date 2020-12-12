//13下一栏，7上一栏，2左键，5右键，8VCC
double abc=0;

void setup() {
  for(int i=2;i<=13;i++){pinMode(i,OUTPUT);}
  digitalWrite(8,HIGH);
  Serial.begin(9600);
}

void loop() {
   if (Serial.available()>0){ 
   abc = Serial.parseInt();       
   Serial.println(abc);
   abc = abc*3.38;
   Serial.println(abc);
   digitalWrite(2,HIGH);            
   delay(int(abc));                    
   digitalWrite(2,LOW);              
  }
}

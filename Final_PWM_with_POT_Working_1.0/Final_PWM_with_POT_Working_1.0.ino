#define controlPin A0
float PWM_OUT = 9;
float duty  ;
float onTime;

void setup()
{
  pinMode(PWM_OUT, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}
 
void loop(){
 
 int potValue = analogRead(controlPin);
float duty =map(potValue, 0,1023,.50, 9.00)/10.00;
 
 
  onTime = floor(duty*50);
  digitalWrite(PWM_OUT, HIGH);
  digitalWrite(13, HIGH);
  delay(onTime);
  digitalWrite(PWM_OUT,LOW);
  digitalWrite(13, LOW);
  Serial.print("DUTY:");  
  Serial.print(duty*50);
  Serial.print(" it is:");  
  delay(50-onTime);
}

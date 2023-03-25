
#define pwmPin 9
#define controlPin A0

int PWM_OUT = 9;
//float duty = .35;
int onTime;
void setup()
{
  pinMode(PWM_OUT, OUTPUT);
  pinMode(13, OUTPUT);
}
 void loop() 
{
  int potValue = analogRead(controlPin);

  int pwm =map(potValue, 0,1023, 0, .9);

    //pwm = toPWM(0);

  analogWrite(pwmPin,pwm);
  Serial.print("PWM:");  
  Serial.print(pwm);
  Serial.print(" it is:");  
  Serial.print(pwmToPercent(pwm));  
  Serial.println("%");    
  
  delay(500);

}


int toPWM(int v){
  return map(v, 0,100,0,255);
}


int pwmToPercent(int p)
{
 return map(p, 0,.9,0,.100); 


}

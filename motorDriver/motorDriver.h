class MotorDriver{

 int in1_pin; //in1 port for motor
 int in2_pin; //in2 port for motor
 bool motor_reverse; //in1 is positive, in2 is negative. If motor_reverse = true, in2 is positive.
 int PWM_pin;

 public:
 MotorDriver (int in1_pin, int in2_pin, bool motor_reverse, int PWM_pin){
   this->in1_pin = in1_pin; //sets port for in1
   this->in2_pin = in2_pin; //sets port for in2 
   this->PWM_pin = PWM_pin; //sets PWM port
   this->motor_reverse = motor_reverse; //if motor is reversed, reverse = true
 }

 void setMotor(int MotorValue){

   if((MotorValue < 0 && motor_reverse == true) || (motor_reverse == false && MotorValue >=0))
   {
    digitalWrite(in1_pin,HIGH);
    digitalWrite(in2_pin,LOW);
   }
   else if((MotorValue < 0 && motor_reverse == false) || (MotorValue >=0 && motor_reverse == true))
   {
    digitalWrite(in1_pin,LOW);
    digitalWrite(in2_pin,HIGH);
   }
   
    analogWrite(PWM_pin, abs(MotorValue));
 }
};

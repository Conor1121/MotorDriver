class MotorDriver
{
  public:
    int in1_pin; //in1 port for motor
    int in2_pin; //in2 port for motor
    bool motor_reverse; //in1 is positive, in2 is negative. If motor_reverse = true, in2 is positive.
    int PWM_pin;
    void setMotor(int MotorValue);
};

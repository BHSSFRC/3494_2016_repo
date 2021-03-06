#ifndef Rollers_H
#define Rollers_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include <ctime>
#include "../CommandBase.h"

class Rollers: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon* talon_rollers_lift_left;
	// CANTalon* talon_rollers_lift_right;
	CANTalon* roller_left;
	CANTalon* roller_right;
	double duration;

	double down;

	//commented out clock for now until we know how to use it
	//std::clock_t start;
	double timeElapsed = 0.0;
	double speed = 0.0;
	PowerDistributionPanel* pdp;

	//No idea which is which please change
	double leftCurrent;
	double rightCurrent;

	bool bCheck;
public:
	Rollers();
	void InitDefaultCommand();
	void Roll(bool forward, double _speed);
	bool CheckRoll(double _duration);
	void Roller_Lift(float magnitude);
};

#endif

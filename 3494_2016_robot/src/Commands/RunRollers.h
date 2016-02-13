#ifndef RunRollers_H
#define RunRollers_H

#include "../CommandBase.h"
#include "Subsystems/Rollers.h"
#include "WPILib.h"

class RunRollers: public CommandBase
{
private:
	bool direction;
public:
	RunRollers(bool _direction);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
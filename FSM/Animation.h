#pragma once
#include "State.h"
class Animation
{
private:
	State* m_currentState;
public:
	Animation();
	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();
};


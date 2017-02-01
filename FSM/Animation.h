#pragma once

class State;

class Animation
{
private:
	State* m_currentState;
public:
	Animation();
	~Animation();
	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();
};


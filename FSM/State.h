#pragma once
#include <iostream>
#include "Animation.h"
using namespace std;

class State
{
protected:

public:
	State();
	~State();

	virtual void idle(Animation* a)
	{
		cout << "State::Idling" << endl;
	}

	virtual void jumping(Animation* a)
	{
		cout << "State::Jumping" << endl;
	}

	virtual void climbing(Animation* a)
	{
		cout << "State::Climbing" << endl;
	}
};


class Idle : public State
{
public:
	Idle() {  };
	~Idle() {  };
	void jumping(Animation* a);
	void climbing(Animation* a);
};

class Jumping : public State
{
public:
	Jumping() {  };
	~Jumping() {  };
	void idle(Animation* a);
};

class Climbing : public State
{
public:
	Climbing() {  };
	~Climbing() {  };
	void idle(Animation* a);
};
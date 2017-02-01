#include "stdafx.h"
#include "State.h"


State::State()
{
}


State::~State()
{
}

void Idle::jumping(Animation* a)
{
	cout << "Going from Idling to Jumping" << endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::climbing(Animation* a)
{
	cout << "Going from Idling to Climbing" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::idle(Animation * a)
{
	cout << "Going from Climbing to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::idle(Animation * a)
{
	cout << "Going from Jumping to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

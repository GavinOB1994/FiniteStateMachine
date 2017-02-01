#include "stdafx.h"
#include "Animation.h"
#include "State.h"

Animation::Animation()
{
	m_currentState = new Idle();
}

void Animation::setCurrent(State * s)
{
	m_currentState = s;
}

void Animation::idle()
{
	m_currentState->idle(this);
}

void Animation::jumping()
{
	m_currentState->jumping(this);
}

void Animation::climbing()
{
	m_currentState->climbing(this);
}


Animation::~Animation()
{
}

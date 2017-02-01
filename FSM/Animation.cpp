#include "stdafx.h"
#include "Animation.h"


Animation::Animation()
{
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

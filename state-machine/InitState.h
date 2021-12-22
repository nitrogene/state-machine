#pragma once
#include "State.h"

namespace States 
{
	class InitState : public State
	{
	public:
		InitState():State("InitState")
		{

		}

		void OnEntry() override
		{
			State::OnEntry();
		}
	};
}
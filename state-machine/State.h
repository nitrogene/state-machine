#pragma once
#include <string>
#include <iostream>

namespace States 
{
	class State 
	{
	protected:
		const std::string m_name;

	public:
		State(const std::string& name) :m_name(name)
		{

		}

		virtual void OnEntry()
		{
			std::cout << m_name << "::OnEntry" << std::endl;
		}
	};
}

#include "StateMachine.h"
#include <cassert>
#include <queue>
#include <mutex>

int main(int argc, char** argv)
{
	States::InitState initState{};

	boost::sml::sm<
		StateMachine, 
		boost::sml::process_queue<std::queue>,
		boost::sml::thread_safe<std::recursive_mutex>
	> sm(StateMachine(), initState);

	sm.process_event(Events::StartEvent{});

	
	return 0;
}
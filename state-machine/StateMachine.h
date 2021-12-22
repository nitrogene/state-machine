#pragma once
#include <boost/sml.hpp>
#include "Events.h"
#include "InitState.h"

class StateMachine
{
public:
	auto operator()() const noexcept
	{
		using boost::sml::_;
		using boost::sml::event;
		using boost::sml::make_transition_table;
		using boost::sml::on_entry;
		using boost::sml::on_exit;
		using boost::sml::state;

		const auto entryPoint =state<class entryPoint>;

		return make_transition_table(
			*entryPoint + event<Events::StartEvent> = state<States::InitState>
			, state<States::InitState> + on_entry<_> / &States::InitState::OnEntry
		);
	}
};
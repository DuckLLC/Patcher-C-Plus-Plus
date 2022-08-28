#include "Pcpp.h"

Pcpp::Pcpp()
{
	Pcpp::pcout("Patcher C++ V0.2 Loaded");
}

Pcpp::~Pcpp()
{
	Pcpp::psetprefix("");
	Pcpp::pcout("Ended Program Due to end of Main() Reached");
}

void Pcpp::pcout(std::string message)
{
	std::cout << prefix << message << std::endl;
}

void Pcpp::pnumberout(int message)
{
	std::cout << prefix << message << std::endl;
	Pcpp::pdebug("Ran Beta Function Pnumberout()");
}


void Pcpp::psetprefix(std::string prefix)
{
	Pcpp::prefix = prefix;
	Pcpp::prefixcopy = prefix;
	Pcpp::pdebug("Prefix Set");
}

void Pcpp::pdebug(std::string message)
{
	Pcpp::prefix = "Debug: ";
	Pcpp::pcout(message);
	Pcpp::prefix = Pcpp::prefixcopy;
}

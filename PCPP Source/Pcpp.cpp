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
	std::cout << message << std::endl;
	Pcpp::pdebug("Ran Beta Function Pnumberout()");
}

void Pcpp::pdoubleint(int num1, int num2)
{
	Pcpp::pcout("Number 1 Inputed: ");
	Pcpp::pnumberout(num1);
	Pcpp::pcout("Number 2 Inputed: ");
	Pcpp::pnumberout(num2);
}

void Pcpp::pdoublecout(std::string mesg1, std::string mesg2)
{
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

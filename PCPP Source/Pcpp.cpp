#include "Pcpp.h"

void Pcpp::pcout(std::string message)
{
	std::cout << prefix << message << std::endl;
}

void Pcpp::pdcout(std::string message)
{
	std::cout << prefix << " " << message << std::endl;
}


void Pcpp::psetprefix(std::string prefix)
{
	Pcpp::prefix = prefix;
	Pcpp::prefixcopy = prefix;
	Pcpp::pdebug("Prefix Set", "001");
}

void Pcpp::pdebug(std::string message)
{
	Pcpp::prefix = "Debug: ";
	Pcpp::pdcout(message);
	Pcpp::prefix = Pcpp::prefixcopy;
}

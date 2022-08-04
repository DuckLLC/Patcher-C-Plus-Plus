#pragma once
#include <iostream>
class Pcpp
{
private:
	bool isbeta = false;

	//cout vars
	std::string prefix = "";
	std::string prefixcopy = "";

public:
	// Works
	void pcout(std::string message);

	// For Debug Fuction
	void pdcout(std::string message);

	//sets prefix
	void psetprefix(std::string prefix);
	//Works with pcout()
	void pdebug(std::string message);

};


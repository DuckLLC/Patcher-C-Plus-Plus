#pragma once
#include <iostream>
class Pcpp
{
private:
	//add friend fucntions for plugins here

private:
	//Beta stuff
	bool isbeta = false;

	//cout vars
	std::string prefix = "";
	std::string prefixcopy = "";

public:
	Pcpp();
	~Pcpp();
	// Works
	void pcout(std::string message);

	//sets prefix
	void psetprefix(std::string prefix);
	//Works with pcout()
	void pdebug(std::string message);


};


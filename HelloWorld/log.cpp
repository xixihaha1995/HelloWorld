#include <iostream>
#include "log.h"

void Initlog()
{
	log("test log()");
}
void log(const char *message)
{
	std::cout << message << std::endl;
}

#include "../include/test.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cstdint>

std::string filename (std::uint32_t i)
{
	std::stringstream filename;
	std::string filestring[] = {"eigen", ".csv"};
	filename << filestring[0]
			 << static_cast <std::string> ("_front")
			 << std::to_string (i)
			 << filestring[1];

	return filename.str();
}

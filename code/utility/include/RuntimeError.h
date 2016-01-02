#ifndef __RUNTIME_ERROR__
#define __RUNTIME_ERROR__

#include <stdexcept>

namespace MH77 {

class RuntimeError : public std::runtime_error
{
public:
	RuntimeError (const char* what) :
		std::runtime_error (what)
	{}
};
}; //MH77 namespace

#endif

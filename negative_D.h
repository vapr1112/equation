#pragma once
#include <iostream>
#include <exception>

using namespace std;

class negative_D :
    public exception
{
private:
	string message;

public:

	negative_D() = delete;

	negative_D(string message_p) : message{ message_p } {}

	virtual  const char* what()const noexcept final override{ return message.c_str(); }

	virtual ~negative_D() = default;
};


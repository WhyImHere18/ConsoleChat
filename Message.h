#pragma once
#include <string>
//#include "User.h"

class Message
{
	const std::string sender_;
	const std::string receiver_;
	const std::string message_;
public:
	//Message(User&, User&, const std::string&);

	Message(const std::string&, const std::string&, const std::string&);

	const std::string& getSender() const;

	const std::string& getReceiver() const;

	const std::string& getMessage() const;
};


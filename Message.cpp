#include "Message.h"
#include <string>

//Message::Message(User& sender, User& receiver, const std::string& message) : sender_(sender), receiver_(receiver), message_(message) {}

Message::Message(const std::string& sender, const std::string& receiver, const std::string& message) : sender_(sender), receiver_(receiver), message_(message) {}

const std::string& Message::getSender() const
{
	return sender_;
}

const std::string& Message::getReceiver() const
{
	return receiver_;
}

const std::string& Message::getMessage() const
{
	return message_;
}
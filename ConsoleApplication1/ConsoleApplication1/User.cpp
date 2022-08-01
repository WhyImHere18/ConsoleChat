#include "User.h"
#include "Message.h"
#include <string>

User::User(std::string& login, std::string& password) : login_(login), password_(password) {
	messages_ = new Message();
}

//User::User(const User* other)
//{
//	login_ = other->login_;
//	password_ = other->password_;
//}

void User::setLogin(std::string& login)
{
	login_ = login;
}

std::string User::getLogin() const
{
	return login_;
}

void User::setPassword(std::string& password)
{
	password_ = password;
}

std::string User::getPassword() const
{
	return password_;
}


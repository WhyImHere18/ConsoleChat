#include "User.h"
#include <string>

User::User(const std::string& login, const std::string& password) : login_(login), password_(password) {}

void User::setLogin(const std::string& login)
{
	login_ = login;
}

const std::string& User::getLogin() const
{
	return login_;
}

void User::setPassword(const std::string& password)
{
	password_ = password;
}

const std::string& User::getPassword() const
{
	return password_;
}


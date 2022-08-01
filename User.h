#pragma once
#include <string>

class User
{
	std::string login_;
	std::string password_;
public:
	User(const std::string&, const std::string&);

	void setLogin(const std::string&);
	const std::string& getLogin() const;

	void setPassword(const std::string&);
	const std::string& getPassword() const;
};


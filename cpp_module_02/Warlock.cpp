#include "Warlock.hpp"

//OCF
Warlock::Warlock()
{

}

Warlock::Warlock(const Warlock &other)
{
	(void)other;
}

Warlock &Warlock::operator=(const Warlock &other)
{
	(void)other;
	return *this;
}

Warlock::~Warlock()
{
	std::cout << name_ << ": My job here is done!" << std::endl;
}

//constructors
Warlock::Warlock(const std::string &name, const std::string &title) : name_(name), title_(title)
{
	std::cout << name_ << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const std::string &type) : type_(type) {}

//Getters
const std::string &Warlock::getName() const
{
	return name_;
}

const std::string &Warlock::getTitle() const
{
	return title_;
}

const std::string &Warlock::getEffects() const
{
	return effects_;
}

const std::string &Warlock::getType() const
{
	return type_;
}

//Setters
void Warlock::setTitle(const std::string &title)
{
	title_ = title;
}

//Clone
/*
   Warlock *clone() const
   {
   return new Warlock();
   }*/

void Warlock::introduce() const
{
	std::cout << name_ << ": I am " << name_ << ", " << title_ << "!" << std::endl;
}
		
//add
void Warlock::learnSpell(ASpell *s)
{
	b_.learnSpell(s);
}

void Warlock::forgetSpell(const std::string &name)
{
	b_.forgetSpell(name);
}

void Warlock::launchSpell(const std::string &name, const ATarget &t)
{
	b_.launchSpell(name, t);
}


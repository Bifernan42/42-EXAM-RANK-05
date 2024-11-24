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
	for (std::map<std::string, ASpell *>::const_iterator it = s_.begin(); it != s_.end(); ++it)
	{
		delete it->second;
	}
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
	if (s != NULL && s_.find(s->getName()) == s_.end())
	{
		s_[s->getName()] = s->clone();
	}
}

void Warlock::forgetSpell(const std::string &name)
{
	if (s_.find(name) != s_.end())
	{
		delete s_.find(name)->second;
		s_.erase(s_.find(name));
	}
}

void Warlock::launchSpell(const std::string &name, const ATarget &t)
{
	if (s_.find(name) != s_.end())
	{
		s_.find(name)->second->launch(t);
	}
}

ASpell *Warlock::createSpell(const std::string &name)
{
	if (s_.find(name) != s_.end())
	{
		return s_.find(name)->second->clone();
	}
	return (NULL);
}

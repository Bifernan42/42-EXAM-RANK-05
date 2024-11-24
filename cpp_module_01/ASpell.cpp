#include "ASpell.hpp"
# include "ATarget.hpp"


//OCF
 ASpell::ASpell()
{

}

ASpell::ASpell(const ASpell &other)
{
	(void)other;
}

ASpell &ASpell::operator=(const ASpell &other)
{
	(void)other;
	return *this;
}

ASpell::~ASpell()
{

}

//constructors
ASpell::ASpell(const std::string &name, const std::string &effects) : name_(name), effects_(effects)
{

}

ASpell::ASpell(const std::string &type) : type_(type) {}

//Getters
const std::string &ASpell::getName() const
{
	return name_;
}

const std::string &ASpell::getTitle() const
{
	return title_;
}

const std::string &ASpell::getEffects() const
{
	return effects_;
}

const std::string &ASpell::getType() const
{
	return type_;
}

//Setters
void ASpell::setTitle(const std::string &title)
{
	title_ = title;
}

//Clone
/*
   ASpell *ASpell::clone() const
   {
   return new ASpell();
   }*/

void ASpell::launch(const ATarget &t) const
{
	t.getHitBySpell(*this);
}

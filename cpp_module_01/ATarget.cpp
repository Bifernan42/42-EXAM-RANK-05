#include "ATarget.hpp"
# include "ASpell.hpp"


//OCF
 ATarget::ATarget()
{

}

ATarget::ATarget(const ATarget &other)
{
	(void)other;
}

ATarget &ATarget::operator=(const ATarget &other)
{
	(void)other;
	return *this;
}

ATarget::~ATarget()
{

}

//constructors
ATarget::ATarget(const std::string &name, const std::string &title) : name_(name), title_(title)
{

}

ATarget::ATarget(const std::string &type) : type_(type) {}

//Getters
const std::string &ATarget::getName() const
{
	return name_;
}

const std::string &ATarget::getTitle() const
{
	return title_;
}

const std::string &ATarget::getEffects() const
{
	return effects_;
}

const std::string &ATarget::getType() const
{
	return type_;
}

//Setters
void ATarget::setTitle(const std::string &title)
{
	title_ = title;
}

//Clone
/*
   ATarget *ATarget::clone() const
   {
   return new ATarget();
   }*/

void ATarget::getHitBySpell(const ASpell &s) const
{
	std::cout << type_ << " has been " << s.getEffects() << "!" << std::endl;
}

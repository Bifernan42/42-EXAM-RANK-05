#include "Fwoosh.hpp"

//OCF
 Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::Fwoosh(const Fwoosh &other)
{
	(void)other;
}

Fwoosh &Fwoosh::operator=(const Fwoosh &other)
{
	(void)other;
	return *this;
}

Fwoosh::~Fwoosh()
{

}

Fwoosh *Fwoosh::clone() const
{
	return new Fwoosh();
}


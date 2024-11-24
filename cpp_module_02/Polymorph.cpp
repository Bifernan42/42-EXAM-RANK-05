#include "Polymorph.hpp"


//OCF
 Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::Polymorph(const Polymorph &other)
{
	(void)other;
}

Polymorph &Polymorph::operator=(const Polymorph &other)
{
	(void)other;
	return *this;
}

Polymorph::~Polymorph()
{

}

//Clone

Polymorph *Polymorph::clone() const
{
	return new Polymorph();
}


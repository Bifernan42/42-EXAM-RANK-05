#include "Fireball.hpp"


//OCF
 Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::Fireball(const Fireball &other)
{
	(void)other;
}

Fireball &Fireball::operator=(const Fireball &other)
{
	(void)other;
	return *this;
}

Fireball::~Fireball()
{

}

//Clone

Fireball *Fireball::clone() const
{
	return new Fireball();
}


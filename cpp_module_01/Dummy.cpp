#include "Dummy.hpp"

//OCF
 Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(const Dummy &other)
{
	(void)other;
}

Dummy &Dummy::operator=(const Dummy &other)
{
	(void)other;
	return *this;
}

Dummy::~Dummy()
{

}


Dummy *Dummy::clone() const
{
	return new Dummy();
}


#include "BrickWall.hpp"


//OCF
 BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::BrickWall(const BrickWall &other)
{
	(void)other;
}

BrickWall &BrickWall::operator=(const BrickWall &other)
{
	(void)other;
	return *this;
}

BrickWall::~BrickWall()
{

}

//Clone

BrickWall *BrickWall::clone() const
{
	return new BrickWall();
}


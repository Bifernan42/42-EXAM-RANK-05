#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

//class ATarget;
//class ASpell;

class BrickWall : public ATarget
{
	public:

		//OCF
		BrickWall();
		BrickWall(const BrickWall &);
		BrickWall &operator=(const BrickWall &);
		~BrickWall();

		//Clone
		BrickWall *clone() const;
};

#endif

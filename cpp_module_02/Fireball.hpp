#ifndef FIREBALL_HPP
# define FIREBALL_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

//class ATarget;
//class ASpell;

class Fireball : public ASpell
{
	public:

		//OCF
		Fireball();
		Fireball(const Fireball &);
		Fireball &operator=(const Fireball &);
		~Fireball();

		//Clone
		Fireball *clone() const;
};

#endif

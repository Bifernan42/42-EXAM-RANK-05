#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

//class ATarget;
//class ASpell;

class Polymorph : public ASpell
{
	public:

		//OCF
		Polymorph();
		Polymorph(const Polymorph &);
		Polymorph &operator=(const Polymorph &);
		~Polymorph();

		//Clone
		Polymorph *clone() const;
};

#endif

#ifndef FWOOSH_HPP
# define FWOOSH_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"

//# include <ATarget.hpp>


class Fwoosh : public ASpell
{

	public:
		Fwoosh();
		Fwoosh(const Fwoosh &);
		Fwoosh &operator=(const Fwoosh &);
		~Fwoosh();
		Fwoosh *clone() const;
};

#endif

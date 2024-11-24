#ifndef DUMMY_HPP
# define DUMMY_HPP
# include <iostream>
# include <map>
# include "ATarget.hpp"


class Dummy : public ATarget
{
	public:

		//OCF
		Dummy();
		Dummy(const Dummy &);
		Dummy &operator=(const Dummy &);
		~Dummy();
		
		Dummy *clone() const;
};

#endif

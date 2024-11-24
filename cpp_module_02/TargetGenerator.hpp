#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

//class ATarget;
//class ASpell;

class TargetGenerator //: public ATarget ASpell
{
	private:
		TargetGenerator(const TargetGenerator &);
		TargetGenerator &operator=(const TargetGenerator &);
		std::map<std::string, ATarget *> s_;
	public:

		//OCF
		TargetGenerator();
		~TargetGenerator();

		//Clone
		TargetGenerator *clone() const;

		void learnTargetType(ATarget *s);
		void forgetTarget(const std::string &name);
		ATarget *createTarget(const std::string &name);
};

#endif

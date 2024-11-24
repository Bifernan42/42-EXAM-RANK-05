#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

//class ATarget;
//class ASpell;

class SpellBook //: public ATarget ASpell
{
	private:
		SpellBook(const SpellBook &);
		SpellBook &operator=(const SpellBook &);
		std::map<std::string, ASpell *> s_;
	public:

		//OCF
		SpellBook();
		~SpellBook();

		//Clone
		SpellBook *clone() const;
		void learnSpell(ASpell *s);
		void forgetSpell(const std::string &name);
		void launchSpell(const std::string &name, const ATarget &);
		ASpell *createSpell(const std::string &name);
};

#endif

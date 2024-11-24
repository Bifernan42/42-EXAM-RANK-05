#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <iostream>
# include <map>
//# include <ASpell.hpp>

class ATarget;
//class ASpell;

class ASpell //: public ATarget ASpell
{
	private:
		
		//Attributes
		std::string name_;
		std::string type_;
		std::string effects_;
		std::string title_;
		//std::map<std::string, ASpell *> s_;
		//std::map<std::string, ATarget *> s_;

	public:

		//OCF
		ASpell();
		ASpell(const ASpell &);
		ASpell &operator=(const ASpell &);
		virtual ~ASpell();

		//constructors
		ASpell(const std::string &, const std::string &);
		ASpell(const std::string &);

		//Getters
		const std::string &getName() const;
		const std::string &getTitle() const;
		const std::string &getEffects() const;
		const std::string &getType() const;

		//Setters
		void setTitle(const std::string &);

		//Clone
		//ASpell *clone() const;
		virtual ASpell *clone() const = 0;
		void launch(const ATarget &) const;
};

#endif

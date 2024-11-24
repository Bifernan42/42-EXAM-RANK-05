#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <map>
//# include <ASpell.hpp>
//# include <ATarget.hpp>

//class ATarget;
//class ASpell;

class Warlock //public ATarget ASpell
{
	private:
		
		//Attributes
		std::string name_;
		std::string type_;
		std::string effects_;
		std::string title_;
		//std::map<std::string, ASpell *> s_;
		//std::map<std::string, ATarget *> s_;
		Warlock();
		Warlock(const Warlock &);
		Warlock &operator=(const Warlock &);

	public:

		//OCF
		~Warlock();
		//virtual ~Warlock();

		//constructors
		Warlock(const std::string &, const std::string &);
		Warlock(const std::string &);

		//Getters
		const std::string &getName() const;
		const std::string &getTitle() const;
		const std::string &getEffects() const;
		const std::string &getType() const;

		//Setters
		void setTitle(const std::string &);
		void introduce() const;
		//Clone
		//Warlock *clone() const;
		//virtual Warlock *clone() const = 0;
};

#endif

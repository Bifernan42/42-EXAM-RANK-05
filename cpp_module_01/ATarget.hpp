#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <iostream>
# include <map>
//# include <ASpell.hpp>
//# include <ATarget.hpp>

//class ATarget;
class ASpell;

class ATarget //: public ATarget ASpell
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
		ATarget();
		ATarget(const ATarget &);
		ATarget &operator=(const ATarget &);
		virtual ~ATarget();

		//constructors
		ATarget(const std::string &, const std::string &);
		ATarget(const std::string &);

		//Getters
		const std::string &getName() const;
		const std::string &getTitle() const;
		const std::string &getEffects() const;
		const std::string &getType() const;

		//Setters
		void setTitle(const std::string &);

		//Clone
		//ATarget *clone() const;
		virtual ATarget *clone() const = 0;

		//add
		void getHitBySpell(const ASpell &) const;
};

#endif

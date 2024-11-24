#include "SpellBook.hpp"


//OCF
 SpellBook::SpellBook()
{

}

SpellBook::SpellBook(const SpellBook &other)
{
	(void)other;
}

SpellBook &SpellBook::operator=(const SpellBook &other)
{
	(void)other;
	return *this;
}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell *>::const_iterator it = s_.begin(); it != s_.end(); ++it)
	{
		delete it->second;
	}
}

//Clone

SpellBook *SpellBook::clone() const
{
	return new SpellBook();
}

void SpellBook::learnSpell(ASpell *s)
{
	if (s != NULL && s_.find(s->getName()) == s_.end())
	{
		s_[s->getName()] = s->clone();
	}
}

void SpellBook::forgetSpell(const std::string &name)
{
	if (s_.find(name) != s_.end())
	{
		delete s_.find(name)->second;
		s_.erase(s_.find(name));
	}
}

void SpellBook::launchSpell(const std::string &name, const ATarget &t)
{
	if (s_.find(name) != s_.end())
	{
		s_.find(name)->second->launch(t);
	}
}

ASpell *SpellBook::createSpell(const std::string &name)
{
	if (s_.find(name) != s_.end())
	{
		return s_.find(name)->second->clone();
	}
	return (NULL);
}

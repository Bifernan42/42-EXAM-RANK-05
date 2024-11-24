#include "TargetGenerator.hpp"


//OCF
 TargetGenerator::TargetGenerator()
{

}

TargetGenerator::TargetGenerator(const TargetGenerator &other)
{
	(void)other;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &other)
{
	(void)other;
	return *this;
}

TargetGenerator::~TargetGenerator()
{
	for (std::map<std::string, ATarget *>::const_iterator it = s_.begin(); it != s_.end(); ++it)
	{
		delete it->second;
	}
}

//Clone

   TargetGenerator *TargetGenerator::clone() const
   {
   return new TargetGenerator();
   }


void TargetGenerator::learnTargetType(ATarget *s)
{
	if (s != NULL && s_.find(s->getType()) == s_.end())
	{
		s_[s->getType()] = s->clone();
	}
}

void TargetGenerator::forgetTarget(const std::string &name)
{
	if (s_.find(name) != s_.end())
	{
		delete s_.find(name)->second;
		s_.erase(s_.find(name));
	}
}

ATarget *TargetGenerator::createTarget(const std::string &name)
{
	if (s_.find(name) != s_.end())
	{
		return s_.find(name)->second->clone();
	}
	return (NULL);
}

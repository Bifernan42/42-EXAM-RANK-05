#!/bin/bash

classes=()

for class in *.hpp; do
	echo "#include \"$class\"" >> main.cpp
	if ! [ -s "$class" ]; then
	className="${class%.hpp}"
	classes+=("$className")
	fi
done

for class in "${classes[@]}"; do

	class_upper=$(echo "$class" | tr 'a-z' 'A-Z')

	echo "#ifndef ${class_upper}_HPP
# define ${class_upper}_HPP
# include <iostream>
# include <map>
# include \"ASpell.hpp\"
# include \"ATarget.hpp\"

//class ATarget;
//class ASpell;

class $class //: public ATarget ASpell
{
	public:

		//OCF
		$class();
		$class(const $class &);
		$class &operator=(const $class &);
		~$class();

		//Clone
		$class *clone() const;
};

#endif" > "${class}.hpp"

echo "#include \"${class}.hpp\"

$class::

//OCF
 $class::$class()
{

}

$class::$class(const $class &other)
{
	(void)other;
}

$class &$class::operator=(const $class &other)
{
	(void)other;
	return *this;
}

$class::~$class()
{

}

//Clone

   $class *$class::clone() const
   {
   return new $class();
   }*/
" > "${class}.cpp"

done

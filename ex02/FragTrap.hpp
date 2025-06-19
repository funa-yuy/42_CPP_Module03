#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include <cstdlib>
#include"ClapTrap.hpp"

// ------------------------------------------------
// class
// ------------------------------------------------

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& copy);
		~FragTrap();

		void highFivesGuys();

};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif

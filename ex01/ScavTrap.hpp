#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void attack(const std::string& target);

		void guardGate();

		private:
			bool keeper_mode_;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif

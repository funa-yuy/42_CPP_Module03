#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include <cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& c);
		ClapTrap& operator=(const ClapTrap& c);
		~ClapTrap();

		unsigned int getAttackDamage(void) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string name_;
		unsigned int	hit_points_; //攻撃されるとattack_damage_減少し、自己修復すると引数であるamount回復する
		unsigned int	energy_points_; //攻撃と回復に１使う
		unsigned int	attack_damage_; //敵に与えるダメージ
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif

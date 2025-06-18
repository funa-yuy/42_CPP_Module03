#include"ScavTrap.hpp"

/*
 * デフォルトコンストラクタ
 */
ScavTrap::ScavTrap() {
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	keeper_mode_ = false;
	std::cout << "ScavTrap " << name_ << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * デフォルトコンストラクタ
 */
ScavTrap::ScavTrap(std::string name) {
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	name_ = name;
	keeper_mode_ = false;
	std::cout << "ScavTrap " << name_ << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * デストラクタ
 */
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name_ << " デストラクタが呼ばれました" << std::endl;
}


void ScavTrap::attack(const std::string& target) {
	if (energy_points_ <= 0)
		std::cout << "ScavTrap " << name_ << " has 0 energy points." << std::endl;
	else if (hit_points_ <= 0)
		std::cout << "ScavTrap " << name_ << " has 0 hit_points." << std::endl;
	else
	{
		std::cout << "ScavTrap " << name_ << " attacks " << target
				<< ", causing " << attack_damage_ << " points of damage!"
				<< std::endl;
		energy_points_--;
	}
}

void ScavTrap::guardGate() {
	if (!keeper_mode_)
	{
		std::cout << "ScavTrap " << name_ << " is Gate keeper mode." << std::endl;
		keeper_mode_ = true;
	}
	else
		std::cout << "ScavTrap " << name_ << " is already Gate keeper mode." << std::endl;
}

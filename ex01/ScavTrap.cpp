#include"ScavTrap.hpp"

/*
 * デフォルトコンストラクタ
 * 明示的に親クラスのコンストラクタを呼び出した後、メンバ変数を上書き
 */
ScavTrap::ScavTrap() : ClapTrap() {
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	keeper_mode_ = false;
	std::cout << "ScavTrap " << name_ << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 * 明示的に親クラスのコンストラクタを呼び出した後、メンバ変数を上書き
 */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	keeper_mode_ = false;
	std::cout << "ScavTrap " << name_ << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy), keeper_mode_(copy.keeper_mode_) {
	std::cout << "ScavTrap " << name_ << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
ScavTrap &ScavTrap::operator=(const ScavTrap& copy) {
	if (this != &copy)
	{
		name_ = copy.name_;
		hit_points_ = copy.hit_points_;
		energy_points_ = copy.energy_points_;
		attack_damage_ = copy.attack_damage_;
		keeper_mode_ = copy.keeper_mode_;
	}
	std::cout << "ScavTrap " << name_ << " コピー代入演算子が呼ばれました" << std::endl;
	return (*this);
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

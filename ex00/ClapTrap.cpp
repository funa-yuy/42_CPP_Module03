#include"ClapTrap.hpp"

/*
 * デフォルトコンストラクタ
 */
ClapTrap::ClapTrap()
	: hit_points_(10), energy_points_(10), attack_damage_(0) {}

/*
 * デフォルトコンストラクタ
 */
ClapTrap::ClapTrap(std::string name)
	: name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {}

/*
 * コピーコンストラクタ
 */
ClapTrap::ClapTrap(const ClapTrap& c)
	: name_(c.name_), hit_points_(c.hit_points_), energy_points_(c.energy_points_), attack_damage_(c.attack_damage_) {}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
ClapTrap &ClapTrap::operator=(const ClapTrap& c) {
	if (this != &c)
	{
		this->name_ = c.name_;
		this->hit_points_ = c.hit_points_;
		this->energy_points_ = c.energy_points_;
		this->attack_damage_ = c.attack_damage_;
	}
	return (*this);
}

/*
 * デストラクタ
 */
ClapTrap::~ClapTrap() {}

unsigned int ClapTrap::getAttackDamage(void) const {
	return (attack_damage_);
}

void ClapTrap::attack(const std::string& target) {
	if (energy_points_ <= 0)
		std::cout << "ClapTrap " << name_ << " has 0 energy points." << std::endl;
	else if (hit_points_ <= 0)
		std::cout << "ClapTrap " << name_ << " has 0 hit_points." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name_ << " attacks " << target
				<< ", causing " << attack_damage_ << " points of damage!"
				<< std::endl;
		energy_points_--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hit_points_ <= 0)
		std::cout << "ClapTrap " << name_ << " has 0 hit_points." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name_ << " attacks "
				<< " as taken " << amount << " points of damage!"
				<< std::endl;
		if (amount > hit_points_)
			hit_points_ = 0;
		else
			hit_points_ -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points_ <= 0)
		std::cout << "ClapTrap " << name_ << " has 0 energy points." << std::endl;
	else if (hit_points_ <= 0)
		std::cout << "ClapTrap " << name_ << " has 0 hit_points." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name_ << " repaired "
				<< amount << " points!"
				<< std::endl;
		energy_points_--;
		hit_points_ += amount;
	}

}


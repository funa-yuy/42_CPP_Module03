#include"FragTrap.hpp"

/*
 * デフォルトコンストラクタ
 * 明示的に親クラスのコンストラクタを呼び出した後、メンバ変数を上書き
 */
FragTrap::FragTrap() : ClapTrap() {
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
	std::cout << "FragTrap " << name_ << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 * 明示的に親クラスのコンストラクタを呼び出した後、メンバ変数を上書き
 */
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
	std::cout << "FragTrap " << name_ << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	std::cout << "FragTrap " << name_ << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
FragTrap &FragTrap::operator=(const FragTrap& copy) {
	if (this != &copy)
	{
		name_ = copy.name_;
		hit_points_ = copy.hit_points_;
		energy_points_ = copy.energy_points_;
		attack_damage_ = copy.attack_damage_;
	}
	std::cout << "FragTrap " << name_ << " コピー代入演算子が呼ばれました" << std::endl;
	return (*this);
}

/*
 * デストラクタ
 */
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name_ << " デストラクタが呼ばれました" << std::endl;
}


void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name_ << " requests a positive high five!" << std::endl;
}

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main( void ) {

	std::cout << "--- 呼び出される順番 ---\n";
	{
		FragTrap child1;
	}
	std::cout << "\n";
	{
		FragTrap child2("child2");
	}
	std::cout << "\n";

	std::cout << "--- ClapTrapのメンバ関数を使用できる？ ---\n";
	FragTrap child3("child3");
	child3.attack("Target"); //ClapTrapのattack()が呼び出される
	child3.takeDamage(5);
	child3.beRepaired(2);
	std::cout << "\n";

	std::cout << "--- highFivesGuys機能テスト ---\n";
	FragTrap child4("child4");
	child4.highFivesGuys();
	child4.highFivesGuys();
	std::cout << "\n";


	std::cout << "--- 100ダメージを与えてHPを0にするテストト ---\n";
	FragTrap child5("child5");
	child5.takeDamage(100);
	child5.attack("Dummy");	// HP0では攻撃できない
	child5.beRepaired(10);	// HP0では回復できない
	std::cout << "\n";

	return 0;
}

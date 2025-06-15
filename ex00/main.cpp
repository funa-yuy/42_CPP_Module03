#include"ClapTrap.hpp"

int main( void ) {
	ClapTrap foge("Foge");

	foge.attack("Target");
	foge.takeDamage(5);
 	foge.beRepaired(2);

	std::cout << "\n";

	/* エネルギー切れテスト */
	ClapTrap foo("Foo");
	for (size_t i = 0; i < 12; i++)
		foo.attack("Target");

	std::cout << "\n";

	/* HPゼロ後の自己修復 */
	ClapTrap piyo("Piyo");
	piyo.takeDamage(12);
 	piyo.beRepaired(3);

	std::cout << "\n";

	/* unsigned intのオーバーフロー処理確認 */
	ClapTrap fuga("Fuga");
	fuga.takeDamage(5);
	fuga.takeDamage(10);
 	fuga.beRepaired(3);

	return 0;
}

#include <iostream>

int main()
{
	int a = 0;
	int b = 0;

	std::cout << "Entrez votre calcul : ";
	std::cin >> a >> b;
	std::cin.ignore();

	std::cout << "resultat 1 + resultat 2 = " << a + b << std::endl;
	std::cin.ignore();

	return 0;
}

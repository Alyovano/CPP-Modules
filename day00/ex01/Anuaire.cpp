#include "AnuaireClass.hpp"

int		main()
{
	std::string user_input;
	Anuaire anuaire[8];

	std::cout << "*******Bienvenu dans l'anuaire*******" << std::endl;
	while (1) {
		std::cout << "Anuaire CMD: ";
		std::getline(std::cin, user_input);
		if (user_input.compare("") == 0)
			continue ;
		else if (user_input.compare("ADD") == 0)
		{
			printf("Ok add\n");
		}
		else if (user_input.compare("SEARCH") == 0)
		{
			printf("Ok search\n");
		}
		else if (user_input.compare("EXIT") == 0)
		{
			std::cout << "Aurevoir" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "Mauvaise commande" << std::endl;
		}
	}


    std::cin >> user_input;
	std::cout << user_input;
	// printf("%s\n", user_input);
	return (0);
}
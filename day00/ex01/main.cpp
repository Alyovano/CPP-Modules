#include "AnnuaireClass.hpp"

void	welcome(void)
{
	std::cout << "**************************************" << std::endl;
	std::cout << "*******Bienvenu dans l'annuaire*******" << std::endl;
	std::cout << "**************************************" << std::endl;
}

int		main()
{
	std::string user_input;
	Annuaire contact[8];

	welcome();
	while (1) {
		std::cout << "Annuaire CMD: ";
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
	return (0);
}
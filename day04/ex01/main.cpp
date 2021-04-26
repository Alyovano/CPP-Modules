#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int		main() {

	// PLASMARIFLE TEST
	{
		std::cout << "PLASMARIFLE TEST" << std::endl;
		PlasmaRifle *plasma = new PlasmaRifle;
		std::cout << "APcoast : " << plasma->getAPCost() << std::endl;
		std::cout << "Damages : " << plasma->getDamage() << std::endl;
		std::cout << "Name : " << plasma->getName() << std::endl;
		std::cout << "Attaque : ";
		plasma->attack();
		delete plasma;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	// POWERFIST TEST
	{
		std::cout << "POWERFIST TEST" << std::endl;
		PowerFist *pf = new PowerFist;
		std::cout << "APcoast : " << pf->getAPCost() << std::endl;
		std::cout << "Damages : " << pf->getDamage() << std::endl;
		std::cout << "Name : " << pf->getName() << std::endl;
		std::cout << "Attaque : ";
		pf->attack();
		delete pf;
	}
	return 0;

}
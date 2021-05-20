#include "mutantstack.hpp"
#include <stdlib.h>
int			main() {
	MutantStack<int> a;

	a.push(59);
	a.push(60);
	a.push(89);
	a.push(777);
	a.push(8888);
	a.push(99999);
	a.push(10101010);
	std::cout << "Size de mon conteneur stack= " << a.size() << std::endl;

	std::cout << "=============================" << std::endl;
	std::cout << "Conteneur de strings" << std::endl;


	MutantStack<std::string> str;
	str.push("Salut ");
	str.push("tout ");
	str.push("le ");
	str.push("monde ");
	str.push("(test).");
	std::cout << "Size de mon conteneur stack(string)= " << str.size() << std::endl;
	
	std::cout << "Iteration a travers stack" << std::endl;
	for (MutantStack<std::string>::it iter = str.begin() ;
					 iter != str.end(); iter++) {
						 std::cout << *iter;			
	}
	std::cout << std::endl;
	
	std::cout << "=============================" << std::endl;
	std::cout << "Conteneur d'int'" << std::endl;
	for (MutantStack<int>::it iterator_int = a.begin();
	iterator_int != a.end(); iterator_int++) {
		std::cout << *iterator_int;
		std::cout << std::endl;
	}

	std::cout << "=============================" << std::endl;
	std::cout << "Conteneur de double" << std::endl;
	MutantStack<double> dbl;
	dbl.push(111.111);
	dbl.push(222.222);
	dbl.push(333.333);
	dbl.push(444.444);
	dbl.push(555.555);
	dbl.push(666.666);
	dbl.push(777.777);

	for (MutantStack<double>::const_it itdb = dbl.begin(); itdb != dbl.end(); itdb++) {
		std::cout << *itdb << std::endl;
	}
	
	
	std::cout << "=============================" << std::endl;
	std::cout << "Copy stack to stack" << std::endl;
	MutantStack<double> copy(dbl); // Copie de stack double
	for (MutantStack<double>::const_it itcopy = copy.begin(); itcopy != copy.end(); itcopy++) {
		std::cout << *itcopy << std::endl;
	}

	return EXIT_SUCCESS;
}
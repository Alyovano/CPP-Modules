#include <iostream>
#include <string.h>

int		main(int argc, char *argv[]) {
	int i = 1;
	int j = 0;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (argv[i]) {
		j = 0;
		while (argv[i][j]) {
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
#include <iostream>
#include <string>

int		is_Readable_Number(std::string str) {

}

// int		convert(std::string str) {

// }

int		main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Argument-Error : ./Convert + <arg>" << std::endl;
		return EXIT_FAILURE;
	}
	std::string arg = argv[1];
	if (is_Readable_Number(arg) == EXIT_FAILURE) {
		std::cout << "Argument-Error : Just a number" << std::endl;
	}
}
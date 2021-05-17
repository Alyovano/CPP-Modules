#include <stdlib.h> // random
#include <time.h> // time for random
#include <iostream>
#include <string>

struct	Data {
	std::string s1;
	int n; 
	std::string s2; 
};

void*	serialize(void);
char	random_char(void);
Data*	deserialize(void* raw);

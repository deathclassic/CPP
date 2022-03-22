#include "ScalarConversion.hpp"

int main(int argc, char **argv){
	if (argc != 2) {
		std::cout << "invalid input\n";
		return 0;
	}
	ScalarConversion conv1(argv[1]);
	std::cout << '\n';
	ScalarConversion conv2(conv1);
	std::cout << '\n';
	ScalarConversion conv3 = conv2;
	return (0);
}
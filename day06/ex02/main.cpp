#include <iostream>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void) {
	int	i;

	i = rand() % 3;
	if (!i)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p) {
	if (dynamic_cast<A *>(p))
		std::cout << "type: A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "type: B\n";
	else if (dynamic_cast<C *>(p))
		std::cout <<"type: C\n";
	else
		std::cerr << "(null)\n";
}

void	identify(Base &p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "type: A\n";
	}
	catch (std::bad_cast){}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "type: B\n";
	}
	catch (std::bad_cast){}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "type: C\n";
	}
	catch (std::bad_cast){}
}

int main(void) {
	srand(time(0));
	Base *basePtr = generate();
	// Base *empty = NULL;
	Base &baseRef = *(generate());

	identify(basePtr);
	identify(baseRef);
	// identify(empty);

	delete &baseRef;
	delete basePtr;
	return (0);
}
#include <iostream>

struct	data {
	int		i;
	char	c;
	float	f;
};

void	init_data(data *ptr, char c, int i, float f) {
	ptr->c = c;
	ptr->i = i;
	ptr->f = f;
}

uintptr_t	serialize(data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

data	*deserialize(uintptr_t raw) {
	return (reinterpret_cast<data *>(raw));
}

int main(){
	data		*ptr = new data();
	data		*ptr2;
	uintptr_t	raw;

	init_data(ptr, 'a', 77, 77.77f);
	raw = serialize(ptr);

	std::cout << "ptr addres:\t" << ptr << '\n';
	std::cout << "ptr data:\ti =" << ptr->i << "; i = " << 
	ptr->i << "; f = " << ptr->f << '\n';
	std::cout << "raw address:\t" << &raw << '\n';
	ptr2 = deserialize(raw);
	std::cout << "ptr2 addres:\t" << ptr2 << '\n';
	std::cout << "ptr2 data:\ti = " << ptr2->i << "; i = " << 
	ptr2->i << "; f = " << ptr2->f << '\n';
	delete ptr;
	return (0);
}
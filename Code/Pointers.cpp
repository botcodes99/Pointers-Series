#include <iostream>

int main(int argc, const char** argv) 
{
	int number = 45;

	std::cout << "The address of the number without pointer is: " << &number << std::endl;

	// void * ptr = &number;
	void * ptr;
	ptr = &number;

	std::cout << "The address of the number with pointer is: " << ptr << std::endl;
	// std::std::cout << "The value at ptr is: " << *ptr << std::endl; ## It will give an error as a void pointer cannot be derefrenced.

	// Lets declare a integer pointer

	int * int_ptr = & number;

	std::cout << "The value at the address " << int_ptr << " is :" << *int_ptr << std::endl;

	// Lets increment the value

	(*int_ptr) ++;

	std::cout << "The value at ptr after increment is: " << *int_ptr << std::endl;

	// Lets change the value at the pointer

	*int_ptr = 67;

	std::cout << "The value at ptr after change is: " << *int_ptr << std::endl;

	// Lets print the address of the pointer variables

	std::cout << "The address of the int_ptr is: " << &int_ptr << std::endl;
	std::cout << "The address of the ptr is: " << &ptr << std::endl;

	// Now lets compile the code

	return 0;
}

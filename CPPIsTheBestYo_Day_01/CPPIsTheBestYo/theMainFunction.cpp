#include <iostream>		// cin, cout, etc.

int main(int argc, char* argv[])
{
	std::cout << "Amazing program output!" << std::endl;
	std::cout << std::endl;


////	int x = 1234;			// "Stack"
//	int x = 1234;
//	int y = 2021;	//	std::cout << x << std::endl;
//
//	// "&" = address of
//	std::cout << "Is at location " << &x << std::endl;
//
//	// this is now a "pointer to an int"
//	int* px = &x;
//	     px = &y;
//	std::cout << "px points to " << px << std::endl;
//
//	// "Defreference" what px is pointing to
//	std::cout << *px << std::endl;

//	int x0 = 13;			// 32 bits or 4 bytes
	//int x1 = 177;
	//int x2 = 3232;
	//int x3 = 98;
	//int x4 = 65448;
	//int x5 = 7894;

//	int *px = &x0;		// point to the 1st variable
	//std::cout << "px is pointing to address: " << px << std::endl;

	//std::cout << "(int) is " << sizeof(int) << " bytes" << std::endl;

	//px = px + 5;		// "add 1 int size" to this pointer

	//std::cout << "Which has value " << *px << std::endl;

	int x[] = { 13, 177, 3232, 98, 65448, 7894 };
//	int* x;

	std::cout << x[5] << std::endl;

	// Arrays are literally pointers, 
	// just pointing to the 1st (0th) element
	int* px = x;	


	return 0;
}

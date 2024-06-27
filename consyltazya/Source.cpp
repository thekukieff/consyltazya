#include <iostream>
#include <windows.h>
#include <cstdlib>

long long int Factorial(int n);

class Worker {
private:




public:
};

template <typename M>

void error(M a);

void Print();

int LK(int a);

template <typename nom>
void HelloWorld(nom a);

int main() {
	srand(time(NULL));
	void(*Name)();
	Name = Print;
	Name();

	int (*hg)(int j);
	hg = LK;
	std::cout << hg(3);

	std::cout << std::endl;

	std::cout<<Factorial(8);


	return 0;
}

template<typename M>
void error(M a)
{
	std::cout << a<<std::endl;


}

template <typename nom>
void HelloWorld(nom a) {
	std::cout << a;
}

void Print() {
	std::cout << 1<<std::endl;
}

int LK(int a) {
	return a;
}

long long int Factorial(int n) {

	if (n < 0) {
		return 0;

	}
	if (n == 0) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}
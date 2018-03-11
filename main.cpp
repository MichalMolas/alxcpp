#include <iostream>


int main()
{
	std::cout << "hello, world!\n";

	int F1 = 0;
	int F2 = 1;
	int n;
	std::cin >> n;

	for (int i = 0; i < n-1; i++) {
			int F = F1 + F2;
			F1 = F2;
			F2 = F;
	}

	std::cout << n << " liczba ciagu Fibo = " << F2 << '\n';
	return 0;
}

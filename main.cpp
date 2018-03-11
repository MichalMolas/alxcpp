#include <stdio.h>


int main()
{
	std::cout << ("hello, world!\n");

	int l1 = 0;
	int l2 = 1;
	int l;
	int n;
	std::cin >> n;

	for (int i = 0; i < n-1; i++){
			l = l1 + l2;
			l1 = l2;
			l2 = l;
	}

	std::cout << n << " liczba ciagu Fibo = " << l << '\n';

	return 0;
}


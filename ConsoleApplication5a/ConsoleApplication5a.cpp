#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	int b = a % 10;
	int c =(a/10)%10;
	int d = a / 100;
	if(d!=b && d!=c && b!=c)
	{
		std::cout << "YES";
	}
	else { std::cout<<"NO"; }
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int maxmultiply(int mass[], int number)
{
	sort(mass,mass + number);
	int z = mass[0] * mass[1] * mass[number - 1];
	int x = mass[number - 1] * mass[number - 2] * mass[number - 3];
	int y = max(z,x);
	return y;
}
int main()
{
}

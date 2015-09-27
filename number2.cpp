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
void assert(int mass[], int number, int right)
{
	int y = maxmultiply(mass, number);
		if (y == right)
			cout << "OK" << endl;
		else cout << "FAIL: " << y << " " << right << endl;
}

int main()
{
	int mass1[5] = { 1,2,3,4,5 };
	int mass2[5] = { 3,2,7,4,10 };
	int mass3[12] = { 10,20,40,50,-1,-2,3,7,5,4,12,14 };
	int mass4[6] = { 2,3,1,8,5,6 };
	int mass5[8] = { 0,2,12,20,15,100,-4,8 };
	int mass6[5] = { -5,-6,1,2,3 };
	assert(mass1, 5, 60);
	assert(mass2, 5, 280);
	assert(mass3, 12, 40000);
	assert(mass4, 6, 240);
	assert(mass5, 8, 30000);
	assert(mass6, 5, 90);
	return 0;
}

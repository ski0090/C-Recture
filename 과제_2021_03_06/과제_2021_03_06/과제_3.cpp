#include<iostream>
using namespace std;

int main()
{
	int Num_1 = 0;
	int Num_2 = 0;

	// 추가할 것
	cin >> Num_1;
	cin >> Num_2;

	int Differ = Num_1 - Num_2;
	int Ab_value = 0;

	Ab_value = (Differ >= 0) ? Differ : -Differ;
	cout << Ab_value << endl;

	return 0;
}
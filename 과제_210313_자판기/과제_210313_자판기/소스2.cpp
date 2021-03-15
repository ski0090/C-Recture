#include<iostream>
using namespace std;

int main()
{
	int input = 0;
	cout << "구구단 몇단을 할건가요?:";
	cin >> input;
	for (int i = 1; i < 10; i++)
	{
		cout << input << "*" << i << "=" << input * i << endl;
	}
	return 0;
}
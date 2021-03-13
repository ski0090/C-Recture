#include<iostream>
using namespace std;

int main()
{
	int Num = 0;
	cout << "정수를 입력해 주세요:";
	cin >> Num;
	if (Num >= 0)
	{
		cout << Num << endl;
	}
	else
	{
		cout << -Num << endl;
	}
	return 0;
}
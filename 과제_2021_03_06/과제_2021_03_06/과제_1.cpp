#include<iostream>
using namespace std;

int main()
{
	int Num = 0;
	cout << "정수를 입력해 주세요:";
	cin >> Num;
	if (Num >= 0)
	{
		cout <<"양수 입니다."<< endl;
	}
	else
	{
		cout <<"음수 입니다."<< endl;
	}
	return 0;
}
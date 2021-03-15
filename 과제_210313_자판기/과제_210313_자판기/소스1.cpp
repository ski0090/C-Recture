#include<iostream>
using namespace std;

int main()
{
	int accumulate = 0, input = 0;
	do
	{
		cout << "정수 입력:";
		cin >> input;
		accumulate += input;
		system("cls");
	} while (input != -1);
		system("cls");
		cout << "누적 값은 " << accumulate << "입니다." << endl;
	return 0;
}
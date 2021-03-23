#include<iostream>
#include<ctime>
using namespace std;


void main() {
	// 난수
	//int a = rand() % 10;
	//int b = rand();
	//int c = rand();

	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	// time
	// 1970년 1월1일부터 현재까지 흘러온 시간을 초단위로 환산해서 반환해주는 함수.
	// <ctime> 헤더에서 제공한다.
	// int _time = time(nullptr);
	// cout << _time << endl;

	int iSize = 0;

	cout << "입력: ";
	cin >> iSize;


	// 4.
	for (int i = 0; i < iSize; ++i)
	{
		for (int j = 0; j < i; ++j)
			cout << ' ';
		for (int j = 0; j < iSize - i; ++j)
			cout << '*';
		cout << endl;
	}

	cout << "----------------------------------" << endl;

	// 3.
	for (int i = iSize; i > 0; --i)
	{
		for (int j = 0; j < i - 1; ++j)
			cout << ' ';
		for (int j = 0; j < (iSize + 1) - i; ++j)
			cout << '*';

		cout << endl;
	}

	cout << "----------------------------------" << endl;

	//// 2.
	for (int i = iSize; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
			cout << '*';
		cout << endl;
	}

	cout << "----------------------------------" << endl;

	//// 1.
	for (int i = 0; i < iSize; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
			cout << '*';
		cout << endl;
	}
}
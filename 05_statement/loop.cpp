#include <iostream>
using namespace std;

void main()
{
	/*
	* 반복문
	* 반복되는 코드를 일정 횟수 만큼 실행
	*/

	/*while (조건)
	{
		조건이 참인 동안 반복
	}*/

	//int i = 0;
	//while (i++ < 3)
	//{
	//	cout << "Hello World" << endl;
	//}
	//
	//
	//while (true)
	//{
	//	cout << "Hello World" << endl;
	//}
	/*
	int i_a = 2;
	int i_b = 1;

	while (i_b < 10)
	{
		int i_c = i_a * i_b;
		cout << i_a << "x" << i_b << "=" << i_c << endl;
		i_b++;
	}
	*/
	/*
	int i_a = 2;
	int count = 0;
	while (count++ < 9)
	{
		cout << i_a << "*" << count << "=" << i_a * count << endl;
	}
	*/

	//int i_a = 2;
	//int count = 0;
	//while (count++ < 9)
	//{
	//	if (count == 4)
	//		continue;
	//	cout << i_a << "*" << count << "=" << i_a * count << endl;
	//}

	//// ##5. system 함수
	//// 현재 시스템에 명령을 하달하는 함수.

	//cout << "Hello" << endl;

	//system("pause");	// 일시정지 명령!
	//system("cls");		// 기존의 내용을 콘솔창에 비우는 명령

	//cout << "world" << endl;
	while (true)
	{
		system("cls");		// 기존의 내용을 콘솔창에 비우는 명령
		cout << "시" << endl;
		cout << "발" << endl;
		system("pause");

	}
}
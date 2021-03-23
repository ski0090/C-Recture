#include<iostream>
using namespace std;
void main()
{
	// do ~while
	//int count = 3;
	//do {
	//	cout << "Hello Hyeon Woo" << endl;
	//} while (--count);

	/*
	* 입력한 값(정수)을 계속 누적을 시킨다.
	* -1을 입력하면 누적 종료 및 출력
	*/
	//-----------------------------------------
	// for 문
	// 정해진 횟수 안에서 반복을 하는 반복문
	/*
		for (초기화; 조건; 증감식) {
			조건이 참일때 반복
		}
	*/
	//for (
	// int i = 0; 
	// i < 3; 
	// i++)
	//{
	//	cout << "Hello HeonWoo" << endl;
	//}
	// int i = 0;
	// for (; i < 3;) {
	// 	 cout << "Hello HeonWoo" << endl;
	// 	 i+=3;
	// }

	// 3. 2중 반복문

	//while (3번)
	//{
	//	while (5번)
	//	{

	//	}
	//}

	//for (int y = 0;  y< 10; ++y)
	//{
	//	cout << endl;
	//	for (int x = 0; x < 10; x++)
	//	{
	//		cout << "(" << y << ", " << x << ") ";
	//	}
	//}

	for (int i = 2; i < 10; ++i)
	{
		cout << i << "단~~~~~" << endl;
		for (int j = 1; j < 10; ++j) {
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}
}
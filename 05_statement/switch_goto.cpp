#include <iostream>
using namespace std;

int calculate_cost(int cost)
{
	cost;// 할인
	cost;// 1+1
	return cost;
}

void resut_order(const char* szItem, int cost)
{
	int _cost = calculate_cost(cost);
	cout << szItem << endl;
}

void main_1111()
{
	/*
	* switch 문
	*/
	//switch (정수)
	//{
	//case 상수:	// 정수 형태의 상수
	//			// 해당 케이스에서 작동할 코드
	//	break;	// switch문을 벗어나는 코드
	//case 상수:
	//	break;
	//default:
	//}

//	int iSelect = 0;
//
//	cout << "선택: ";
//	cin >> iSelect;
//	switch (iSelect)
//	{
//	case 1: 
//	/*	
//	{
//		int cost = calculate_cost(1500);
//		cout << "콜라" << endl;
//	}
//	*/	
//		resut_order("콜라", 1500);
//		break;
//	case 2:
//		cout << "사이다" << endl;
//		break;
//	default:
//		break;
//	}
	/*
	* goto문
	*/

	goto A;
A:
	cout << "A 영역" << endl;
B:
	cout << "B 영역" << endl;
C:
	cout << "C 영역" << endl;
D:
	cout << "D 영역" << endl;

}

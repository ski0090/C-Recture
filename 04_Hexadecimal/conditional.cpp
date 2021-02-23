#include<iostream>
using namespace std;
void main(void) {
	enum DRINK {COKE = 1, FANTA, MILKIS, CIDAR};
	/*
	* 분기문
	* 조건에 따라 코드의 흐름을 나누는 문법
	* if, switch, goto
	*/

	//if
	/*
	* if(조건) 조건: 0이 아니면 무조건 참이야
	* {}
	*/
	int select = 0;
	
	cout << "선택: ";
	cin >> select;
	if (select == 1)
	{
		cout << "콜라" << endl;
	}
	else {
		if (select == 2)
		{
			cout << "환타" << endl;
		}
		else
		{
			if (select == 3)
			{
				cout << "밀키스" << endl;
			}
			else cout << "사이다" << endl;
		}
	}
	/*--------------------------------------------*/
	if (select == 1)
	{
		cout << "콜라" << endl;
	}
	else if (select == 2)
	{
		cout << "환타" << endl;
	}
	else if (select == 3)
	{
		cout << "밀키스" << endl;
	}
	else cout << "사이다" << endl;
	/*-------------------------------------------*/

	//3항 연산자
	//(조건) ? (결과(참)) : (결과(거짓))
	int a = 10, b = 20, max = 0;
	if (a > b)
	{
		max = a;
	}
	else max = b;

	max = (a > b) ? a : b;//코드가 간결하다.
	/*-------------------------------------------*/
	/*
	* 과제 1. 정수 하나를 입력을 받아서 음수인지 양수인지 판별하기.
	* 과제 2. 두개의 정수를 입력 받아서 두수의 차를 절대 값으로 구해오기(if문 사용)
	* 과제 3. 삼항 연산자를 이용하여 과제 2해결
	* 과제 4. 성적표에 학점 추가하기
	// 평균 점수가 90점 이상 100 이하 -> A학점
	// 80이상 90미만					-> B학점
	// 70이상 80미만					-> C학점
	// 60이상 70미만					-> D학점
	// 그 외							-> F학점
	*/
}
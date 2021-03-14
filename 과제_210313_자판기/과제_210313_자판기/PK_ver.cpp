#include<iostream>
using namespace std;

void main()
{
	const int coke = 100, cidar = 200, fanta = 300;//가격은 바뀌지 않을 것이므로
	int money = 0, select =0;
	bool is_run = true;
	cout << "금액 입력: ";
	cin >> money;

	while (is_run)
	{
		system("cls");
		cout << "현재 금액" << money << endl;
		cout << "------------------------Menu------------------------" << endl;
		cout << "1.콜라(100원) 2.사이다(200원) 3.환타(300원) 4.잔돈반환" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "선택: ";
		cin >> select;

		switch (select)
		{
		case 1:
			if (money >= coke)
			{
				money -= coke;
				cout << "콜라 구매 완료!" << endl;
			}
			else {
				cout << "금액 부족: " << money << endl;
				is_run = false;
			}
			break;
		case 2:
			if (money >= cidar)
			{
				money -= cidar;
				cout << "사이다 구매 완료!" << endl;
			}
			else { 
				cout << "금액 부족: " << money << endl; 
				is_run = false;
			}
		break;
		case 3:
			if (money >= fanta)
			{
				money -= fanta;
				cout << "환타 구매 완료!" << endl;
			}
			else {
				cout << "금액 부족: " << money << endl;
				is_run = false;
			}
			break;
		case 4:
			cout << "현재 거스름돈: " << money << endl;
			is_run = false;
		default:
			break;
		}
		system("pause");
	}
}
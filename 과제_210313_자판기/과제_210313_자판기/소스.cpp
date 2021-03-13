#include<iostream>
using namespace std;

int main()
{
	cout << "====================================" << endl;
	cout << "===============자판기===============" << endl;
	cout << "====================================" << endl;
	cout << "소지금을 입력해 주세요:";
	int Money = 0;
	cin >> Money;
	if (Money <= 100)
	{
		cout << "100원은 있으셔야 음료를 살 수 있어요." << endl;
	}
	else
	{
		cout << "==================================" << endl;
		cout << "===============메뉴===============" << endl;
		cout << "==================================" << endl;
		cout << "1.콜라(100원)" << endl;
		cout << "2.사이다(200원)" << endl;
		cout << "3.환타(300원)" << endl;
		cout << "4.잔돈반환" << endl;

		int choice = 0;
		while (Money >= 100)
		{
			cout << "메뉴를 선택해 주세요:";
			cin >> choice;
			switch (choice)
			{
				
			 case 1:
			  {
				 
				 cout << "콜라를 선택 하셨네요." << endl;
				 
				 if (Money < 100)
				 {
					 cout << "잔돈이 부족합니다." << endl;
					 cout << "현재남은 잔돈은" << Money << "원 입니다." << endl;
				 }
				 else
				 {
					 Money -= 100;
				     cout << "현재남은 잔돈은" << Money << "원 입니다." << endl;
				 }
				 break;
			  }
			 case 2:
			  {
				 
				 cout << "사이다를 선택 하셨네요." << endl;
				 if (Money < 200)
				 {
					 cout << "잔돈이 부족합니다." << endl;
					 cout << "현재남은 잔돈은" << Money << "원 입니다." << endl;
				 }

				 else
				 {
					 Money -= 200;
					 cout << "현재남은 잔돈은" << Money << "원 입니다." << endl;
				 }
				 break;
			  }
			 case 3:
			  {
				 
				 cout << "환타를 선택 하셨네요." << endl;
				 
				 if (Money < 300)
				 {
					 cout << "잔돈이 부족합니다." << endl;
					 cout << "현재남은 잔돈은" << Money << "원 입니다." << endl;
				 }
				 else
				 {
					 Money -= 300;
					 cout << "현재남은 잔돈은" << Money << "원 입니다." << endl;
				 }
				 break;
			  }
			 case 4:
			  {
				 cout << "잔돈은" << Money << "원 만큼 남으셨습니다." << endl;
				 cout << "잔돈 반환해 드리겠습니다." << endl;
				 break;
			  }
			 default:
			  {
				 cout << "그런 메뉴는 없습니다. 다시 선택해 주세요." << endl;
                 break;
			  }
			}
		}
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int tie = 0, win = 0, defeat = 0;
	for (int i = 0; i < 3; i++)
	 {
		int R_Num = rand() % 3;
		cout << "==================가위바위보 게임=====================" << endl;
		cout << "=========================Menu=========================" << endl;
		cout << "1.가위  2.바위  3.보  4.게임종료" << endl;
		int select = 0;
		cout << "선택 하세요:";
		cin >> select;
		system("cls");
	  switch (select)
	  {
		case 1:
		{
			if (R_Num == 0)
			{
				cout << "비겼습니다!" << endl;
				tie += 1;
				system("pause");
				system("cls");
			}
			else if (R_Num == 1)
			{
				cout << "졌습니다!" << endl;
				defeat += 1;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "이겼습니다!" << endl;
				win += 1;
				system("pause");
				system("cls");
			}
			break;
		}

		case 2:
		{
			if (R_Num == 0)
		    {
			    cout << "이겼습니다!" << endl;
			    win += 1;
				system("pause");
				system("cls");
		    }
		    else if (R_Num == 1)
		    {
			    cout << "비겼습니다!" << endl;
			    tie += 1;
				system("pause");
				system("cls");
		    }
		    else
		    {
			    cout << "졌습니다!" << endl;
			    defeat += 1;
				system("pause");
				system("cls");
		    }
		break;
		}
		case 3:
		{
			if (R_Num == 0)
			{
				cout << "졌습니다!" << endl;
				defeat += 1;
				system("pause");
				system("cls");
			}
			else if (R_Num == 1)
			{
				cout << "이겼습니다!" << endl;
				win += 1;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "비겼습니다!" << endl;
				tie += 1;
				system("pause");
				system("cls");
			}
			break;
		}
		case 4:
		{
			cout << "게임을 종료합니다." << endl;
			system("pause");
			system("cls");
			i = 4;
		}
	
	   }
	}
		cout << "당신의 점수는 " << win << "승 " << defeat << "패 " << tie << "무 입니다." << endl;
		system("pause");
		system("cls");
	return 0;
}
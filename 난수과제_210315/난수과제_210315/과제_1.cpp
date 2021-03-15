#include<iostream>
using namespace std;

int main()
{   
	for (int i=0;i<3;i++)
	{
		int Ran_Num = rand() % 10;
		cout << "===================Menu=================" << endl;
		cout << "1.홀 2.짝 3.게임종료" << endl;
		cout << "선택해 주세요:";
		int select = 0;
		cin >> select;
		system("cls");
		switch (select)
		{
		 case 1:
		 {
			 if (Ran_Num % 2 == 0)
			 {
				 cout << "틀렸습니다! 난수는 " << Ran_Num << "입니다." << endl;
				 system("pause");
				 system("cls");
			 }
			 else
			 {
				 cout << "정답입니다! 난수는 " << Ran_Num << "입니다!" << endl;
				 system("pause");
				 system("cls");
			 }
			 break;
		 }
	     case 2:
		 {
			 if (Ran_Num % 2 == 0)
			 {
				 cout << "정답입니다! 난수는 " << Ran_Num << "입니다!" << endl;
				 system("pause");
				 system("cls");
			 }
			 else
			 {
				 cout << "틀렸습니다! 난수는 " << Ran_Num << "입니다." << endl;
				 system("pause");
				 system("cls");
			 }
			 break;
		 }
		 case 3:
		 {
			 cout << "게임을 종료 하겠습니다." << endl;
			 system("pause");
			 system("cls");
			 break;

		 }
		 default:
		 {
			 cout << "옳지 않은 선택입니다." << endl;
			 system("pause");
			 system("cls");
			 break;
		 }

		}
	}
	return 0;
}
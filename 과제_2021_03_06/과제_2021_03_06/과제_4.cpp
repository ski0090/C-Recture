#include<iostream>
using namespace std;

int main()
{
	int Kor = 0;
	int Eng = 0;
	int Math = 0;
	cout << "당신의 성적을 입력해 주세요."<<endl;
	cout << "국어:";
    cin >> Kor;
	cout << "영어:";
	cin >> Eng;
	cout << "수학:";
	cin >> Math;
	int Total = Kor+Eng+Math;
	float Aver = (float)Total/3;
	char Grade ='0';

	system("cls");

	if ((Aver >= 90.f) && (Aver <= 100.f))
		Grade = 'A';
	else if (Aver >= 80.f)
		Grade = 'B';
	else if (Aver >= 70.f)
		Grade = 'C';
	else if (Aver >= 60.f)
		Grade = 'D';
	else Grade = 'F';


	cout << "국어 점수:" << Kor << endl;
	cout << "영어 점수:" << Eng << endl;
	cout << "수학 점수:" << Math << endl;
	cout << "총점:" << Total << endl;
	cout << "평균:" << Aver << endl;
	cout << "학점:" << Grade << endl;
	return 0;
}
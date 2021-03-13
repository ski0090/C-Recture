#include<iostream>
using namespace std;

int main()
{
	int Kor_recode = 0;
	int Eng_recode = 0;
	int Math_recode = 0;

	cout << "국어 점수 입력:" << endl;
	cin >> Kor_recode;
	cout << "영어 점수 입력:" << endl;
	cin >> Eng_recode;
	cout << "수학 점수 입력:" << endl;
	cin >> Math_recode;

	int Total = Kor_recode + Eng_recode + Math_recode;

	float Aver =Total/3.0f;

	cout << "국어 점수:" << Kor_recode << endl;
	cout << "영어 점수:" << Eng_recode << endl;
	cout << "수학 점수:" << Math_recode << endl;
	cout << "평균:" << Aver << endl;


	return 0;
}
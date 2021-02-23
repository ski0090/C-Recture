#include<iostream>
using namespace std;

int main()
{
	int Kor_recode = 0;
	int Eng_recode = 0;
	int Math_recode = 0;
	int total_score = 0;

	cout << "국어 점수 입력: ";
	cin >> Kor_recode;
	
	cout << "영어 점수 입력: "; 
	cin >> Eng_recode;
	
	cout << "수학 점수 입력: "; 
	cin >> Math_recode;
	
	total_score = Kor_recode + Eng_recode + Math_recode;
	float Aver = (float)total_score /3;

	cout << "##### Result #####" << endl; 
	cout << "국어 점수:" << Kor_recode << endl;
	cout << "영어 점수:" << Eng_recode << endl;
	cout << "수학 점수:" << Math_recode << endl;
	cout << "총점:" << total_score << endl;
	cout << "평균:" << Aver << endl;
	cout << "##################" << endl;
	return 0;
}
/*
0. #: 전처리 지시자
1. #include 뒤에 나열한 파일들을 이 프로젝트에 포함을 시키겠다.
2. <>: C++ 문법에서 표준으로 지원하는 입출력을 정의한 .cpp(x) .h
3. "": 오픈소스에 가져오거나 사용자가 작성한 .h

ps) .h는 선언부 .cpp 정의부
*/
#include<iostream>
using namespace std;
/*
* using: 지시자
* namespace: 공간
*/
namespace HyunWoo {
	void i_am(){
		cout << "i am hw" << std::endl;
		//'\n' 개행(줄바꿈), '\t' 한칸 띄기 
	}
}
namespace Shalom {
	void i_am() {
		cout << "i am Sh" << endl;
		cout << 'i' << endl;
	}
}
using namespace HyunWoo;
using namespace Shalom;

int main()
{
	HyunWoo::i_am();
	Shalom::i_am();
}
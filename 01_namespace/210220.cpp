#include <iostream> 
// for std::cout and std::endl // doPrint() 함수의 정의
void doPrint() // doPrint 함수는 이 예제에서 호출된 함수(called function)
{
	std::cout << "In doPrint()" << std::endl;
} // main() 함수의 정의 
int main() {
	std::cout << "Starting main()" << std::endl;
	doPrint(); std::cout << "Ending main()" << std::endl; return 0;
}
	//doPrint() 함수를 호출함으로써 main() 함수를 인터럽트 한다. 여기서 main() 함수는 호출자(caller) doPrint(); std::cout << "Ending main()" << std::endl; return 0; }

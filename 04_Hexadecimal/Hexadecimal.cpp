#include<iostream>
using namespace std;
// n����
// - n�� �Ǿ����� ������ �ö󰣴�.
void heaxa(){

	int dec = 10; // 10���� 
	
	//8 -> 10
	//+2 12
	int oc = 012; // 8����
	int hex = 0xA; //16����


	cout << dec << endl;
	cout << oc << endl;
	cout << hex << endl;

	//���� ����
	// ���� 1. 10������ 8 ~ 20���� ���� 2������ ǥ�� 8bits 16������ ǥ���غ���
	// ���� 2. 10���� 5~18���� 8������ ǥ���غ���
	// ���� 3. 2������ 10������ ǥ��
	// 0000 0001	
	// 0000 0010	
	// 0000 0100	
	// 0000 1000	
	// 0001 0000	
	// 0010 0000	
	// 0100 0000	
	// 1000 0000	

	// ����4. ���� signed�� ��Ʈ���� 10������ ���ΰ�?(��Ʈ: ~������)
	// 1010 -> 0101 -> 5 + 1 -> 6 -> -6
	// 1001 -> 0110 -> 6 + 1 -> 7 -> -7

	// 0111 -> 7
	// 1000 -> 0111 -> 7 + 1 -> -8
	// ����5. ���� �ϳ��� �Է� �ް� ��ȣ�� �ٲ� ����غ���. ��, -1�� ������ �ʴ´�.

	// >>, << 2���� ��ŭ ���ϴ� ȿ��
	/*
	* 0000 0011 << 1 =3 * 2^1
	* 0000 0110 -> 6
	* 
	* 0000 0011 << 2 =3 * 2^2
	* 0000 1100 -> 12
	*/

	// ����6. 3 * 8 / 4�� ���� ��� ���� ���� ǥ���غ���. 
	cout << (3 << 3 >> 2) << endl;
}
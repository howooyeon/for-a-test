/*
sring Ŭ������ �̿��� ���ڿ� �Է� �� �ٷ��
*/

#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	string song("ComeTru");
	string name("Jeremy Zucker");
	string singer;

	cout << song + "�� �θ� ������ ";
	cout << "(��Ʈ: ù���ڴ� "<< name[0] << ")?\n";

	getline(cin, singer); //���ڿ� �Է�
	if (singer == name) // ���ڿ� ��
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�." + name + "�Դϴ�." << endl;
	
}
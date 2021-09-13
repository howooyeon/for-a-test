/*
sring 클래스를 이용한 문자열 입력 및 다루기
*/

#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	string song("ComeTru");
	string name("Jeremy Zucker");
	string singer;

	cout << song + "를 부른 가수는 ";
	cout << "(힌트: 첫글자는 "<< name[0] << ")?\n";

	getline(cin, singer); //문자열 입력
	if (singer == name) // 문자열 비교
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다." + name + "입니다." << endl;
	
}
#include <iostream>

using namespace std;

class MyClass
{
private :
	int a;
public:
	MyClass();
};

MyClass::MyClass()
{
	cout << "생성자 함수가 호출되었습니다" << endl;
}

int main()
{
	MyClass myClass = MyClass();

	return 0;
}
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
	cout << "������ �Լ��� ȣ��Ǿ����ϴ�" << endl;
}

int main()
{
	MyClass myClass = MyClass();

	return 0;
}
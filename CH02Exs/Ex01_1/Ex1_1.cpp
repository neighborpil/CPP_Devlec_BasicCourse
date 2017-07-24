#include <iostream>
using  namespace std;

class student
{
private:
	char hakbun[80];
	char name[80];

public:
	void set(char *h, char*n);
	void show();
};

void student::set(char *h, char*n)
{
	strcpy_s(hakbun, h);
	strcpy_s(name, n);
}

void student :: show()
{
	cout<< "학번 => " << hakbun << " 이름 : " << name << endl;
}

int main()
{
	student ob2, ob3;
	ob2.set("s2002", "장나라");
	ob3.set("s2003", "김국진");

	ob2.show();
	ob3.show();

	return 0;
}
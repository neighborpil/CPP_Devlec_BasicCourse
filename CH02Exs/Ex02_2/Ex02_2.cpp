// Ex02_2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>	

using namespace std;

class Book
{
private:
	char title[50];
	char author[40];
	char publisher[50];
	int price;
public :
	void Set(char *t, char *a, char *p, int pr);
	void Input();
	void Show();
};

void Book::Set(char *t, char *a, char *p, int pr)
{
	strcpy(title, t);
	strcpy(author, a);
	strcpy(publisher, p);
	price = pr;
}

void Book::Input()
{
	cout << "å���� ���� ���ǻ� ���� �Է� : ";
	cin >> title >> author >> publisher >> price;
}

void Book::Show()
{
	cout << "å���� : " << title << endl << "���� : " << author << endl <<
		"���ǻ� : " << publisher << endl << "���� : " <<price << endl;
}
int main()
{
	Book book, book1;
	book.Set("C++�ϼ�", "ȫ�浿", "����", 10000);
	book.Show();

	book1.Input();
	book1.Show();
    return 0;
}


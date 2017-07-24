// Ex02_2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	cout << "책제목 저자 출판사 가격 입력 : ";
	cin >> title >> author >> publisher >> price;
}

void Book::Show()
{
	cout << "책제목 : " << title << endl << "저자 : " << author << endl <<
		"출판사 : " << publisher << endl << "가격 : " <<price << endl;
}
int main()
{
	Book book, book1;
	book.Set("C++완성", "홍길동", "출출", 10000);
	book.Show();

	book1.Input();
	book1.Show();
    return 0;
}


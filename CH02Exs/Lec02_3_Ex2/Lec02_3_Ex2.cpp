// Lec02_3_Ex2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CFont
{
    int width;
    char color[20];
    char fontName[20];

public:
    CFont();
    void Show();
};

CFont::CFont()
{
    width = 10;
    strcpy_s(color, "Black");
    strcpy_s(fontName, "�Ÿ���");
}

void CFont::Show()
{
    cout << "Width : " << width << endl  
        << "Color : " << color << endl
        << "FontName : " << color << endl;
}

int main()
{
    CFont cFont = CFont();
    cFont.Show();

    return 0;
}


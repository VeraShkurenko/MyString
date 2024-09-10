#include "MyString.h"
#include <iostream>
#include <cstring>
#include<Windows.h>
using namespace std;

MyString::MyString()
{
    length = 80;
	str = new char[length];
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length];

}

MyString::MyString(const char* inputStr)
{
	length = strlen(inputStr) + 1; 
	str = new char[length];         
	strcpy(str, inputStr);

}

MyString::~MyString()
{
	if (str != nullptr)
	{
		delete[] str;
	}
	cout << "Destruct\n";
	Sleep(1000);
}

void MyString::Input()
{

}

void MyString::OutPut()
{

}

void MyString::MyStrcpy(MyString& obj)
{

}

bool MyString::MyStrStr(const char* str)
{
	return false;
}

int MyString::MyChr(char c)
{
	return 0;
}

int MyString::MyStrLen()
{
	return 0;
}

void MyString::MyStrCat(MyString& b)
{
}

void MyString::MyDelChr(char c)
{
}

int MyString::MyStrCmp(MyString& b)
{
	return 0;
}

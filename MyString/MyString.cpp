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
	if (str != nullptr) {
		delete[] str;
	}

	char buff[1000];
	cout << "Введите строку: ";
	cin.getline(buff, 1000);

	length = strlen(buff) + 1;
	str = new char[length];   
	strcpy(str, buff);
}

void MyString::OutPut()
{
	if (str != nullptr) 
	{  
		cout << str << endl;
	}
	else {
		cout << "Строка пуста." << endl;
	}

}

void MyString::MyStrcpy(MyString& obj)
{
	if (str != nullptr) {
		delete[] str;
	}

	length = obj.MyStrLen();  
	str = new char[length];    
	strcpy(str, obj.str);
}

bool MyString::MyStrStr(const char* substr) {
	if (strstr(str, substr) != nullptr) {  
		return true;  
	}
	else {
		return false; 
	}
}


int MyString::MyChr(char c)
{
	for (int i = 0; i < length; i++) { 
		if (str[i] == c) {             
			return i;                  
		}
	}
	return -1;
}

int MyString::MyStrLen() 
{
	return strlen(str);
}


void MyString::MyStrCat(MyString& b) {
	int newLength = this->MyStrLen() + b.MyStrLen() + 1;
	char* newStr = new char[newLength];
	strcpy(newStr, this->str);
	strcat(newStr, b.str);

	delete[] str;
	str = newStr;
	length = newLength;
}

void MyString::MyDelChr(char c) {
	int newLength = 0;
	char* newStr = new char[length];

	for (int i = 0; i < length; i++) {
		if (str[i] != c) {
			newStr[newLength++] = str[i];
		}
	}

	newStr[newLength] = '\0';

	delete[] str;
	str = newStr;
	length = newLength;
}

int MyString::MyStrCmp(MyString& b) {
	int result = strcmp(this->str, b.str);

	if (result < 0) {
		return -1;
	}
	else if (result > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

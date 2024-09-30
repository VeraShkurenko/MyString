//#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

int MyString::objectCount = 0;

MyString::MyString() {
    length = 80;
    str = new char[length];
    str[0] = '\0';
    ++objectCount;
}

MyString::MyString(int size) {
    length = size;
    str = new char[length];
    str[0] = '\0';
    ++objectCount;
}

MyString::MyString(const char* inputStr) {
    length = strlen(inputStr) + 1;
    str = new char[length];
    strcpy_s(str, length, inputStr);
    ++objectCount;
}

MyString::MyString(const MyString& obj)
{
    cout << "Copy constructor: " << endl;

    length = obj.length;


    str = new char[strlen(obj.str) + 1];

    strcpy_s(str, strlen(obj.str) + 1, obj.str);

}

MyString::~MyString() {
    delete[] str;
    --objectCount;
}



void MyString::Input() {
    delete[] str;
    char buff[1000];
    cout << "Enter a string: ";
    cin.getline(buff, 1000);

    length = strlen(buff) + 1;
    str = new char[length];
    strcpy_s(str, length, buff);
}

void MyString::OutPut() const {
    if (str != nullptr) {
        cout << str << endl;
    }
    else {
        cout << "String is empty." << endl;
    }
}

void MyString::MyStrcpy(const MyString& obj) {
    delete[] str;
    length = obj.MyStrLen() + 1;
    str = new char[length];
    strcpy_s(str, length, obj.str);
}

bool MyString::MyStrStr(const char* substr) const {
    return strstr(str, substr) != nullptr;
}

int MyString::MyChr(char c) const {
    for (int i = 0; i < length; i++) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1;
}

int MyString::MyStrLen() const {
    return strlen(str);
}

void MyString::MyStrCat(const MyString& b) {
    int newLength = this->MyStrLen() + b.MyStrLen() + 1;
    char* newStr = new char[newLength];
    strcpy_s(newStr, newLength, this->str);
    strcat_s(newStr, newLength, b.str);

    delete[] str;
    str = newStr;
    length = newLength;
}

void MyString::MyDelChr(char c) {
    int newLength = 0;
    char* newStr = new char[length];

    for (int i = 0; i < length - 1; i++) {
        if (str[i] != c) {
            newStr[newLength++] = str[i];
        }
    }

    newStr[newLength] = '\0';

    delete[] str;
    str = newStr;
    length = newLength + 1;
}

int MyString::MyStrCmp(const MyString& b) const {
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

int MyString::GetObjectCount() {
    return objectCount;
}

MyString& MyString::operator=(const MyString& obj)
{
    if (this == &obj)
    {
        return *this;
    }

    if (str != nullptr)
    {
        delete[] str;
    }
    length = obj.length;


    str = new char[strlen(obj.str) + 1];

    strcpy_s(str, strlen(obj.str) + 1, obj.str);

    return*this;
}

int MyString::operator[](int index)
{
    return str[index];
}

MyString::operator int()
{
    return length;
}

void MyString:: operator ()()
{
    if (str != nullptr) {
        cout << str << endl;
    }
    else {
        cout << "String is empty." << endl;
    }
}

MyString::MyString(MyString&& obj)
{
    length = obj.length;
    obj.length = 0;

    str = obj.str;
    obj.str = nullptr;
}

MyString& MyString::operator=(MyString&& obj)
{
    if (str != nullptr)
    {
        delete[] str;
    }

    length = obj.length;
    obj.length = 0;

    str = obj.str;
    obj.str = nullptr;

    cout << "Move =  \n";
    return *this;

    // TODO: insert return statement here
}

MyString& MyString::operator+=(int a)
{
    char* temp = new char[length + a];

    for (int i = 0; i < length; i++)
    {
        temp[i] = str[i];
    }

    for (int i = length; i < length + a; i++)
    {
        temp[i] = 0;
    }

    delete[] str;
    str = temp;
    length += a;

    return *this;

}



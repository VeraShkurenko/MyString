#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char* str;
    int length;
    friend ostream& operator<< (ostream& os, MyString& obj);
    friend istream& operator>> (istream& is, MyString& obj);
    static int objectCount;
public:
    MyString(initializer_list<char> a);
    MyString();
    MyString(int size);
    MyString(const char* inputStr);
    MyString(const MyString & obj);
    ~MyString();
    void Input();
    void OutPut() const;
    void MyStrcpy(const MyString& obj);
    bool MyStrStr(const char* substr) const;
    int MyChr(char c) const;
    int MyStrLen() const;
    void MyStrCat(const MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(const MyString& b) const;
    static int GetObjectCount();
    MyString& operator=(const MyString& obj);
    char& operator[](int index);
    operator int ();
    void operator ()();
    MyString(MyString&& obj);
    MyString& operator=(MyString&& obj);
    MyString& operator+=(int a);
    const char* GetStr() const;
    void SetStr(const char* newStr);

};

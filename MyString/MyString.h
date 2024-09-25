#pragma once
#include <iostream>
#include <cstring>

class MyString {
    char* str;
    int length;
    static int objectCount;
public:
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
    int operator[](int index);
    operator int ();
    void operator ()();

};

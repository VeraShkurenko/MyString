#include <iostream>
#include "MyString.h"
#include <Windows.h>

using namespace std;

ostream& operator<<(ostream& os, MyString& obj)
{
    for (int i = 0; i < obj.length; i++)
    {
        os << obj.str[i] << " ";
    }
    return os;

}

istream& operator>>(istream& is, MyString& obj)
{
    for (int i = 0; i < obj.length; i++)
    {
        is >> obj.str[i];
    }
    return is;

}

MyString operator+(const MyString& left, const MyString& right) 
{
    int newLength = left.MyStrLen() + right.MyStrLen() + 1;
    char* newStr = new char[newLength];

    strcpy_s(newStr, newLength, left.GetStr());
    strcat_s(newStr, newLength, right.GetStr());

    return MyString(newStr); 
}


MyString operator+(const char* left, const MyString& right) 
{
    return MyString(left) + right; 
}


int main()
{
    MyString str1 = "one";
    str1();
    cout << "str1: " << str1 << endl;
    MyString str2 = "two";
    char a = str2[0];
    cout << "str2: " << str2 << endl;
    cout << endl;
    cout << "a: " << a << endl;
 

    MyString str3 = "hello";
    cout << "str3: " << str3 << endl;

   

    MyString str4 = move(str3);
    cout << "str4: " << str4 << endl;


    str1 = move(str4);
    cout << str1;
    cout << str4;

    MyString str5 = "Hiiii";
    str5();

    MyString b;
    b = "Hello" + str5;
    cout << "b: " << b;




   /* cout << "Enter a string for str3 (initial string): ";
    str3.Input();

    cout << "Enter a string for str1: ";
    str1.Input();

    cout << "Enter a string for str2: ";
    str2.Input();

    cout << "Initial string str3: ";
    str3.OutPut();

    cout << "Updated string str1: ";
    str1.OutPut();

    cout << "Updated string str2: ";
    str2.OutPut();

    MyString str4;
    str4.MyStrcpy(str1);
    cout << "Copied string str4 from str1: ";
    str4.OutPut();

    MyString result = str3;
    result.MyStrCat(str1);
    result.MyStrCat(str2);
    cout << "Concatenated string result: ";
    result.OutPut();*/

   /* MyString str4 = str3;
    str3.OutPut();*/



    cout << "Number of MyString objects: " << MyString::GetObjectCount() << endl;






    return 0;
}

#include <iostream>
#include "MyString.h"
#include <Windows.h>

using namespace std;


int main()
{
   /* MyString str1;
    MyString str2;*/

    MyString str3 = "hello";
    str3.OutPut();
   
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

    MyString str4 = str3;
    str3.OutPut();



    cout << "Number of MyString objects: " << MyString::GetObjectCount() << endl;


    return 0;
}

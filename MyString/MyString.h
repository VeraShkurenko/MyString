#pragma once 
class MyString
{
	char* str; // указатель на строку
	int length; // длина строки
public:
	MyString(); // конструктор по умолчанию
	MyString(int size);
	MyString(const char* inputStr);
	~MyString();
	void Input();
	void OutPut();
	void MyStrcpy(MyString& obj);// копирование строк
	bool MyStrStr(const char* str);// поиск подстроки в строке
	int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
	int MyStrLen();// возвращает длину строки
	void MyStrCat(MyString& b); // объединение строк
	void MyDelChr(char c); // удаляет указанный символ 
	int MyStrCmp(MyString& b); // сравнение строк 

};


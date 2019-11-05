#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Teacher           //教师类
{
public:
	Teacher(int, char[], char);
	void show();
private:
	int num;
	char name[10];
	char sex;
};

Teacher::Teacher(int n, char  nam[], char s)   //定义构造函数
{
	num = n;
	strcpy(name, nam);
	sex = s;
}
void Teacher::show()      //定义输出函数
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

class Birthdate    //生日类
{
public:
	Birthdate(int, int, int);
	void show();
	void change(int, int, int);
private:
	int year;
	int month;
	int day;
};

Birthdate::Birthdate(int y, int m, int d)    //定义构造函数
{
	year = y;
	month = m;
	day = d;
}
void Birthdate::show()      //定义输出函数
{
	cout << "year:" << year << endl;
	cout << "month:" << month << endl;
	cout << "day:" << day << endl;
}
void Birthdate::change(int y, int m, int d)    //定义修改函数
{
	year = y;
	month = m;
	day = d;
}

class Professor :public Teacher     //教授类
{
public:
	Professor(int, char[], char, int, int, int);
	void show();
	void change(int, int, int);
private:
	Birthdate birthday;     //定义Birthdate类的对象作为数据成员

};


Professor::Professor(int n, char nam[10], char s, int y, int m, int d)
	:Teacher(n, nam, s),
	birthday(y, m, d)
	{ }     //定义构造函数


void Professor::show()     //定义输出函数
{
	Teacher::show();
	birthday.show();
}

void Professor::change(int y, int m, int d)    //定义修改函数
{
	birthday.change(y, m, d);
}

int main()
{
	Professor prof1(001, "wang", 'f', 1988, 10, 28);
	cout << endl << "初值" << endl;
	prof1.show();
	cout << endl << "新值" << endl;
	prof1.change(1978, 8, 26);
	prof1.show();
	system("pause");
	return 0;
}
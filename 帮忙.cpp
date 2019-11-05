#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Teacher           //��ʦ��
{
public:
	Teacher(int, char[], char);
	void show();
private:
	int num;
	char name[10];
	char sex;
};

Teacher::Teacher(int n, char  nam[], char s)   //���幹�캯��
{
	num = n;
	strcpy(name, nam);
	sex = s;
}
void Teacher::show()      //�����������
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

class Birthdate    //������
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

Birthdate::Birthdate(int y, int m, int d)    //���幹�캯��
{
	year = y;
	month = m;
	day = d;
}
void Birthdate::show()      //�����������
{
	cout << "year:" << year << endl;
	cout << "month:" << month << endl;
	cout << "day:" << day << endl;
}
void Birthdate::change(int y, int m, int d)    //�����޸ĺ���
{
	year = y;
	month = m;
	day = d;
}

class Professor :public Teacher     //������
{
public:
	Professor(int, char[], char, int, int, int);
	void show();
	void change(int, int, int);
private:
	Birthdate birthday;     //����Birthdate��Ķ�����Ϊ���ݳ�Ա

};


Professor::Professor(int n, char nam[10], char s, int y, int m, int d)
	:Teacher(n, nam, s),
	birthday(y, m, d)
	{ }     //���幹�캯��


void Professor::show()     //�����������
{
	Teacher::show();
	birthday.show();
}

void Professor::change(int y, int m, int d)    //�����޸ĺ���
{
	birthday.change(y, m, d);
}

int main()
{
	Professor prof1(001, "wang", 'f', 1988, 10, 28);
	cout << endl << "��ֵ" << endl;
	prof1.show();
	cout << endl << "��ֵ" << endl;
	prof1.change(1978, 8, 26);
	prof1.show();
	system("pause");
	return 0;
}
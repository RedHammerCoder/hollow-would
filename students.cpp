#include "pch.h"
#include "students.h"
#include<iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class students;

students::students( const string &name1,const string& xuehao1,int sy, int ss, int sz):score_shu(ss),score_yin(sz),score_yu(sy)
{
	strcpy_s(name, name1.c_str());
	strcpy_s(xuehao, xuehao1.c_str());
	Average = (ss + sz + sy) / 3;
	
}

students::students()
{
	cout << "输入name" << endl;
	string name11;
	cin >> name11;

	cout << "输入学号" << endl;
	string xuehao2;
	cin >> xuehao2;

	cout << "输入数学" << endl;
	int shuxue;
	cin >> shuxue;

	cout << "输入英语" << endl;
	int yingyu;
	cin >> yingyu;		  
	
	cout << "输入语文" << endl;
	int yuwen;
	cin >> yuwen;
	Average = ((shuxue + yingyu + yuwen) / 3.0);
	strcpy_s(name, name11.c_str());
	strcpy_s(xuehao, xuehao2.c_str());
	score_shu = shuxue; score_yin=yingyu; score_yu = yuwen;
	
}
students::students(const students& studds)
{
	strcpy_s(name,studds.name);
	strcpy_s(xuehao, studds.xuehao);
	score_shu = studds.score_shu;
	score_yin = studds.score_yin;
	score_yu = studds.score_yu;
	Average=studds.Average;



	
}

void students::showall()
{
	cout << name << " " << xuehao << "  " << score_shu << "  " << score_yin << " " << score_yu <<"  "<<Average<< endl;
}



students::~students()
{
}

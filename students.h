#pragma once
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class students
{
public:

	students(const string &name1, const string& xuehao1, int sy, int ss, int sz);
	students(int i ) {

	}
	students(const students& studds);
	students();	
	char name[25];

	char xuehao[10];
	int score_yu, score_shu,
		score_yin;
	double Average;
	void showall();

	bool operator <(students &stud)
	{
		if (this->Average < stud.Average) {
			return 1;
		}
		else
		{
			return 0;
		}

	}
	
	



	

	~students();
};


#pragma once


using namespace std;
#ifndef newstudent
#define newstudent
#include <iostream>
#include <ctime>
class students;





namespace stud {


	using name=char[16];
	class students
	{
	private:
		name N{0};
		tm borntime ; //Äê¼Í
		char xuehao[9];
		bool sex=0;
		int age=0;
		uint16_t CProgram = 0;
		uint16_t math = 0;
		uint16_t English = 0;

	public:
		bool SetName(string name);
		bool SetAge(tm);
		bool Setxuehao(string Xuehao);
		bool SetCP(int);
		bool SetMath(int);
		bool SetEnglish(int);
		students(string, string, tm, bool, int, int, int);
		~students() = default;
		students();//undefine
		students(students &Student);//undefine
		static int GetLengthOfStudents()
		{
			return sizeof(students);
			
		}


	};
}



#endif // !newstudent

#pragma once



#include <iostream>
#include"newstudents.h"

using std::cout;
 
class linken;
#ifndef savefile
#define savefile
class linken;




extern void Getnext(linken& beLinken, linken* ptr);


//function of init the linken and get the student;
void inital(linken&, string, string, tm, bool, int, int, int);

	class linken 
	{
	public:
		linken* next;
		linken* last;
		students mamber;
		friend void Getnext(linken& beLinken, linken* ptr);
		linken()//constructive function
			:next(NULL),
			last(NULL),
			mamber()
		{
			printf("init the linken");
		}

		linken(linken& link);
		linken(students& student1);




	};




#endif // !savefile



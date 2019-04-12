#pragma once
#include"newstudents.h"

#ifndef savefile
#define savefile




using namespace stud;
class linken;
class linken {
	linken* next = nullptr;
	linken* last = nullptr;
	stud:: students student;
public:
	linken(linken &link);
	friend void Getnext(linken &Linken,linken*ptr);

};




#endif // !savefile



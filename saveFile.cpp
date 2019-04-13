#include"savefile.h"
#include<iostream>
#include"newstudents.h"
using std::cout;

linken:: linken(  students& student1)
{
	next = NULL;

	last = NULL;

	mamber=student1;
#if DEBUG
	cout << "in the init";
#endif // DEBUG

}






linken::linken(linken& link) :
	last(link.last),
	next(link.next),
	mamber(link.mamber)
{
	cout << mamber.name<<endl;
	cout << "拷贝初始已经完成" << std::endl;

}
void Getnext(linken &Linken,linken*PTR)
{
	//
	if (PTR ->next== NULL)
	{
		PTR->next =& Linken;
		Linken.last = PTR;
		return;
	}


	linken* linkptr = PTR, *Temp = NULL;
	
	//得到最后的有实际价值的指针//
	while (linkptr->next != NULL)
	{
		//Temp = linkptr;
		linkptr = linkptr->next;
	}
	linkptr->next = &Linken;
	Linken.last = linkptr;
	Linken.next = NULL;
}

void inital( linken &ptr, string NAME, string XUEHAO, tm BORNTIMR, bool SEX, int CP, int MATH, int ENGLISH)
{
	//1.确定是指针的最后一个

	if (ptr.next != NULL)
	{
		cout << "savefile.cpp.61 is run" << endl;
		ptr = *(ptr.next);
	}
	if (ptr.next == NULL)
	{
		printf("ptr,next==nullptr");
		students temp(NAME, XUEHAO, BORNTIMR, SEX, CP, MATH, ENGLISH);
		linken* linkptr = new linken(temp);
		ptr.next = linkptr;
		linkptr->last = &ptr;
	
	}
	
}
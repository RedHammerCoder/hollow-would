#include"savefile.h"
#include<iostream>
using std::cout;
linken::linken(linken& link) :
	last(link.last),
	next(link.next)
{
	cout << "拷贝初始已经完成" << std::endl;

}
void Getnext(linken &Linken,linken*PTR)
{
	if (PTR == nullptr)
	{
		PTR->next =& Linken;
		Linken.last = PTR;
		return;
	}


	linken* linkptr = PTR, *Temp = NULL;
	
	//得到最后的有实际价值的指针//
	while (linkptr->next != nullptr)
	{
		//Temp = linkptr;
		linkptr = linkptr->next;
	}
	linkptr->next = &Linken;
	Linken.last = linkptr;
	Linken.next = nullptr;
}



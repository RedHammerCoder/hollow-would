#include"savefile.h"
#include<iostream>
using std::cout;
linken::linken(linken& link) :
	last(link.last),
	next(link.next)
{
	cout << "������ʼ�Ѿ����" << std::endl;

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
	
	//�õ�������ʵ�ʼ�ֵ��ָ��//
	while (linkptr->next != nullptr)
	{
		//Temp = linkptr;
		linkptr = linkptr->next;
	}
	linkptr->next = &Linken;
	Linken.last = linkptr;
	Linken.next = nullptr;
}




#pragma warning( disable : 4996)


#include "define_the_head.h"
#include "newstudents.h"
#include "savefile.h"
#include<iostream>
#include <string>
#include<ctime>
using namespace std;
extern void getfile(linken& studen, fstream& file);
extern bool GetStoredMessage(linken& head, int size);
extern bool Savefile(linken* head);
extern void inital(linken& ptr, string NAME, string XUEHAO, tm BORNTIMR, bool SEX, int CP, int MATH, int ENGLISH);


enum input {

			INPUT ,
			DELETE ,
			CHANGE,
			EXPRESSALL,
			CLACULATE,
			SEARCH,
			SORT,
			EXIT
};


int main()
{
	//TODO 1.��ʼ����Ļ 1.5 ����ʷ�ļ���ȡ���� 2.����whileѭ�� 3.��ȡ���� 4�����û�д���5.�������� 6.����ļ����ļ�д�����







	linken head;
 
	linken *const suo = &head;
	int num = 0;
	//if (GetStoredMessage(head, 0))
		//return 1;

	

	//3.����whileѭ��
	while (1)
	{
		//��ʼ����Ļ��Ϣ����ʾ
		cout << "��������Ҫִ�еĲ�����ִ��/n";
		cout << "����0���ѧ��������1ɾ��ѧ�������ؼ���Ϊѧ�ţ�����2�ı�ѧ����Ϣ������3\n"
			<< "չʾ����ѧ����Ϣ������5����ѧ����Ϣ������6���չؼ�����������7�˳�лл" << endl;
		

		cin >> num;
		switch (num)
		{
		case INPUT:
		{

		string nameing;
		nameing.resize(17);
		cin >> nameing;

		string xuehao;
		nameing.resize(11);
		cin >> xuehao;
		//scanf("%s", &xuehao[0]);
		int tempint0 = 0;
		cout << "input the int";
		cin >> tempint0;

		int tempint1 = 0;
		cout << "input the int";
		cin >> tempint1;

		int tempint2 = 0;
		cout << "input the int";
		cin >> tempint2;
		tm time{ 0 };
		inital(head, nameing, xuehao, time, 1, tempint0, tempint1, tempint2);
		




		}
			break;

		case DELETE:
			break;
		case CHANGE:
		{
			int length = 0;
				
		}


			break;
		case EXPRESSALL:
		{
			linken tempofhead = *suo;



			while (tempofhead.next != NULL)
			{
				cout << tempofhead.mamber.name << endl;
				tempofhead = *(tempofhead.next);
				
			}
			if (tempofhead.next == NULL)
				cout << "in the end/n";
			//text
			
	/*
			while (tempofhead.last != nullptr)
			{
				cout << tempofhead.next<< endl;

				cout << tempofhead.mamber.name << endl;
				tempofhead = *(tempofhead.last);
				cout << tempofhead.next << endl;

			}
			if (tempofhead.last == nullptr)
				cout << "in the beg/n";

		*/		



			






		}
			break;
		case CLACULATE:
			break;
		case SEARCH:
			break;
		case SORT:
			break;
		case EXIT:
			Savefile(&head);
			return 0;

			




		}
		
	}
	
	
}
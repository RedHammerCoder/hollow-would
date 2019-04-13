
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
	//TODO 1.初始化屏幕 1.5 从历史文件读取数据 2.建立while循环 3.读取数据 4检查有没有错误5.进行运算 6.清空文件后将文件写入电脑







	linken head;
 
	linken *const suo = &head;
	int num = 0;
	//if (GetStoredMessage(head, 0))
		//return 1;

	

	//3.建立while循环
	while (1)
	{
		//初始化屏幕信息，显示
		cout << "请输入想要执行的操作并执行/n";
		cout << "输入0添加学生，输入1删除学生（）关键词为学号，输入2改变学生信息，输入3\n"
			<< "展示所有学生信息，输入5搜索学生信息，输入6按照关键字排序，输入7退出谢谢" << endl;
		

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
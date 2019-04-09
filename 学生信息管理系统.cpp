// 学生信息管理系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h" 
#include "students.h"
#include "Function.h"
#include <iostream>
#include <fstream>
#define _CRT_SECURE_NO_WARNINGS
#include <vector>
using namespace std;


void clear()
{
	fstream open("score.bin", ios::out | ios::trunc | ios::binary|ios::beg);
	open.close();
}


int main()
{
	vector<students>studs;
	//openfile(studs);
	fstream open("score.bin", ios::in | ios::beg | ios::binary);
	cout<<open.tellg();

	open.seekg(0, ios::end);
	cout << open.tellg();
	auto ptr = open.tellg();
	
	if (open.tellg() != 0) {
		open.seekg(0, ios::beg);
		while (ptr!=open.tellg())	//(open.eof() != 0) //
		{
			int i = sizeof(students);
			students stus(1);
			open.read(reinterpret_cast<char*>(&stus), sizeof(students));
			studs.push_back(stus);
			stus.showall();
			open.seekp(0, ios::cur);
			//cout << open.tellg()
			//	<< "          ";
			//cout << open.tellp();
			//stus.showall();

		}
		
		open.close();
		clear();
	}
	else
	{
		open.close();
	}
	
	while (1) {	

		cout << "insert1\nfindname2\nresort 4\nclear 7\nexpress 9\nexit 10\n";
		int num=1;
		cin >> num;
		switch (num)
		{
		case(1)://插入学生
			insert(studs);



			break;
		case(2):	   // 

			find(studs);

			break;
		case(3):	//添加学生
			break;
		case(4):
			resort(studs);//整理resort
			break;
		case(7)://clear file
			studs.clear();
			
			clear();
			break;
		case(9):
			express(studs);
			break;//ecpose

		case(10):
		{
			fstream file("score.bin", ios::out | ios::in | ios::app | ios::binary);
			//file.write(reinterpret_cast<chat*>)
			while (!studs.empty())
			{
				students student(studs.back());
				
				file.write(reinterpret_cast<char*>(&student), sizeof(students));
				studs.pop_back();
				student.showall();
			}
			file.close();



		}
			exit(1);
			break;
		}
	}


























	/*








	
	
	//openfile(studs);

	fstream open("score.bin", ios::in | ios::beg | ios::binary);

	while (open.tellg() != -1)	//(open.eof() != 0) //
	{
		int i = sizeof(students);
		students stus(1);
		open.read(reinterpret_cast<char*>(&stus), sizeof(students));
		studs.push_back(stus);
		stus.showall();
		open.seekp(0, ios::cur);
		cout << open.tellg()
			<< "          ";
		cout << open.tellp();
		//stus.showall();

	}
	open.clear();
	open.close();
	
	
	
			
			
	insert(studs);
	insert(studs);
	insert(studs);	
		
	resort(studs);
	
	express(studs);
		
		
		
		
		int ptr = 3;
																   

		while (ptr != 0)
		{
			string name;
										   
			cin >> name;
			ptr--;
			find(studs, name);
		}


		

		


		/*while (!studs.empty())
		{
			studs.back().showall();
			studs.pop_back();
		}

		string sad;
		cin >> sad;


	
		} */
	//fstream file("score.bin", ios::out | ios::app | ios::binary);


	/*{
	 fstream file("score.bin", ios::out | ios::in | ios::app | ios::binary);
		//file.write(reinterpret_cast<chat*>)
		while (!studs.empty())
		{
			students student(studs.back());
			student.showall();
			file.write(reinterpret_cast<char*>(&student), sizeof(students));
			studs.pop_back();
		}
		file.close();


		
	}	 //文件统一保存至score
	  */


    
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

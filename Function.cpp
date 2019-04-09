#include "pch.h"
#include "Function.h"
#include "students.h"
#include <vector>
#include <fstream>
#include <iostream>

using vecstuds = vector<students>;
using namespace std;

void quickSort(vecstuds &studs, int l, int r)
{

	if (l < r)
	{
		int i = l, j = r;

		auto x = studs[l];
		while (i < j)
		{
			while (i < j && !(studs[j] < x)) // 从右向左找第一个小于x的数
				j--;
			if (i < j)
				studs[i++] = studs[j];
			while (i < j && studs[i]< x) // 从左向右找第一个大于等于x的数
				i++;
			if (i < j)
				studs[j--] = studs[i];
		}
		studs[i] = x;
		quickSort(studs, l, i - 1); // 递归调用
		quickSort(studs, i + 1, r);
	}


}



void  insert(vecstuds &studs)
{
	students stud;
	studs.push_back(stud);
	//resort(studs);



}


void  resort(vecstuds &studs)
{
	quickSort(studs, 0, studs.size()-1);
	express(studs);





	/*auto size = studs.size();
	size--;
	for (int i = 0; i < size-1; i++)
	{
		int ptr = i;
		for (int t = i; t < size-1; t++)
		{
			//int pp = i;
			if (studs[ptr].Average > studs[t].Average)
			{
				ptr = t;
			}
			if (ptr != i) {
			students temp = studs[ptr];
			studs[ptr] = studs[i];
			studs[i] = temp;

		    }	
		
		  
		}

		

	}  */


}

void  express(vecstuds &studs)
{
	//resort(studs);
	for (auto stud : studs)
	{
		stud.showall();
		cout << endl;
	}
}
void openfile(vecstuds &studs)


{

   fstream open("score.bin", ios::in | ios::beg | ios::binary);

		while (open.eof()!=0) //(open.tellg() != -1)
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





}

void find(vecstuds &studs)
{
	string name;

	cin >> name;
	for (auto stu : studs)
	{
		string nam = stu.name;
		if (nam == name)
		{
			cout << "find this student";
			stu.showall();
		}
	}
}							                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
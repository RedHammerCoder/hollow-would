#include"newstudents.h"
#include <Windows.h>
#include <sstream>
#include <ctime>
#include <string>


	using namespace std;
//namespace stud
//{

	students::students()
	{
		name[16]={ 0 };
		xuehao[9] = 2;
		sex = 0;
		age = 0;
		CProgram = 0;
		math = 0;
		English = 0;


	}



	int students::GETsize()
	{
		return sizeof(students);
	}

	
	bool students:: SetName(std::string name)
	{
		auto length = name.length();
		if (length > 17)
			return 0;
		int ptr = 0;
		for (char sName : name)
		{
			if (sName == '/0')break;
			name[ptr] = sName;
			ptr++;

			

		}
		return 1;
	}

	students:: students(students& Student)
		://borntime(Student.borntime),
		sex(Student.sex),
		age(Student.age),
		CProgram(Student.CProgram),
		English(Student.English),
		math(Student.math)
		//borntime(Student.borntime)
	{
	strcpy_s(name, 16 * sizeof(char), (Student.name));
	strcpy_s(xuehao, 9 * sizeof(char), (Student.xuehao));




	}




	bool students:: SetAge(std::tm Time) {
		time_t nowon = time(0);
		borntime = Time;
		tm now{0};
		
		localtime_s(&now, &nowon);
		
		age = now.tm_year - borntime.tm_year;
		return 1;


}

	bool  students::Setxuehao(std::string Xuehao) {
		
		return 1;

}

	bool students:: SetCP(int score)
	{
		CProgram = static_cast<uint16_t>(score);
		return 1;

}

	bool students:: SetMath(int score)
	{
		math = score;
		return 1;
}

	bool students::SetEnglish(int score) {
		English = score;
		return 1;
}

	students:: students(std::string name, std::string Xuehao, tm Time, bool SEX, int cp, int math, int english)
	{
		
		/*cout << "please input name";
		cin >> name;
		cout << "Ñ§ºÅ";
		cin >> xuehao;
		*/
#if DEBUG 
		cout << "open" << endl;

#endif

		SetName(name);
		SetAge(Time);
		sex = SEX;
		CProgram = cp;
		SetMath(math);
		SetEnglish(english);




}




//


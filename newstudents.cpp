#include"newstudents.h"
#include <Windows.h>
#include <sstream>
#include <ctime>
#include <string>


	using namespace std;
namespace stud
{



	
	bool students:: SetName(std::string name)
	{
		auto length = name.length();
		if (length > 16)
			return 0;
		int ptr = 0;
		for (char Name : name)
		{
			if (Name == '/0')break;
			N[ptr] = Name;


		}
		return 1;
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




}



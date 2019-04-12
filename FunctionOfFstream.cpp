#ifndef fstreamFunction
#define fstreamFunction
#include <fstream>
#include "savefile.h"
#include"newstudents.h"
using namespace std;
 extern fstream out;
 void closeFile(fstream);

bool GetStoredMessage(void* ptr, int size)
{
	
}
//bool inputMessage(fstream* fileptr, void* linken);

bool Savefile(fstream* fileptr, linken* ptr)
{
	int size = sizeof(stud:: students);
	fstream open("savefiletodisk.bin", ios::in | ios::binary | ios::beg);
	open.clear


}











#endif // !fstreamFunction


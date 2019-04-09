#pragma once
#include "students.h"
#include <vector>
using namespace std;
using vecstuds = vector<students>;
class Function
{
public:
	Function();
	~Function();
};

void  insert(vecstuds &studs);
void  resort(vecstuds &studs );
void  express(vecstuds &studs );
void find(vecstuds &studse);
void openfile(vecstuds &studs);
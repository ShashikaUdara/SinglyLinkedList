#include <iostream>
#include <sstream>
#include "SinglyList.h"

using namespace std;

int main()
{
	int i;
	string tempBuff = "", tempStr = "";
	stringstream sstr;

	SinglyList sl;
	
	// inserting 100 strings to the singly list
	for(i=0; i<100; i++)
	{
		sstr << i;
		sstr >>tempBuff;
		tempStr = "String no:" + tempBuff;
		sl.insertData(tempStr);
		sstr.clear();
		tempStr = "";
		tempBuff = "";
	}

	// displaing the inserted data
	sl.displayData();

	return 0;
}
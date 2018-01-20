#include "SpyOutput.h"
#define endl   '\n'

void main()
{
	double d1 = 12.3;
	int i1 = 45;
	SpyOutput spy(&cout);
	spy << "abc" << endl;
	spy << "d1=" << d1 << " i1=" << i1 << 'z' << endl;

	cout << "count=" << spy.getCount() << endl;
	cout << "Check Sum=" << spy.getCheckSum() << endl;
}

/*
The count counts also the endl <'\n'>
... and the output for the presented code is:
abc
d1=12.3 i1=45z
count 19
Check Sum=1194
*/
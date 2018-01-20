//#ifndef ict_SpyOutput_h
//#define ict_SpyOutput_h
#include <iostream>

class SpyOutput{
	std::ostream &os;
public:
	SpyOutput(std::ostream &ostr){
		os = ostr;
	}
	std::ostream& operator<<(std::ostream& ostr, const SpyOutput& obj);
};

//#endif
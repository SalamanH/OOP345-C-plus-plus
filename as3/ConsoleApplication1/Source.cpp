#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;
class Format {
public: 
	void static formatTime(string time){
		int pos;
		string temp, hour, min;
		char colon;
		temp = time;
		pos = temp.find(':');
		hour = temp.substr(0, pos);
		min = temp.substr(pos + 1, temp.length() - 1);
		if (hour.length() < 2)
			hour = "0" + hour;
		cout << hour << ":";
		if (min.length() < 2)
			min = min + "0";
		cout << min << endl;
		//cout << temp << endl;

	};
};
void main(){
	ifstream iFile("file.txt");
	//char time1[100];
	int pos;
	string time;
	char char1;
	if (!iFile)
	{
		cout << "Error in opening fhe file" << endl;
		return;
	}
	cout << endl << endl;
	iFile.close();
	iFile.open("file.txt");
	while (!iFile.eof()){
		//iFile.getline(time1, 100, ','); char * method
		getline(iFile, time, ','); // string method 
		//cout << time1 << "-" << endl;
		//time = time1;
		while (time.size()) {
			
			if (time[0]<33) time.erase(time.begin());
			else if (time[time.size() - 1]<33) time.erase(time.size() - 1); 
			else break;
		}
		pos = time.find('\n');
		if (pos > 0)
		{
			Format::formatTime(time.substr(0, pos));
			Format::formatTime(time.substr(pos + 1, time.length() - 1));
		}
		else
			Format::formatTime(time);
		if (iFile.eof())
			break;
		do{
			char1 = iFile.get();
		} while (char1 == ' ' || char1 == ',');
		iFile.seekg(-1, std::ios::cur);
		
	}
	

	
	
}


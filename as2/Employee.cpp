#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Employee.h"
#include <string.h>

using namespace std;
bool twohundred(int z) { return (z >= 200 & z <= 299) ? true : false; }
bool threehundred(int z) { return (z >= 300 & z <= 399) ? true : false; }
bool fourhundred(int z) { return (z >= 400 & z <= 499) ? true : false; }
bool fivehundred(int z) { return (z >= 500 & z <= 599) ? true : false; }
bool sixhundred(int z) { return (z >= 600 & z <= 699) ? true : false; }
bool sevenhundred(int z) { return (z >= 700 & z <= 799) ? true : false; }
bool eighthundred(int z) { return (z >= 800 & z <= 899) ? true : false; }
bool ninehundred(int z) { return (z >= 900 & z <= 999) ? true : false; }
bool onethousand(int z) { return (z >= 1000) ? true : false; }


void Employee::setEmployees(vector<Employee>& Emp){
	Employee Emp1("John", "jacobson", 200);
	Emp.push_back(Emp1);
	Employee Emp2("steven", " hosemo", 230);
	Emp.push_back(Emp2);
	Employee Emp3("hose", "rodrigues",320);
	Emp.push_back(Emp3);
	Employee Emp4("sal", "hamid", 389);
	Emp.push_back(Emp4);
	Employee Emp5("jun", "tian", 411);
	Emp.push_back(Emp5);
	Employee Emp6("mariam", "shin", 1200);
	Emp.push_back(Emp6);
	Employee Emp7("nisrina", "bobs", 550);
	Emp.push_back(Emp7);
	Employee Emp8("bob", "thebuilder",650 );
	Emp.push_back(Emp8);
	Employee Emp9("paul", "makabe", 750);
	Emp.push_back(Emp9);
	Employee Emp10("tom", "jerry", 850);
	Emp.push_back(Emp10);
	Employee Emp11("joseph", "alls", 950);
	Emp.push_back(Emp11);
	Employee Emp12("adam", "pinciti",1150 );
	Emp.push_back(Emp12);
	Employee Emp13("michael", "scott", 601);
	Emp.push_back(Emp13);
	Employee Emp14("super", "man", 329);
	Emp.push_back(Emp14);
	Employee Emp15("bat", "man",999 );
	Emp.push_back(Emp15);

}
void Employee::display(vector<Employee>& emp){
	vector<int>::size_type sz = emp.size();
	for (int i = 0; i < sz; i++){
		cout << emp[i].m_first_Name << " "
			<< emp[i].m_last_Name << " "
			<< emp[i].m_gross_Sales << " "
			<< emp[i].m_week_Income << " "
			<< emp[i].m_bonus << endl;
	}
	cout << endl << endl;
}

Employee::Employee(string p_first, string p_last, double p_gross){
	m_first_Name = p_first;
	m_last_Name = p_last;
	m_gross_Sales = p_gross;
	m_week_Income = 200;
	m_bonus = p_gross * 0.09;
}
Employee::Employee(){
	m_first_Name = "";
	m_last_Name = "";
	m_gross_Sales = 0.0;
	m_week_Income = 0.0;
	m_bonus = 0.0;
}
void Employee::countDisplay(vector<Employee>& emp)
{
	vector<int> emptotal;
	for (int unsigned i = 0; i < emp.size(); i++){
		emptotal.push_back(emp[i].total());
	}
	int iCount = 0;
	int x = 0;
	//lambda method 
	cout << "200 - 299" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 200 & z <= 299) ? true : false; }) << endl
		 << "300 - 399" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 300 & z <= 399) ? true : false; }) << endl
		 << "400 - 499" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 400 & z <= 499) ? true : false; }) << endl
		 << "500 - 599" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 500 & z <= 599) ? true : false; }) << endl
	 	 << "600 - 699" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 600 & z <= 699) ? true : false; }) << endl
		 << "700 - 799" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 700 & z <= 799) ? true : false; }) << endl
		 << "800 - 899" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 800 & z <= 899) ? true : false; }) << endl
		 << "900 - 999" << ":      " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 900 & z <= 999) ? true : false; }) << endl
		 << "1000 and over" << ":  " << count_if(emptotal.begin(), emptotal.end(), [=](int z) { return (z >= 1000) ? true : false; }) << endl;


	//functer method 
	/*cout << "200 - 299" << ":      " << count_if(emptotal.begin(), emptotal.end(), twohundred) << endl
		<< "300 - 399" << ":      " << count_if(emptotal.begin(), emptotal.end(), threehundred) << endl
		<< "400 - 499" << ":      " << count_if(emptotal.begin(), emptotal.end(), fourhundred) << endl
		<< "500 - 599" << ":      " << count_if(emptotal.begin(), emptotal.end(), fivehundred) << endl
		<< "600 - 699" << ":      " << count_if(emptotal.begin(), emptotal.end(), sixhundred) << endl
		<< "700 - 799" << ":      " << count_if(emptotal.begin(), emptotal.end(), sevenhundred) << endl
		<< "800 - 899" << ":      " << count_if(emptotal.begin(), emptotal.end(), eighthundred) << endl
		<< "900 - 999" << ":      " << count_if(emptotal.begin(), emptotal.end(), ninehundred) << endl
		<< "1000 and over" << ":  " << count_if(emptotal.begin(), emptotal.end(), onethousand) << endl;*/


}
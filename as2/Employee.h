#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee {
	
	string m_first_Name;
	string m_last_Name;
	double m_gross_Sales;
	double m_week_Income;
	double m_bonus;

public:
	Employee();
	Employee(string p_first, string p_last, double p_gross);
	void setEmployees(vector<Employee>&);
	void display(vector<Employee>&);
	double bonus(){
		return m_bonus;
	}
	void countDisplay(vector<Employee>&);
	double total(){
		return m_bonus + m_gross_Sales;
	}


};





#endif
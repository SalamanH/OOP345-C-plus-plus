#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Employee.h"
using namespace std;
void fillarray(std::vector<std::vector<int>>&, std::vector<int>&);

int main(){

	vector<std::vector<int>>numbers;
	std::vector<int> tempVector;

	fillarray(numbers, tempVector);
	
	
	vector<int>::size_type sz = numbers.size();
	vector<int>::size_type sz2 = tempVector.size();
	for (int unsigned i = 0; i < sz; i++){
		cout << endl;
		for (int unsigned j = 0; j < sz2; j++)
			cout << numbers[i][j];
	}
	cout << endl << endl;

	vector<Employee> emp;
	
	Employee emp2;
	emp2.setEmployees(emp);

	emp2.display(emp);

	emp2.countDisplay(emp);

	return 0;
}

void fillarray(std::vector<std::vector<int>>& numbersV, std::vector<int>& tempV){

	tempV.push_back(5);
	tempV.push_back(2);
	tempV.push_back(3);

	numbersV.push_back(tempV);
	tempV.clear();

	tempV.push_back(7);
	tempV.push_back(1);
	tempV.push_back(4);

	numbersV.push_back(tempV);
	tempV.clear();

	tempV.push_back(3);
	tempV.push_back(4);
	tempV.push_back(7);

	numbersV.push_back(tempV);
	tempV.clear();

	tempV.push_back(8);
	tempV.push_back(1);
	tempV.push_back(2);

	numbersV.push_back(tempV);
}
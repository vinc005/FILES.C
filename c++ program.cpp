/*
Author: Vincent Lochaki
Reg No: BSE-01-0002/2025
Description: A program to prompt the user to enter marks for three subjects,
             calculate the average score and assigning grades based on the average score.
Date: 6/7/2025.
version 1
*/



#include <iostream>
using namespace std;
int main() {
	char Grade;
	if(Grade > 80) {
		cout<<"A."<<endl;
	}
	else if(Grade > 60) {
		cout<<"B."<<endl;
	}
	float subject1,subject2,subject3;
	cout<<"Enter marks for subject1.";
	cin>>subject1;
	cout<<"Enter marks for subject2.";
	cin>>subject2;
	cout<<"Enter marks for subject3.";
	cin>>subject3;
	float average = (subject1 + subject2 + subject3 / 3);
	char grade = (average);
	cout<<"Average marks"<<average<<endl;
	cout<<"Grade"<<grade<<endl;
	return 0;
}
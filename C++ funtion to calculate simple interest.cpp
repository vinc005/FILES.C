#include <iostream>
using namespace std;

double calculateSipmleInterest(double principal,double rate,double time) {
	return (principal*rate*time) / 100;
}
int main() {
	double principal,rate,time,SimpleInterest;
	cout<<"Enter principal : ";
	cin>>principal;
	
	cout<<"Enter rate: ";
	cin>>rate;
	
	cout<<"Enter time (in years): ";
	cin>>time;
	
	double SimpleInterest = calculateSimpleInterest(principal * rate * time) / 100;
	cout<<"Simple Interest" << SimpleInterest << endl;
	return 0;
}
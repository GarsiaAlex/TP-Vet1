#include "stdafx.h"
#include <iostream>

using namespace std;

double mySum (double a, double b){
	return a+b;
}

double mySub (double a, double b){
	return a-b;
}

int main (){
	cout << mySum(10, 3) << endl;
	cout << mySub(10, 3) << endl;
	
	return 0;
}
#include "stdafx.h"
#include "funcs.h"

double mySum (double a, double b){
	return a+b;
}

double mySub (double a, double b){
	return a-b;
}

double myMul (double a, double b) {
	return a*b;
}

double myDel (double a, double b) {
	return a/b;
}

double myPow (int num, int n){
	int res = num;
	
	for (int i = 1; i < n; i++){
		res *= num;
	}	
	
	return res;
}
//
//  Plus_minus.cpp
//  hackerRank
//
//  Created by Alejandro Sanchez on 3/9/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip> 
#include <algorithm>

using namespace std;


int main() {
 	double iSize;
 	int input;
	cin >> iSize;
 	double iCountZero, iCountPositive, iCountNegative;
 	for(int i=0;i < iSize;i++){
 		cin >> input;
 		if(input < 0){
 			iCountNegative++;
 		}else if(input > 0){
 			iCountPositive++;
 		}else{
 			iCountZero++;
 		}
 	}

 	cout << setprecision(3) << iCountPositive / iSize << endl;
 	cout << setprecision(3) << iCountNegative / iSize << endl;
 	cout << setprecision(3) << iCountZero / iSize << endl;

 	return 0;
 }

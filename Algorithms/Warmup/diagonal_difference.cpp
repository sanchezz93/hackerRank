//
//  diagonal_difference.cpp
//  hackerRank
//
//  Created by Alejandro Sanchez on 3/9/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
 	int iSize;
	cin >> iSize;
 	int matInput[iSize][iSize];
 	for(int i=0;i < iSize;i++){
 		for(int j=0;j<iSize;j++){
 			cin>> matInput[i][j];
 		}
 	}
 	int diag_1=0, diag_2=0;

 	for(int i=0; i <iSize;i++){
 		for(int j=0;j <iSize;j++){
 			if(i==j){
 				diag_1 += matInput[i][j];
 			}
 			if(i+j==(iSize-1)){
 				diag_2 += matInput[i][iSize-i-1];
 			}
 		}
 	}
 	cout << abs(diag_1-diag_2) << endl;
 	return 0;
 }

//
//  main.cpp
//  hackerRank
//
//  Created by Alejandro Sanchez on 1/8/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
 	int iCount;
 	cin >> iCount;
 	long long itotal=0,inumber;
 	for(int i=0;i<iCount;i++){
 		cin >> inumber;
 		itotal += inumber;
 	}
 	cout <<itotal;
 	return 0;
 }

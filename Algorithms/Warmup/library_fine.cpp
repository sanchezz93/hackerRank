//
//  library_fine.cpp
//  hackerRank
//
//  Created by Alejandro Sanchez on 8/9/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
 	int de, me , ye;
	int  dr, mr, yr;
	cin >> dr  >> mr >> yr;
	cin >> de >> me >> ye;
	if(ye == yr){
		if(me == mr){
			if(de <= dr){
				cout << 0 << endl;
			}else{
				cout << 15 * abs(dr-de) << endl;
			}
		}else{
			cout << 500 * abs(me - mr)<< endl;
		}
	}else{
		cout << 10000 << endl;
	}

 	return 0;
 }

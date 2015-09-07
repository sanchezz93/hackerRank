#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip> 
#include <algorithm>

using namespace std;


int main() {
 	int iSize,variable;
 	cin >> iSize;
 	variable = 0;
 	int spaces = iSize;
 	for(int i=0;i < iSize;i++){
 		for(int j=variable;j > 0;j--){
 			if(spaces == 0){
 				cout << "#";	
 			}else{
 				cout << " ";
 			}
 		}
 		variable++;
 		cout << endl;
 	}

 	

 	return 0;
 }
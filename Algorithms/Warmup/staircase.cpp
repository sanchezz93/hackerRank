#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip> 
#include <algorithm>

using namespace std;


int main() {
 	int iSize,spaces;
 	cin >> iSize;
 	spaces = (iSize-1);
 	int aux = spaces;
 	for(int i=0;i < iSize;i++){
 		for(int j=0;j <iSize;j++){
 			if(aux==0){
 				cout << "#";
 			}
 			aux--;
 		}
 		spaces--;
 		cout << endl;
 	}

 	

 	return 0;
 }

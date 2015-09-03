//
//  main.cpp
//  hackerRank
//
//  Created by Alejandro Sanchez on 1/8/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <iostream>

using namespace std;

unsigned int returnValue(unsigned int val){
    
    return 2*((1<<31)-1)+1-val;
    //return ~val;
}

int main() {
    // insert code here...
    unsigned int value;
    int amount;
    cin >> amount;
    while(amount--){
        cin >> value;
        unsigned int finalValue=returnValue(value);
        cout << finalValue << endl;
        
    }
    return 0;
}

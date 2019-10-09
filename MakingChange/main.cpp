//
//  main.cpp
//  MakingChange
//
//  Created by Aj Gill on 10/9/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>

using namespace std;

void findMinNumOfCoins(int changeAmount){
    int count = 0;
    while(changeAmount != 0){
        if(changeAmount % 100 != changeAmount){
            changeAmount -= 100;
            count++;
        }
        else if(changeAmount % 50 != changeAmount){
            changeAmount -= 50;
            count++;
        }
        else if(changeAmount % 25 != changeAmount){
            changeAmount -= 25;
            count++;
        }
        else if(changeAmount % 10 != changeAmount){
            changeAmount -= 10;
            count++;
        }
        else if(changeAmount % 5 != changeAmount){
            changeAmount -= 5;
            count++;
        }
        else{
            changeAmount--;;
            count++;
        }
    }
    cout << "The minimum number of coins for this amount of change is " << count << "\n";
}

int main() {
    int changeAmount = 67;
    findMinNumOfCoins(changeAmount);
}

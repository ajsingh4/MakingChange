//
//  main.cpp
//  MakingChange
//
//  Created by Aj Gill on 10/9/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>

using namespace std;

int findMinNumOfCoins(int changeAmount, int coins[], int size){
    if(changeAmount == 0) {
        return 0;
    }
    //Since maximum number of coins is 1 cent coins, min is initialized to intiial changeAmount
    int minimum = changeAmount;
    for(int j=0; j<size; j++){
        //If it's possible to subtract that count
        if(changeAmount - coins[j] >= 0) {
            //Recurse with the changeAmount/count after subtraction
            int c = findMinNumOfCoins(changeAmount - coins[j], coins, size);
            //If the current coin count is greater than the sub problem's coin count, increment the sub problem's coin count
            if(minimum > c + 1) {
                minimum = c + 1;
            }
        }
    }
    return minimum;
}

int main() {
    int changeAmount = 32;
    int coins[6] = {100,50,25,10,5,1};
    int size = sizeof(coins)/sizeof(*coins);
    int min = findMinNumOfCoins(changeAmount, coins, size);
    cout << "Minimum number of coins: " << min << "\n";
}

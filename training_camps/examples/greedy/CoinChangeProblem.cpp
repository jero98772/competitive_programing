#include <bits/stdc++.h>

using namespace std;
int coinChange(vector<int>& coins,int amount){
	sort(coins.rbegin(),coins.rend());
	int coinCount=0;
	for(int coin:coins){
			if(amount==0)break;
			if (coin<=amount){
				coinCount+=amount/coin;
				amount%=coin;

		}
	}

	if(amount!=0){
		return -1;
	}
	return coinCount;
}

int main() {
    vector<int> coins = {1,2, 5, 10, 25};

    int amount;cin>>amount;

    int minCoins = coinChange(coins, amount);
    if (minCoins == -1) {
        cout << "Cannot make change for " << amount << " using given coins." << endl;
    } else {
        cout << "Minimum number of coins required: " << minCoins << endl;
    }

    return 0;
}

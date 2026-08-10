// BRUTE FORCE APPROACH
// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;

int main(){
    // int stocks[] = {7,1,5,3,6,4};
    int stocks[] = {7,6,4,3,1};
    int n = sizeof(stocks) / sizeof(int);

    int maxProfit = INT_MIN;
    int buy_day = 0;
    int sell_day = 0;

    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            // cout << "( " << i << ","<<j<< "," << n <<")\n";
            int currProfit = stocks[j] - stocks[i];
            if (currProfit > maxProfit) {
                maxProfit = currProfit;
                buy_day = i;
                sell_day = j;
            }
        }
    }
    if (maxProfit > 0) {
    cout << "Buy on day "<< buy_day << " (price =" << stocks[buy_day] <<") and sell on day "<< sell_day << " (price = " << stocks[sell_day] << "), profit = "<<maxProfit << ".";
    }
    else {
        cout << "Avoid any transactions max profit = " << maxProfit;
    }
    return 0;
}
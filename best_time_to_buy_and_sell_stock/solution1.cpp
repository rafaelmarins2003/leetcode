#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

vector<int> prices = {7,1,3,4,6,5};

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}

int main() {
    int result = maxProfit(prices);
    cout << result << endl;
    return 0;
}

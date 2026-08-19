#include <iostream>
#include <vector>
using namespace std;

vector<int> nums = {2,5,5,11};
int target = 10;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++){
        int sum = 0;
        if (i == 0) continue;

        for (int j = 0; j < nums.size(); j++){
            if (j == i) continue;
            sum = nums[i] + nums[j];
            if (sum == target){
                return {j, i};
            }
        }

    }
    return {};
}

int main() {
    vector<int> r = twoSum(nums, target);
    for (int x : r) cout << x << " ";
    cout << endl;

    return 0;
}

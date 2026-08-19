#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> nums = {2,5,5,11};
int target = 10;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i=0; i < nums.size(); i++){
        int num = target - nums[i];
        if (mp.find(num) != mp.end()){
            return {mp[num],i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> r = twoSum(nums, target);
    for (int x : r) cout << x << " ";
    cout << endl;

    return 0;
}

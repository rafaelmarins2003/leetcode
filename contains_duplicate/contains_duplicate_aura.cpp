#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> nums = {1,2,3,4};

bool ContainsDuplicate(vector<int>& nums){
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++){
        if (i == (nums.size() - 1)){
            return false;
        }
        else if (nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;
}

int main(){
    bool result = ContainsDuplicate(nums);
    cout << result << endl;
    return 0;
}

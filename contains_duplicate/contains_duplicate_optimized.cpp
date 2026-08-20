#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> nums = {1,2,3,4};

bool ContainsDuplicate(vector<int>& nums){
    unordered_map<int, bool> memory;
    for (int i = 0; i < nums.size(); i++){
        if (memory.find(nums[i]) != memory.end()){
            return true;
        }
        memory[nums[i]] = true;
    }
    return false;
}

int main(){
    bool contains = ContainsDuplicate(nums);
    cout << contains << endl;

    return 0;
}





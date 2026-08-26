#include <iostream>
#include <unordered_map>
#include <vector>

bool isValid(std::string s) {
    std::unordered_map<char, char> mp = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };
    std::vector<char> vec;
    for (int i = 0; i < s.length();i++){
        if (mp.find(s[i]) != mp.end()) {
            if (vec.empty() || vec.back() != mp[s[i]]) {
                return false;
            }
            vec.pop_back();
        } else {
            vec.push_back(s[i]);
        }
    }
    return vec.empty();
}

int main(void) {
    std::string s = "";
    bool result = isValid(s);
    std::cout << result << std::endl;
}
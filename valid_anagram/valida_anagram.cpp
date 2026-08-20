#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string s = "anagram";
string t = "nagaram";

bool isAnagram(string s, string t){
    int s_length = s.length();
    int t_length = t.length();
    if (s_length != t_length){
        return false;
    }
    unordered_map<char, int> mp;
    for (int i = 0; i<s_length; i++){
        mp[s[i]] += 1;
    }
    for (int i = 0; i<t_length;i++){
        mp[t[i]] -= 1;
    }
    for (auto& [key, value] : mp){
        if (value != 0) return false;
    }
    return true;

}

int main(){
    bool result = isAnagram(s, t);
    cout << result << endl;
    return 0;
}

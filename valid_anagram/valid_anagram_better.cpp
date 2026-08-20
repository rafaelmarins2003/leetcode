#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string s = "anagram";
string t = "nagaram";

bool isAnagram(string s, string t){
    unordered_map<char,int> p;
    unordered_map<char,int> d;
    if (s.length() != t.length()) return false;
    for (int i = 0; i < s.length(); i++){
        p[s[i]]++;
        d[t[i]]++;
    }
    if (p != d) return false;
    return true;
}

int main(){
    bool result = isAnagram(s, t);
    cout << result << endl;
    return 0;
}

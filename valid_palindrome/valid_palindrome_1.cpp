#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string s = "A man, a plan, a canal: Panama";

bool isPalindrome(string s){
    return 1;
}

int main(){

    auto trash = remove_if(s.begin(), s.end(), [](unsigned char c){
        return !isalnum(c);
    });
    s.erase(trash, s.end());
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
        return tolower(c);
    });
    string c = s;
    reverse(s.begin(), s.end());
    if (c == s){
        cout << true << endl;
        return 0;
    }
    cout << false << endl;
    return 0;
}

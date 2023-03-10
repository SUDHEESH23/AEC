#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

int main() {
    int t;

    cin >> t;
    while(t--) {
        string s;

        cin >> s;
        int n = s.length();
        bool happy = false;
        for(int i=0; i<n-2; i++) {
            if(isVowel(s[i]) && isVowel(s[i+1]) && isVowel(s[i+2])) {
                happy = true;
                break;
            }
        }
        if(happy)
            cout <<"HAPPY\n";
        else
            cout <<"SAD\n";
    }
    return 0;
}
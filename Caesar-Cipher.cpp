string caesarCipher(string s, int k)
{
    std::string result;
    
    for(auto &word: s)
    {
        if (isalpha(word))
        {
            char temp = isupper(word) ? 'A' : 'a';
            word = (word - temp + k) % 26 + temp;
        }
        
        result += word;
    }
    
    return result;
}



#include <iostream>
#include <string>

using namespace std;

string caesarCipher(string s, int k) {
    k %= 26;
    
    for (char &c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + k) % 26 + base;
        }
    }
    return s;
}

int main() {
    int n, k;
    string s;

    cin >> n >> s >> k;
    cout << caesarCipher(s, k) << endl;

    return 0;
}

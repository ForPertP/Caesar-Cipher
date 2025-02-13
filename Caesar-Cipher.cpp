#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k)
{
    k %= 26;
    
    for (char &c : s)
    {
        if (isalpha(c))
        {
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

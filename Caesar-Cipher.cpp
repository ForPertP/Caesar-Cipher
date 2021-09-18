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


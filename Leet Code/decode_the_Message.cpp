#include <iostream>
#include <string.h>
using namespace std;

string decodeMessage(string key, string message)
{
    char start = 'a';
    char map[1000] = {0}; //  all 1000 block of map char array will be initialize by 0
    for (auto ch : key)
    {
        if (ch != ' ' && map[ch] == 0)
        {
            map[ch] = start;
            start++;
        }
    }
    string ans;

    // using map
    for (auto ch : message)
    {
        if (ch == ' ')
        {
            ans.push_back(ch);
        }
        else
        {
            char decodechar = map[ch];
            ans.push_back(decodechar);
        }
    }
    return ans;
}

int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    string decodedMessage = decodeMessage(key, message);
    cout << "Decoded message: " << decodedMessage << endl;
    return 0;
}

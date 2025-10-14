#include <string>
#include <map>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> hashtable;
        for (auto c : s)
        {
            hashtable[c]++;
        }
        for (auto c : t)
        {
            hashtable[c]--;
        }

        for (auto pair : hashtable)
        {
            cout << "'" << pair.first << "':" << pair.second << " ";
        }

        for (auto pair : hashtable)
        {
            if (pair.second != 0)
                return false;
        }

        return true;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    string word1 = "anagram";
    string word2 = "nagaram";

    cout << "Testing with input: " << word1 << "and" << word2 << endl;
    int result = sol.isAnagram(word1, word2);

    cout << "Result: " << result << endl;

    return 0;
}
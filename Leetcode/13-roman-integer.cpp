#include <string>
#include <map>
#include <iostream>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> hashtable = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int finalNum = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            printf("each char %c\n", s[i]);
            int currentNum = hashtable[s[i]];
            int afterNum = hashtable[s[i + 1]];

            if (currentNum < afterNum)
            {
                finalNum = finalNum - currentNum;
            }
            else
            {
                finalNum = finalNum + currentNum;
            }
            printf("currentnum: %d, afternum: %d, finalnum after char %c : %d\n", currentNum, afterNum, s[i], finalNum);
        }

        return finalNum;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    string input = "XVIII"; // Change this to any Roman numeral you want to test

    cout << "Testing with input: " << input << endl;
    int result = sol.romanToInt(input);

    cout << "Result: " << result << endl;

    return 0;
}
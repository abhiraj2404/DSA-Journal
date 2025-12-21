// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0 || n == 1)
            return n;

        int longestseq = 1;
        unordered_set<int> st;

        for (auto i : nums)
        {
            st.insert(i);
        }

        for (auto i : st)
        {
            if (st.find(i - 1) == st.end())
            {
                // this is leader
                int count = 1, x = i;
                while (st.find(x + 1) != st.end())
                {
                    count++;
                    x++;
                }

                longestseq = max(longestseq, count);
            }
        }

        return longestseq;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {100, 4, 200, 1, 3, 2, 101, 103, 102, 104};

    int result = sol.longestConsecutive(input);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>  

using namespace std;

class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        vector<int> finalVec;
        map<int, int> frequencyTable;
        for (auto i : nums)
        {
            frequencyTable[i]++;
        }

        cout << "innitial frequency table - ";
        for (auto i : frequencyTable)
        {
            cout << i.first << ":" << i.second << " , ";
        };

        while (!frequencyTable.empty())

        {
            int minFrequency = INT_MAX, minFrequencyElement;
            for (auto j : frequencyTable)
            {
                if (minFrequency > j.second)
                {
                    minFrequency = j.second;
                    minFrequencyElement = j.first;
                }
                else if (minFrequency == j.second)
                {
                    if (minFrequencyElement < j.first)
                    {
                        minFrequency = j.second;
                        minFrequencyElement = j.first;
                    }
                }
            }

            cout << "minFrequencyElement :" << minFrequencyElement;
            cout << ", minFrequency :" << minFrequency;

            finalVec.insert(finalVec.end(), minFrequency, minFrequencyElement);
            cout << " , finalvec: ";
            for (auto i : finalVec)
            {
                cout << i << " , ";
            };
            cout << endl;
            frequencyTable.erase(minFrequencyElement);

            for (auto i : frequencyTable)
            {
                cout << i.first << ":" << i.second << " , ";
            };
        }
        return finalVec;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    vector<int> input = {1,1,2,2,2,3};

    vector<int> result = sol.frequencySort(input);

    for (auto i : result)
    {
        cout << i << " , ";
    };
    return 0;
}
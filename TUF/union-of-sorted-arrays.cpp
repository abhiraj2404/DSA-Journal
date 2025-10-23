

// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> arr;
        int i = 0, j = 0, count = 0, min;
        while (i < n1 && j < n2)
        {
            if (nums1[i] < nums2[j])
            {
                min = nums1[i];
                i++;
            }
            else
            {
                min = nums2[j];
                j++;
            };
            if (count == 0)
            {
                arr.push_back(min);
                count++;
                continue;
            }
            if (arr[count - 1] < min)
            {
                arr.push_back(min);
                count++;
            }

            cout << endl;
        };
        cout << count << " " << i << " " << j << endl;
        while (i < n1)
        {
            if (arr[count - 1] < nums1[i])
            {
                arr.push_back(nums1[i]);
                count++;
            }
            i++;
        }
        while (j < n2)
        {
            if (arr[count - 1] < nums2[j])
            {
                arr.push_back(nums2[j]);
                count++;
            }
            j++;
        }

        return arr;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input1 = {1, 1, 2, 7, 8};
    vector<int> input2 = {1, 2, 3, 4, 5, 6, 7};

    cout << "Testing with input: " << endl;
    vector<int> result = sol.unionArray(input1, input2);

    // cout << "Result: " << result << endl;
    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}

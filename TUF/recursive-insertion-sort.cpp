// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void recursiveInsertionSort(vector<int> &arr, int n)
{
    if (n == 0)
        return;

    cout << "n=" << n << endl;
    recursiveInsertionSort(arr, n - 1);
    int index = n;
    while (arr[index] < arr[index - 1] && index > 0)
    {
        // swap backwards
        int temp = arr[index];
        arr[index] = arr[index - 1];
        arr[index - 1] = temp;
        index--;
    }
}

class Solution
{
public:
    vector<int> insertionSort(vector<int> &nums)
    {
        int n = nums.size();
        recursiveInsertionSort(nums, n - 1);
        return nums;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    vector<int> input = {10, 20, 1, 5, 3};

    cout << "Testing with input: " << endl;
    vector<int> result = sol.insertionSort(input);

    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}

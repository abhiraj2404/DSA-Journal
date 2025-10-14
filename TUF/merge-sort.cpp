// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp = {};
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void myMergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    myMergeSort(arr, low, mid);
    myMergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

class Solution
{
public:
    vector<int> mergeSort(vector<int> &nums)
    {
        // recursive algorithm
        int n = nums.size();
        myMergeSort(nums, 0, n - 1);
        return nums;
    }

public:
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    vector<int> input = {10, 20, 1, 5, 3, 15, 32, 64, 2, 9};

    cout << "Testing with input: " << endl;
    vector<int> result = sol.mergeSort(input);

    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}

// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void recursiveQuickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int pivot = arr[low], i = low + 1, j = high;
    while (i <= j)
    {
        if (arr[i] > pivot && arr[j] < pivot)
        {
            // swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else
        {
            if (arr[i] <= pivot)
                i++;
            if (arr[j] >= pivot)
                j--;
        }
    }
    // swap j and pivot
    arr[low] = arr[j];
    arr[j] = pivot;
    int partitionIndex = j;

    recursiveQuickSort(arr, low, partitionIndex - 1);
    recursiveQuickSort(arr, partitionIndex + 1, high);
}

class Solution
{
public:
    vector<int> quickSort(vector<int> &nums)
    {
        int n = nums.size();
        recursiveQuickSort(nums, 0, n - 1);
        return nums;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    vector<int> input = {10, 20, 1, 5, 3, 12, 15};

    cout << "Testing with input: " << endl;
    vector<int> result = sol.quickSort(input);

    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}

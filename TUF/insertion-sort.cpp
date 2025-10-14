//Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>  

using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++){
            int j=i;
            while(nums[j] < nums[j-1] && j > 0){
                //swap
                int temp = nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
                j--;
            }
        }
        return nums;
    }
};

int main() {
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


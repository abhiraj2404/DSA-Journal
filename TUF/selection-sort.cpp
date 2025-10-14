//Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>  

using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int temp,n=nums.size();
        for(int i=0;i<=n-2;i++){
            int min= INT_MAX;
            for(int j=i;j<=n-1;j++){
                //find minimum
                if(nums[j]<nums[min])
                min=j;
            }
            //swap
            temp=nums[i];
            nums[i]=nums[min];
            nums[min]=temp;
        }
        return nums;
    }
};

int main() {
    // create object of whatever class is given above
    Solution sol;
    
    // Test with some input
    vector<int> input = {7, 4, 1, 5, 3};
    
    cout << "Testing with input: " << endl;
    vector<int> result = sol.selectionSort(input);

    cout << " , finalvec: ";
    for (auto i : result)
        {
            cout << i << " , ";
        };
    cout << endl;
    
    return 0;
}


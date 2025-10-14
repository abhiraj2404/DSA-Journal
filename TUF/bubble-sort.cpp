//Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>  

using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size(),temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j] > nums[j+1]){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
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
    vector<int> result = sol.bubbleSort(input);

    cout << " , finalvec: ";
    for (auto i : result)
        {
            cout << i << " , ";
        };
    cout << endl;
    
    return 0;
}


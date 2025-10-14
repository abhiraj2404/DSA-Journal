//Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    int someFunction(string s) {

    }
};

int main() {
    // create object of whatever class is given above
    Solution sol;
    
    // Test with some input
    string input = "XIV";
    
    cout << "Testing with input: " << input << endl;
    int result = sol.someFunction(input);
    
    cout << "Result: " << result << endl;
    
    return 0;
}


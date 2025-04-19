#include <iostream>
#include <string>
#include <iostream>
#include <cassert>
#include "main.cpp"
using namespace std;

int main() {
    Solution solution;
    string case1 = "leetcode";
    string case2 = "loveleetcode";
    string case3 = "aabb";
    assert(solution.firstUniqueChar(case1) == 0);
    assert(solution.firstUniqueChar(case2) == 2);
    assert(solution.firstUniqueChar(case3) == -1);
    cout << "All tests passed!" << endl;    
    return 0;
}


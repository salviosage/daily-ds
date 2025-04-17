#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
#include "main.cpp"

void test() {
    Solution solution;
    string case1 = "leetcode";
    string case2 = "loveleetcode";
    string case3 = "aabb";
    cout << "Test case 1: " << case1 << endl;
    if ( solution.firstUniqueChar(case1) == 0 ) {
        cout << "Passed:" << "letter is " << case1[0] << endl;
    } else {
        cout << "Failed" << endl;
    }
    cout << "Test case 2: " << case2 << endl;
    if ( solution.firstUniqueChar(case2) == 2 ) {
        cout << "Passed:" << "letter is " << case1[2] << endl;
    } else {
        cout << "Failed" << endl;
    }
    cout << "Test case 3: " << case3 << endl;
    if ( solution.firstUniqueChar(case3) == -1 ) {
        cout << "Passed: no unique character" << endl;
    } else {
        cout << "Failed" << endl;
    }
}
int main() {
    test();
    return 0;
}


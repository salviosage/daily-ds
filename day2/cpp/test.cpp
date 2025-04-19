#include <iostream>
#include <cassert>
#include "main.cpp"
using namespace std;

int main() {
    vector<int> nums;
    nums = {1, 1, 1, 2, 2, 3};
    auto res = topKFrequent(nums, 2);
    assert((res[0] == 1 || res[1] == 1) && (res[0] == 2 || res[1] == 2));

    nums = {1};
    res = topKFrequent(nums, 1);
    assert(res[0] == 1);

    cout << "All tests passed!" << endl;
    return 0;
}

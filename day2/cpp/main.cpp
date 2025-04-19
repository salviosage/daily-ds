#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int n : nums) freq[n]++;
    vector<pair<int, int>> freq_vec(freq.begin(), freq.end());
    sort(freq_vec.begin(), freq_vec.end(), [](auto& a, auto& b) {
        return a.second > b.second;
    });
    vector<int> result;
    for (int i = 0; i < k; i++) result.push_back(freq_vec[i].first);
    return result;
}

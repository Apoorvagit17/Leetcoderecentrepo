class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
    unordered_set<int> list{nums1.begin(), nums1.end()};

    for (const int nums : nums2)
      if (list.erase(nums))
        result.push_back(nums);

    return result;
    }
};
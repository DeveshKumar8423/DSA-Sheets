class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;

        // Include the first elements and subsequent elements from nums1 and nums2
        for(int i = 0; i < m; i++) {
            ans.push_back(nums1[i]);
        }
        for(int i = 0; i < n; i++) {
            ans.push_back(nums2[i]);
        }

        // Sort the merged array
        sort(ans.begin(), ans.end());

        // Copy the sorted elements back to nums1
        for(int i = 0; i < m + n; i++) {
            nums1[i] = ans[i];
        }
    }
};

class Solution {
private:
    int isPossible(vector<int> &nums, int mid) {
        int count = 1;
        int segments = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(segments + nums[i] <= mid) {
                segments += nums[i];
            } else {
                count++;
                segments = nums[i];
            }
        }
        return count;
    }    
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high) {
            int mid = low + ((high - low) / 2);

            int subArray = isPossible(nums, mid);
            if(subArray <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }   
        return low;
    }
};
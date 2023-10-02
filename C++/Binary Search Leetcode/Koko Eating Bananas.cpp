// Question link: https://leetcode.com/problems/koko-eating-bananas/ //

class Solution {
private:
    long long totalHoursTaken(vector<int> &piles, int hourly) {
        int n = piles.size();
        long long totalTime = 0;

        for(int i = 0; i < n; i++) {
            totalTime += ceil(piles[i] / (double)hourly);
        }
        return totalTime;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while(low <= high) {
            int mid = low + ((high - low) / 2);
            long long timeTaken = totalHoursTaken(piles, mid);

            if(timeTaken <= h){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};
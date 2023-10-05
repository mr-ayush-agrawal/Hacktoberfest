// Question Link- https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/ //

class Solution {

//function to find the total sum of array elements
int findSum(vector<int> &weights) {
    int n = weights.size();
    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += weights[i];
    }
    return totalSum;
}

int totalDaysPossible(vector<int> &weights, int capacity) {
    int n = weights.size();
    int totalDays = 1, totalLoad = 0;

    for(int i = 0; i < n; i++) {
        if(totalLoad + weights[i] > capacity) {
            totalDays = totalDays + 1;
            totalLoad = weights[i];
        } else {
            totalLoad += weights[i];
        }
    }
    return totalDays;
}

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = findSum(weights);

        while(low <= high) {
            int mid = low + ((high - low) / 2);
            int daysTaken = totalDaysPossible(weights, mid);

            if(daysTaken <= days) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};
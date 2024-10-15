// 1. When new element comes nums[i], make space for it (window size can't be greater than k)
// 2. Now, when nums[i] comes, there is no need to keep small elements in that window, pop them
// 3. Now push i in deque -> for nums[i]
// 4. If (i >= k-1), then deq.front() is our answer for that window

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
         // Edge case when array size is 0
        if (n == 0) {
            return {};
        }
        
        deque<int> deq; // Deque to store indices of useful elements in current window
        vector<int> res; // Vector to store result
        
        for (int i = 0; i < n; i++) {
            // Remove indices that are out of the current window
            while (!deq.empty() && deq.front() <= i - k) {
                deq.pop_front();
            }
            
            // Remove indices of elements smaller than the current element (arr[i])
            while (!deq.empty() && nums[i] >= nums[deq.back()]) {
                deq.pop_back();
            }
            
            // Add the current element index to the deque
            deq.push_back(i);
            
            // The deqmum element of the current window is at the front of the deque
            if (i >= k - 1) {
                res.push_back(nums[deq.front()]);
            }
        }
        
        return res;
    }
};









#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr, int n, int k) {

    deque<int> deq(k);
    deque<int> mini(k);

    //Addition of first k size window

    for(int i=0; i<k; i++) {

        while(!deq.empty() && arr[deq.back()] <= arr[i])
            deq.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        deq.push_back(i);
        mini.push_back(i);
    }
    int ans = 0;

    ans += arr[deq.front()] + arr[mini.front()];

    //remaining windows ko process karlo
    for(int i=k; i<n; i++) {

        

        //next window

        //removal
        while(!deq.empty() && i - deq.front() >=k) {
            deq.pop_front();
        }

        while(!mini.empty() && i - mini.front() >=k) {
            mini.pop_front();
        }

        //addition

        while(!deq.empty() && arr[deq.back()] <= arr[i])
            deq.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        deq.push_back(i);
        mini.push_back(i);    

        ans += arr[deq.front()] + arr[mini.front()];
    }
    return ans;
}

int main() {


    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;


    return 0;
}
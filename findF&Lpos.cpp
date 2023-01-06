#include <iostream>
using namespace std;


int search(int* nums, int target, bool findStartIndex) {
        int ans = -1;
        int start = 0;
        int end = 5;
        
        while(start <= end) {
            // find the middle element
//            int mid = (start + end) / 2; // might be possible that (start + end) exceeds the range of int in java
            int mid = start + (end - start) / 2;

            cout<< mid<< endl;
            if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                // potential ans found
                ans = mid;
                if (findStartIndex) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        return ans;
} 

int main() {
    int arr[6] = {7,7,8,8,8,10};
    int ans[2] = {-1, -1};
    int target = 7;

    // ans[0] = search(arr, target, true);
    ans[1] = search(arr, target, false);

    cout<< ans[0]<< endl;
    cout<< arr[1]<< endl;

    return 0;
}
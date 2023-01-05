#include <iostream>
using namespace std;

int main() {

    int nums[5] = {1,0,5,0,12};
    int l = 0;
    int n = 5;
    int temp;
    
    // if(nums[0] != 0){
    //     l++;
    // }

    for(int r =0; r <= n; r++){
        if(nums[r] != 0 ){
            temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
        }
    }

    for(int k = 0; k < n; k++){
        cout<< nums[k]<< endl;
    }
    

    return 0;
}
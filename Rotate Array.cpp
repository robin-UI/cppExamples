#include <iostream>
using namespace std;

int main() {

    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    
    for(int i = 0; i < k; i++){
        int temp = nums[n-1];
        for(int j = 7; j > 0; j--){
            nums[j-1] = nums[j-2];
        }
        nums[0] = temp;
    }

    for(int k = 0; k < n; k++){
        cout<< nums[k]<< endl;
    }
    

    return 0;
}
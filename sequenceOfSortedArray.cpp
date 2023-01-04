#include <iostream>
using namespace std;



// Driver Code
int main()
{
	int nums[5] = { -4,-1,0,3,10 };
    int l = 0;
    int r = 4;
    int p = 4;
    int newArr[5];

	// for (int i = 0; i <= 5 ; i++){
        
    // } 

    while(l <= r){
        if(nums[l] * nums[l] > nums[r] * nums[r]){
            newArr[p] = nums[l] * nums[l];
            p = p - 1;
            l = l - 1;
        }else {
            newArr[p] = nums[r] * nums[r];
            p = p - 1;
            r = r - 1;
        }
    }
    
    for(int j = 0; j < 5 ; j++){
        cout<< newArr[j] << endl;
    }

	return 0;
}

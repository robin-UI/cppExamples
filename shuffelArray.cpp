#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int nums[8] = {1,2,3,4,4,3,2,1};

    int res[n * 2];
    for (int i = 0; i < 2 * n; i++){
        if (i % 2 == 0)
        {
            res[i] = nums[i / 2];
        }
        else
        {
            res[i] = nums[n + i / 2];
        }
    }

    for (int j = 0; j < n*2 ; j++){
        cout<< res[j] << " ";
    }

    return 0;
}
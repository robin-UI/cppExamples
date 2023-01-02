#include <iostream>
using namespace std;

int main() {
    int isPrime = 11;
    int flag = 0;

    for (int i = 1; i <= isPrime; i++ ){

        if(isPrime % i == 0){
            flag = flag + 1;
        }
    }

    if(flag <= 2 ){
        cout<< "This is prime";
    }else {
        cout<< "Not Prime";
    }

    return 0;
}


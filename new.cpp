#include <iostream>

using namespace std;

int main(){
    
    // Bit Manipulation

    int a = 2; 
    int b = 4;

    //AND operation 2 = 010, 4 = 100  100 & 010 = 000 -> 0
    // int c = a & b;

    //OR operation 2 = 010, 4 = 100  100 | 010 = 110 -> 6
    // int c = a | b;

    //Inverce operator 4 = 100, ~100 = 011, Some random numbers
    // int c = ~4;

    //Left Shift operator << This is also use to mutliplaction
    // int c = a<<1;

    // Right Shift operator >> This is also use to dividing
    // int c = b>>1;

    // XOR Operator
    int c = a^b ;

    cout<< c <<endl;

    return 0;
}
#include <iostream>

using namespace std;

int getBit(int num, int mask){
    return ((num & (1 << mask)) != 0);
}

int setBit(int num, int pos){
    return(num | (1 << pos));
}

int clearBit(int num, int pos){
    int mask = ~(1 << pos);
    return (num & mask);
}

int updateBit(int num, int pos, int value){
    int mask = ~(1 << pos);
    num = num & mask;
    return (num | (value << pos));
}

int main()
{
    cout<<getBit(4, 1)<<endl;
    cout<<setBit(5, 1)<<endl;
    cout<<clearBit(5, 2)<<endl;
    cout<<updateBit(5, 1, 1)<<endl;

    return 0;
}
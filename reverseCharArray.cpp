#include<iostream>
using namespace::std;

int main(){
    char s[] = { 'J', 'O', 'U', 'R', 'N' }; 
    int l = 0;
    int e = s.size() - 1;

    char temp;
    while(l < e){
        temp = s[l];
        s[l] = s[e];
        s[e] = temp;
        l++;
        e--;
    } 

    return 0;
}


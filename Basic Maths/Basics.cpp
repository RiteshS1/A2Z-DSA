#include<iostream>
using namespace std;

void getdigits(int n){
    int count =0;
    while(n>0){
        n= n/10;
        count++;

    }
    cout<<count;
}

void getreverse(int n){
    int rev=0;
    while(n>0){
        int lastdigit = n%10;
        rev = rev*10 + lastdigit;
        n = n/10;
    }
    while(n<0){
        int lastdigit = n%10;
        rev = rev*10 + lastdigit;
        n = n/10;
    }
    cout<<rev;
}
int main(){
    int n;
    cin>>n;
    getdigits(n);
    return 0;
}
#include<iostream>
using namespace std;

void isArmstrong(int n){
    int sum=0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(sum==originaln){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
}

void isPrime(int n){
    bool flag = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime";
    }
}

void getsum(int n){
    int sum=0;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;
    }
    cout<<sum;
}
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
    getsum(n);
    isPrime(n);
    return 0;
}
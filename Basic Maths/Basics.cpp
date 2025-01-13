#include<iostream>
#include<vector>
using namespace std;

void sumOfDivisors(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    cout<<sum;
}

void getdivisors(int n){
    vector<int> divisors;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    for(int i=0;i<divisors.size();i++){
        cout<<divisors[i]<<" ";
    }

}

void isPalindrome(int n){
    int rev=0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        rev = rev*10 + lastdigit;
        n = n/10;
    }
    if(rev==originaln){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}

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
    // getsum(n);
    // isPrime(n);
    // isPalindrome(n);
    getdivisors(n);
    return 0;
}
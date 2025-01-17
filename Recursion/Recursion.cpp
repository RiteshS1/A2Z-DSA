#include<iostream>
#include <unordered_map>
using namespace std;

void printname( int count){
    if(count<0){
        return ;
    }
    cout<<"RS"<<endl;
    printname(--count);
}
void printusingBacktracking(int n){
    if(n==0){
        return;
    }
    
    printusingBacktracking(n-1);
    cout<<n<<endl;
}
int sumRecursion(int n){
    if(n==0){
        return 0;
    }
    return n+sumRecursion(n-1);
}

bool isPalindrome(string s, int start, int end){
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return isPalindrome(s, start+1, end-1);
}

//print fibonacci series
// int getFibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return getFibonacci(n-1)+getFibonacci(n-2);
// }

//------->using dp;)
unordered_map<int, int> memo;

int getFibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Check if the result is already in the cache
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    // Store the result in the cache
    memo[n] = getFibonacci(n - 1) + getFibonacci(n - 2);
    return memo[n];
}
int main()
{
    // printname(5);
    // printusingBacktracking(5);
    // cout<<sumRecursion(5);
    //cout<<isPalindrome("maduam", 0, 4);
    cout<<getFibonacci(6);
    return 0;
}
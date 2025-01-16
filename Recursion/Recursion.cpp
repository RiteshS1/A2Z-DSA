#include<iostream>
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

int main()
{
    // printname(5);
    // printusingBacktracking(5);
    cout<<sumRecursion(5);
    return 0;
}
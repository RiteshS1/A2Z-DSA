#include<iostream>
using namespace std;
void pattern1( int n ){
    /*
    ****
    ****
    ****
    */
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}
void pattern2( int n ){
    /*
    
    *
    **
    ***
    ****
    
    
    */
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cin>>n;
    pattern1(n);
    pattern2(n);

    return 0;
}
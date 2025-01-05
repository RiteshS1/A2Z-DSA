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
void pattern3(int n){
    /*
    1
    12
    123
    1234
    12345    
    */

   for(int i=0; i<n; i++){
       for(int j=0; j<i+1; j++){
           cout<<j+1;
       }
       cout<<endl;
   }
}
void pattern4( int n ){
    /*
    
    1
    22
    333
    4444
    55555
    
    
    */
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout<<i;
            
        }
        cout<<endl;
    }
  
}

void pattern5( int n ){
    /*
    
    *****
    ****
    ***
    **
    *
    
    
    */
    
    for(int i=n; i>=0; i--){
        for(int j=i; j>0; j--){
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
    pattern3(n);
    pattern4(n);
    pattern5(n);
    

    return 0;
}
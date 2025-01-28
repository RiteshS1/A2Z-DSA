#include<iostream>
#include <unordered_map>
#include <climits>
using namespace std;

void basics(){
    //create a hash table
    unordered_map<string, int> umap;
    //insert key value pair in hash table
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;
    //find the value of key
    cout<<umap["Practice"]<<endl;
    //find the size of hash table
    cout<<umap.size()<<endl;
    //check if key is present in hash table
    if(umap.find("GeeksforGeeks")==umap.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    //erase the key value pair
    umap.erase("Practice");
    //iterate over all key value pair
    cout<<umap.size()<<endl;
    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }
   

}

void countfrequency(){
    unordered_map<int, int> umap;
    int arr[] = {10, 34, 5, 10, 3, 5, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        umap[arr[i]]++;
    }
    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

void highestfrequency(){
    unordered_map<int, int> umap;
    int arr[] = {10, 34, 5, 10, 3, 5, 10,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        umap[arr[i]]++;
    }
    int max = 0;
    int res = -1;
    for(auto x:umap){
        if(max<x.second){
            max = x.second;
            res = x.first;
        }
    }
    cout<<max<<endl;
    cout<<res<<endl;

}
void lowestfrequency(){
    unordered_map<int, int> umap;
    int arr[] = {10, 34, 5, 10, 3, 5, 10,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        umap[arr[i]]++;
    }
    int min = INT_MAX;
    int res = -1;
    for(auto x:umap){
        if(min>x.second){
            min = x.second;
            res = x.first;
        }
    }
    cout<<min<<endl;
    cout<<res<<endl;

}

int main()
{
    //basics();
    //countfrequency();
    //highestfrequency();
    lowestfrequency();
    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
#include <unordered_map>
#include <climits>

using namespace std;
int main()
{
    // vector<int> v = {1, 1, 3, 3, 4,1,3,1,4};
    // int n = v.size();
    // unordered_map<int, int> m;
    // for(int i = 0; i < n; i++){
    //     m[v[i]]++;
    // }
    // for(auto i : m){
    //     cout << i.first << "--> " << i.second << endl;
    // }
    //ye jo order me ans de rha 4, 3, 1 koi consistent order nhi hai
   
   
   //two sum
    // vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int n = v.size();
    // int target = 10;
    // unordered_map<int, int> m;
    // for(int i = 0; i < n; i++){
    //     if(m.find(target - v[i]) != m.end()){
    //         cout << "Pair found at index " << m[target - v[i]] << " and " << i << endl;
    //     }
    //     m[v[i]] = i;
    // }
   
    //sort 0s,1s and 2s
    // vector<int> v = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    // int n = v.size();
    // int low = 0, mid = 0, high = n-1;
    // while(mid <= high){
    //     if(v[mid] == 0){
    //         swap(v[low], v[mid]);
    //         low++;
    //         mid++;   
    //     }
    //     else if(v[mid] == 1){
    //         mid++;
    //     }
    //     else{
    //         swap(v[mid], v[high]);
    //         high--;
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << " ";
    // }

    //kadanes algorithm
    // vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    // int n = v.size();
    // int maxSum = INT_MIN;
    // int sum = 0;
    // for(int i = 0; i < n; i++){
    //     sum = max(v[i], sum + v[i]);
    //     // if(sum < 0){
    //     //     sum = 0;
    //     // }
    //     maxSum = max(maxSum, sum);
    // }
    // cout << "Max sum is: " << maxSum << endl;
    
   
    return 0;
}

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


    //print all the subbarrays with loops
    // vector<int> v = {1, 2, 3, 4};
    // int n = v.size();
    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         for(int k = i; k <= j; k++){
    //             cout << v[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    //print sum of subarrays with prefix sum
    // vector<int> v = {1, 2, 3, 4};
    // int n = v.size(); //4
    // int prefix[n+1]; //5
    // prefix[0] = 0;
    // for(int i = 1; i <= n; i++){ //1 se 4
    //     prefix[i] = prefix[i-1] + v[i-1]; //prefix[1] =1, prefix[2] = 3, prefix[3] = 6, prefix[4] = 10
    // }
    // for(int i = 0; i < n; i++){ //0 se 3
    //     for(int j = i; j < n; j++){ 
    //         cout << prefix[j+1] - prefix[i] << " "; 
    //     }
    // }
    // cout << endl;

    //longest subbaray with sum k
    // vector<int> v = {10, 20, 30, 40, 50,60};
    // int k = 90;
    // int n = v.size();
    // unordered_map<int, int> m;
    // int sum = 0;
    // int maxLength = 0;
    // for(int i = 0; i < n; i++){
    //     sum += v[i];
    //     if(sum == k){
    //         maxLength = max(maxLength, i+1);
    //     }
    //     if(m.find(sum - k) != m.end()){
    //         maxLength = max(maxLength, i - m[sum - k]);
    //     }
    //     if(m.find(sum) == m.end()){
    //         m[sum] = i;
    //     }
    // }
    // cout << "Max length is: " << maxLength << endl;

    //longest subarray sum with two pointers
    vector<int> v = {1,1,2,1,1,1,3,1,2};
    // int k = 6;
    // int start =0;
    // int end =0;
    // int n = v.size();

    // int sum =v[0];
    // int maxLen =0;
    // //ab sbse phle to sum lenge and fir shrink move shrink move krte chlenge
    // while(end<n){
    //     if(start<=end && sum>k ){
    //         sum -= v[start];
    //         start++;
    //     }
    //     if(sum == k){
    //         maxLen = max(maxLen,end-start+1);
    //     }
    //     end++;
    //     if(end < n){
    //         sum += v[end];
    //     }

    // }
    // cout<<maxLen;

    int n = v.size();
    int cnt = 0; 
    int current; 

    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            current = v[i];
        }
        else if ( current== v[i]) cnt++;
        else cnt--;
    }
    int cnt1 = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == current) cnt1++;
    }
    if(cnt1 > (n / 2)){
        cout<<current;
    }


    return 0;
}

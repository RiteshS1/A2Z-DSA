#include<iostream>
#include<algorithm>
using namespace std;

void largestinArray(int arr[], int n)
{
    //brute force will be to actually sort the array and then return the last element
    //but that will take O(nlogn) time
    //we can do this in O(n) time
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest element in the array is: " << largest << endl;
}

void secondLargest(int arr[], int n)
{
    //brute force will be to actually sort the array and then return the second last element
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest)
        {
            if (secondLargest == -1 || arr[i] > secondLargest)
            {
                secondLargest = arr[i];
            }
        }
    }
    cout << "Second largest element in the array is: " << secondLargest << endl;
}

void checkSorted(int arr[], int n){
    bool sorted = true;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}

void reverseArray(int arr[], int n){
   int s=0, e= n-1;
   while(s<e){
    swap(arr[s++],arr[e--]);
   }
   for(int i = 0; i < n; i++){
       cout << arr[i] << " ";
   }
}

int main()
{
    int arr [] = { 10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    //largestinArray(arr, n);
    //secondLargest(arr, n);
    //checkSorted(arr, n);
    reverseArray(arr, n);
    

    return 0;
}
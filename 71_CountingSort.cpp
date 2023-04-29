// Let's take an array --{1,3,2,3,4,1,6,4,3}
//  take a count array which stores count of every element and its size will be equal to maximum element present in teh input array

// count array ={0,2,1,3,2,0,1}
// index         0 1 2 3 4 5 6

// Now to make the sorted array , position of every element depends on the position of previous element.
// position array ={0,2,3,6,8,8,9}
//                  0 1 2 3 4 5 6

// Let's take an answer array of size 9 because 9 is the last element in the position array.
// iteration in this loop will from the last index of input array
// Example 3-- index is 6 , so 3 will be placed on 5th index ,position array[3]=5
//         4-- index is 8 , so 4 will be placed on 7th index ,postion array[4]=7
//         6-- index is 9 , so 6 ------------------ 8th index, -----------[6]=8
//         1-- --------2  , so 1 ------------------ 1 index,   ------------[1]=1
//         4-- --------7  , so 4--------------------6 index, --------------[4]=6
//         3-----------5  , so 3 -------------------4 index , --------------[3]=4
//         2-----------3  , so 2 -------------------2 index , --------------[2]=2
//         3-----------4  , so 3 -------------------3 index, --------------[3]=3
//         1-----------1  , so 1--------------------0 index , -------------[1]=0

// ans array={1,1,2,3,3,3,4,4,6}
//            0 1 2 3 4 5 6 7 8


#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
void countsort(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    int count[maxi]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        count[i]+=count[i-1];
    }
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={1,3,2,3,4,1,6,4,3};
    countsort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

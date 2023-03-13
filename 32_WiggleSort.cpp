#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n=9;
   int arr[9]={10,12,15,6,9,8,3,4,11};
    for(int i=0;i<9;i++){
       if(i%2==0){
         if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
       }
       else {
         if(arr[i]<arr[i+1])swap(arr[i],arr[i+1]);
       }
    }
    for(int i=0;i<9;i++){
      cout<<arr[i]<<" ";
    }
}

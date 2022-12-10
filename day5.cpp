#include<bits/stdc++.h>
using namespace std;
    int chocolates(int n, vector<int> &arr) {
        int s=0;
        int e=n-1;
        int count=0;
        int ans;
       while(s<e){
           if(arr[s]>arr[e]){
               s++;
           }else{
               e--;
           }
       }
      
       return arr[e];
    }
#include<bits/stdc++.h>
int findPeakElement(vector<int> &arr) {
    // Write your code here


        for(int i=1;i<arr.size();i++){
        if(arr[i-1]<arr[i]&&arr[i+1]<arr[i])
        return arr[i];


    }
}

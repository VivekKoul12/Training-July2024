#include <bits/stdc++.h>
#include <algorithm>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	for(int i=0;i<arr2.size();i++){
		arr1.push_back(arr2[i]);
	}
	sort(arr1.begin(),arr1.end());
	for(int i=0;i<arr1.size();){
		if(arr1[i]==0){
			arr1.erase(arr1.begin()+i);
		}
		else
			break;
	}
	return arr1;
}

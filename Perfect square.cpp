
// bool isPerfectSquare(long long n) {
// 	for (long long i = 1; i * i <= n; i++) {
// 		if (i * i == n){
// 			return true;
// 		}
// 	}
// 	return false;
// }
#include<bits/stdc++.h>
 bool isPerfectSquare(long long n){
   if (n > 0) {
     long long x = sqrt(n);
     return (x * x) == n;
   }
 }

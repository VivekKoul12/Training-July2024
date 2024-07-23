#include <iostream>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}

long long arrange_people(int n, int r) {
    if(n > r)
        return -1;
    else
        return factorial(r) / factorial(r-n);
}

int main() {
    int n, r;
    cin >> n >> r;
    long long result = arrange_people(n, r);
    if(result == -1)
        cout << "Cannot adjust n people on r seats" << endl;
    else
        cout << result << endl;
    return 0;
}

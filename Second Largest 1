#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    vector<int> data(3);
    data[0]=a;
    data[1]=b;
    data[2]=c;
    int m=-1;
    for(int i=0;i<3;i++)
    {
        m=max(m,data[i]);
    }
    int ans=-1;
    for(int i=0;i<3;i++)
    {
        if(data[i]!=m)
        ans=max(ans,data[i]);
    }
    cout<<ans;
    return 0;
}

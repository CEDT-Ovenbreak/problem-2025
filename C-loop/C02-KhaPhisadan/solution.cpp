#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double minn=10000,maxn=0,avg=0;
    for(int i=0;i<n;i++){
        double a;
        cin>>a;
        minn=min(minn,a);
        maxn=max(maxn,a);
        avg+=a;
    }
    double ans = minn+maxn+(avg/double(n));
    cout<<ceil(ans);
}
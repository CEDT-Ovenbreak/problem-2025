#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> keep(n);
    double avg = 0;
    for(int i=0;i<n;i++){
        cin>>keep[i];
        avg+=double(keep[i]);
    }
    avg /= double(n);
    double maxx = 0;
    int where=0;
    for(int i=0;i<n;i++){
        double temp = abs(keep[i]-avg);
        if(temp>maxx){
            where = i;
            maxx = temp;
        }
    }
    cout<<keep[where];
}

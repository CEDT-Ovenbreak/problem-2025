#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int i=n-2;i>=0;i--) {
        if(arr[i] != arr[n-1]) {
            cout << arr[i];
            return 0;
        }
    }
}

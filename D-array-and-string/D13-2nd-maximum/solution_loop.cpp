#include <iostream>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    ll x;
    ll max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (x > max1)
            {
                max2 = max1;
                max1 = x;
            }
            else if (x < max1)
            {
                max2 = max(max2, x);
            }
        }
    }
    cout << max2;
}

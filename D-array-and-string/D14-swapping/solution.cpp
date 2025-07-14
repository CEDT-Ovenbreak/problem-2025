#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[5];
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
        bool flag = is_sorted(arr, arr + 5);
        for (int i = 0; i <= 3; i++)
        {
            int b[5];
            for(int i=0;i<5;i++) b[i] = arr[i];
            swap(b[i], b[i + 1]);
            flag = (flag || is_sorted(b,b+5));
        }
        cout << (flag ? "Yes\n" : "No\n");
    }
}
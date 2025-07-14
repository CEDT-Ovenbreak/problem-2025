#include <iostream>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        if (abs((int)s.length() - (int)t.length()) >= 2)
        {
            cout << "No" << endl;
            continue;
        }
        if (s.size() == t.size())
        {
            int cnt = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != t[i])
                    cnt++;
            }
            cout << (cnt <= 1 ? "Yes" : "No") << endl;
        }
        else
        {
            if (s.size() > t.size())
                swap(s, t);
            int cnt = 0;
            int j = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != t[j])
                {
                    cnt++;
                    j++;
                }
                j++;
            }
            cout << (cnt > 1 ? "No" : "Yes") << endl;
        }
    }
}
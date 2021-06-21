#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    int n, k, a[30] , ans =0;
    cin >> n >> k;
    bool b[1000] = {false};
    for (int i = 0; i < k; ++i)
    {
        cin >> a[i];
        b[a[i]] = true;
    }
    for (int i = 0; i < k; ++i)
    {
        cout << a[i];
        for (int j = 1; j < n; ++j)
        {
            ++ans;
            while (b[ans])
            {
                ++ans;
            }
            cout << " " << ans;
        }
        cout << endl;
    }
    return 0;
}
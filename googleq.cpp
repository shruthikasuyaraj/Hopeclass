#include <iostream>
#include <map>
#include <string>
using namespace std;

#define ll long long

int main()
{
    int n, zc = 0, pt = 0;
    map<int, int> omap;
    cin >> n;

    string s;
    for (int ctr = 1; ctr <= n; ctr++)
    {
        cin >> s;
        int flag = 0;

        for (char ch : s)
        {
            flag ^= (1 << (ch - 'a'));
        }

        if (flag == 0)
            zc++;
        else
        {
            pt++;
            omap[flag]++;
        }
    }

    ll count = 0;
    count += (1LL * zc * (zc - 1)) / 2;
    count += (1LL * zc * pt);

    for (int pow = 0; pow <= 25; pow++)
    {
        int ocnt = omap[1 << pow];
        count += (1LL * ocnt * (ocnt - 1)) / 2;
    }

    cout << count;
    return 0;
}


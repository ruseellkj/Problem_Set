#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0, ans =0;
    while (n != NULL)
    {
        // int i=0, ans;
        // taking out the single digit
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }
    cout << ans << endl;
}

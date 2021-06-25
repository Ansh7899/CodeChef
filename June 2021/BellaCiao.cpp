#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int D, d, P, Q, ans = 0, k = 1;
        cin >> D >> d >> P >> Q;
        // ans = (P * D) + (Q * (D - d));
        // if (d > 1)
        // {
        //     ans += (((D / d) - 1) * Q);
        // }
        ans = d * P;
        for (int i = d; i < D; i += d)
        {
            ans += ((P + (k * Q)) * ((D - i < d) ? (D - i) : d));
            k += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
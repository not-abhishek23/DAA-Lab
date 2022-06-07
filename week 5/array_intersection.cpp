#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m, n, total, k = 0, x;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    int b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + m);
    sort(b, b + n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                total = 0;
                for (x = 0; x < k; x++)
                    if (a[i] == c[x])
                        total++;
                if (total == 0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
}
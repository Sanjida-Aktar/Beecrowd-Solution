#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    int c=1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
        {
            break;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
         cout << "CASE# " << c++ << ":" << endl;
        for (int i = 0; i < q; i++)
        {
            int a;
            cin >> a;
            bool found = false;
           
            for (int j = 0; j < n; j++)
            {
                if (a == arr[j])
                {
                    found = true;
                    
                    cout << a << " found at " << j + 1 << endl;
                    break;
                }
            }
            if (found == false)
            {

                cout << a << " not found"<< endl;
            }
        }
    }
    return 0;
}
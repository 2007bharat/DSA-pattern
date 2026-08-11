#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b <= a; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int a = 0; a < t; a++)
    {
        cout << "Pattern Start" << endl;
        int n;
        cin >> n;
        print1(n);
        cout << endl;
    }
    return 0;
}
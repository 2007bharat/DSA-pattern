#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print1(n);
    return 0;
}
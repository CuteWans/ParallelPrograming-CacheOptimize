#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("750.in", "w", stdout);
    int n = 750;
    cout << n << endl;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= n; j ++) {
            double a = rand() / double(RAND_MAX);
            cout << a << ' ';
        }
    }
    for(int i = 1; i <= n; i ++) {
        double a = rand() / double(RAND_MAX);
        cout << a << ' ';
    }
}
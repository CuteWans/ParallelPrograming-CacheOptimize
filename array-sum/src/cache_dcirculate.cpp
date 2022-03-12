#include <bits/stdc++.h>
#include<sys/time.h>
using namespace std;

int a[8388609];
int n;

void f() {
    for(int j = n; j > 1; j /= 2)
        for(int i = 0; i < j / 2; i ++)
            a[i] = a[i << 1 | 1] + a[i << 1];
}

int main() {
    cin >> n;
    int T = 10;
    double ans = 0;
    while(T --) {
        struct timeval start;
        struct timeval end;
        for(int i = 0; i < n; i ++) 
            cin >> a[i];
        gettimeofday(&start, NULL); 
        f();
        gettimeofday(&end, NULL);
        double tmp = (double)(end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);
        ans += tmp;
    }
    cout << ans / 10 << endl;
}
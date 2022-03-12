#include <bits/stdc++.h>
#include<sys/time.h>
using namespace std;

int sum, a[8388609];
int n;

int main() {
    int T = 10;
    double ans = 0;
    while(T --) {
        struct timeval start;
        struct timeval end;
        cin >> n;
        for(int i = 0; i < n; i ++)
            cin >> a[i];
        sum = 0;
        gettimeofday(&start, NULL);
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        gettimeofday(&end, NULL);
        double tmp = (double)(end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);
        ans += tmp;
    }
    cout << ans / 10 << endl;
}
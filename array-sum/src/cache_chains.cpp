#include <bits/stdc++.h>
#include<sys/time.h>
using namespace std;

int a[8388609];
int n;

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
        int sum1 = 0, sum2 = 0, sum = 0;
        for (int i = 0; i < n; i += 2) {
            sum1 += a[i];
            sum2 += a[i + 1];
        }
        sum = sum1 + sum2;
        gettimeofday(&end, NULL);
        double tmp = (double)(end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);
        ans += tmp;
    }
    cout << ans / 10 << endl;
}
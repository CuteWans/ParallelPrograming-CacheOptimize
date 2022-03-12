#include <bits/stdc++.h>
#include<sys/time.h>
using namespace std;

double sum[4005], b[4005][4005], a[4005];
int n;

int main() {
    cin >> n;
    int T = 10;
    double ans = 0;
    while(T --) {
        struct timeval start;
        struct timeval end;
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < n; j ++)
                cin >> b[i][j];
        for(int i = 0; i < n; i ++) 
            cin >> a[i];
        gettimeofday(&start, NULL);
        for (int j = 0; j < n; j ++) {
            for(int i = 0; i < n; i ++)
                sum[i] += b[j][i] * a[j];
        }
        gettimeofday(&end, NULL);
        double tmp = (double)(end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);
        ans += tmp;
    }
    cout << ans / 10 << endl;
}
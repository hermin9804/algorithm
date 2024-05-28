#include <iostream>
#include <algorithm>
using namespace std;

long long arr[100005];
long long cnt, maxval, maxcnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cnt = 1;
	maxval = arr[0];
	maxcnt = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i-1]) {
			cnt += 1;
		} else {
			if (cnt > maxcnt) {
				maxcnt = cnt;
				maxval = arr[i-1];
			}
			cnt = 1;
		}
	}

    if (cnt > maxcnt) {
        maxcnt = cnt;
        maxval = arr[n-1];
    }
	cout << maxval;
}
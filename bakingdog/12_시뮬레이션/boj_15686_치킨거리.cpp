#include <iostream>
using namespace std;


// 시간제한 1초
// 시간 복잡도: O(n^4)
// 도시의 치킨 거리를 구하기 위한 연산횟수 100 * 13 
// 폐업시키지 않을 치킨집을 선택하는 경우의 수 최대 경우의 수 C(13, 13/2 = C(13, 6) = 1716

// C(n, k) = n! / (k! * (n-k)!)



struct Point {
	int x, y;
};

int city[51][51];
int n, m;

Point bbq[14];
int arr[14];
int isused[14];
int bbq_cnt;

int min_dist = 1000000;

void get_min_dist() {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int dist = 1000000;
			if (city[i][j] == 1) {
				for (int k = 0; k < m; k++) {
					int bbq_idx = arr[k];
					int bbq_x = bbq[bbq_idx].x;
					int bbq_y = bbq[bbq_idx].y;
					int temp = abs(i - bbq_x) + abs(j - bbq_y);
					if (temp < dist) dist = temp;
				}
				sum += dist;
			}
		}
	}
	min_dist = min(min_dist, sum);
}

void func(int k, int start) {
	if (k == m) {
		get_min_dist();
		return;
	}

	for (int i = start; i < bbq_cnt; i++) {
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = 1;
			func(k + 1, i + 1);
			isused[i] = 0;
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> city[i][j];
			if (city[i][j] == 2) {
				bbq[bbq_cnt].x = i;
				bbq[bbq_cnt].y = j;
				bbq_cnt++;
			}
		}
	}
	func(0, 0);
	cout << min_dist;
}
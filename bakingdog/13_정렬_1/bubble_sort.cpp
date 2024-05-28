#include <iostream>
using namespace std;

int n = 10;
int arr[1000001] = {15, 25, 22, 357, 16, 23, -53, 12, 46, 3};

void bubble_sort() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j ++) {
			if (arr[j] > arr[j + 1]) {
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  bubble_sort();
  for(int i = 0; i < n; i++) cout << arr[i] << ' ';  // -53 3 12 15 16 22 23 25 46 357
}
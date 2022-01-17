#include <bits/stdc++.h>
using namespace std;

const int mx = 1000005;
int dat[mx];
int pos = 0;

void push(int x){
	dat[pos++] = x;
}

void pop(int x) {
	pos--;
}

int top() {
	return (dat[pos - 1]);
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

}

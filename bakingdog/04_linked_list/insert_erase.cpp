#include <bits/stdc++.h>
using namespace std;

const int mx = 10000;
int dat[mx], pre[mx], nxt[mx];
int unused = 6;

void traverse() {
	int cur = nxt[0];
	while (cur != -1) {
		cout << dat[cur] << ' ';
		cur = nxt[cur];
	}

	cout << "\n\n";
}

void insert(int addr, int num) {
	dat[unused] = num;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];
	if (nxt[addr] != -1)
		pre[nxt[addr]] = unused;
	nxt[addr] = unused;
	unused++;
}

void erase(int addr) {
	dat[addr] = -1;
	nxt[pre[addr]] = nxt[addr];
	if (nxt[addr] != -1)
		pre[nxt[addr]] = pre[addr];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(pre, pre+mx, -1);
	fill(nxt, nxt+mx, -1);

	dat[0] = -1;
	pre[0] = -1;
	nxt[0] = 2;

	dat[2] = 13;
	pre[2] = 0;
	nxt[2] = 1;

	dat[1] = 65;
	pre[1] = 2;
	nxt[1] = 4;

	dat[4] = 21;
	pre[4] = 1;
	nxt[4] = 5;

	dat[5] = 17;
	pre[5] = 4;
	nxt[5] = -1;

	insert(1, 42);
	traverse();

	erase(6);
	traverse();
}

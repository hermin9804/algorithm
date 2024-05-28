#include <iostream>
#include <list>
using namespace std;

// int main(void) {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	list<int> L;
// 	L.push_back(1);
// 	L.push_back(2);
// 	list<int>:: iterator t = L.begin();

// 	L.push_front(10);
// 	cout << *t << '\n';
// 	L.push_back(5);
// 	L.insert(t, 6);
// 	t++;
// 	t = L.erase(t);
// 	cout << *t << '\n';
// 	for (auto i : L)
// 		cout << i << ' ';
// }

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);	

	list<int>L;
	L.push_back(1);
	L.push_back(2);
	list<int>::iterator t = L.begin();

	L.push_front(10);
	cout << *t << '\n';
	L.push_back(5);
	L.insert(t, 6);
	t++;
	t = L.erase(t);
	cout << *t << '\n';
	for (list<int>::iterator i = L.begin(); i != L.end(); i++)
		cout << *i << ' ';
}
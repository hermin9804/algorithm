#include <bits/stdc++.h>
using namespace std;

typedef struct s_tower {
	int height;
	int index;
} t_tower;

int N;
stack<t_tower> tower;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  t_tower first;
  first.height = 1000000001;
  first.index = 0;
  tower.push(first);

  cin >> N; 
  for (int i = 1; i <= N; i++) {
    t_tower cur;
    cin >> cur.height;
    cur.index = i;
    while (tower.top().height < cur.height)
      tower.pop();    
    cout << tower.top().index << " ";
    tower.push(cur);      
  }
}

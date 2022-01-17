#include <stack>
using namespace std;

typedef struct s_tower {
	int height;
	int max;
} t_tower;

int N, result;
stack<t_tower> tower;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  t_tower first;
  first.height = 0;
  first.max = 0;
  tower.push(first);

  cin >> N; 
  for (int i = 1; i <= N; i++) {
    t_tower cur;
    cin >> cur.height;
    cur.max = tower.top.max;
	if (cur.max > cur.hight)
		++result;
	else
		cur.max = cur.hight;
    tower.push(cur);      
  }
  cout << result;
}

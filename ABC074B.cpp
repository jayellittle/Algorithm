#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  
  int i, x;
  int sum = 0;
  for (i=0; i<N; i++) {
    cin >> x;
    if (x < abs(K-x)) sum += 2*x;
    else sum += 2*abs(K-x);
  }
  cout << sum << endl;
}

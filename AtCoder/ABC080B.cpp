#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int N, N_;
  cin >> N;
  N_ = N;
  
  int i;
  int val = 0;
  for (i=0; i<8; i++) {
    val += N % 10;
    N /= 10;
    if (N == 0) break;
  }
  
  if (N_ % val == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}

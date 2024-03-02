#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int i, A;
  int avg = 0;
  vector<int> score;
  for (i=0; i<N; i++) {
    cin >> A;
    score.push_back(A);
    avg += A;
  }
  avg /= N;
  
  for (i=0; i<N; i++) {
    cout << abs(score.at(i) - avg) << endl;
  }
}

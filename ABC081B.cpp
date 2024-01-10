#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  
  int i;
  int bb[N];
  for (i=0; i<N; i++) {
    cin >> bb[i];
  }
  
  int count = 0;
  while (true) {
    for (i=0; i<N; i++) {
      if (bb[i] % 2 == 0) {
        bb[i] /= 2;
      } else {
        cout << count << endl;
        return 0;
      }
    }
    count++;
  }
}

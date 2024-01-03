#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;
  
  stack<int> S;
  int i, num, count;
  int ans = 0;
  for (; A<=B; A++) {
    num = A;
    for (i=0; i<2; i++) {
      S.push(num % 10);
      num /= 10;
    }
    num /= 10;
    count = 0;
    for (i=0; i<2; i++) {
      if (num%10 == S.top()) {
        S.pop();
        num /= 10;
        count++;
      }
      if (count == 2) ans++;
    }
  }
  cout << ans << endl;
}

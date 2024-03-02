#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, op, B;
  cin >> A >> op >> B;
  
  if (op == "+") cout << stoi(A) + stoi(B) << endl;
  else if (op == "-") cout << stoi(A) - stoi(B) << endl;
}

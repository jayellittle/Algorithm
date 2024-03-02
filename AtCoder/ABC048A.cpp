#include <bits/stdc++.h>
using namespace std;

int main() {
  char full[100];
  cin.getline(full, 100);
  
  char front[] = "AtCoder";
  
  int sh;
  sh = sizeof(front);
  
  cout << 'A' << full[sh] << "C" << endl;
}

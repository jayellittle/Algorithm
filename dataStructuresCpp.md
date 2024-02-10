# Data Structures of C++


## Arrays
- Size is specified when it is declared, and unchangeable afterward
- Multidimensional array
<details>
<summary>Example</summary>

```cpp
#include <iostream>
using namespace std;

int main()
{
  char hello[5] = {'h', 'e', 'l', 'l', 'o'};
  cout << hello[4] << endl;  // Output : o

  char matrix[3][3] = {
    {'a', 'b', 'c'},
    {'d', 'e', 'f'},
    {'g', 'h', 'i'},
  };
  cout << matrix[1][1] << endl;  // Output : e

  return 0;
}
```

</details>


## Vectors
- Stores sequence of elements which are accessible by index
- **Size is changeable**
- `<vector>` library
  - `.push_back()` : add element to the end of the vector
  - `.pop_back()` : remove element from the end of the vector
  - `.size()` : return the size of the vector
  - `.empty()` : return whether the vector is empty

<details>
<summary>Example</summary> 

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <int> nums = {2, 0, 2, 4, 0};
  cout << nums[3] << endl;  // Output : 4

  nums.push_back(1);
  nums.push_back(0);
  nums.pop_back();

  int i;
  for (i=0; i<nums.size(); i++) {
    cout << nums[i] << " ";
  }  // Output : 2 0 2 4 0 1
  cout << endl;

  return 0;
}
```

</details>


## Stacks and Queues
- Stores data in specific orders

|         |Stacks                                |Queues                                      |
|---------|--------------------------------------|--------------------------------------------|
|Order    |**LIFO**(Last In, First Out)          |**FIFO**(First In, First Out)               |
|Library  |`<stack>`                             |`<queue>`                                   |
|Index    |`.top()`                              |`.front()`, `.back()`                       |
|`.push()`|add an element at the top of the stack|remove the element at the top of the stack  |
|`.pop()` |add an element at the end of the queue|remove the element at the front of the queue|

<details>
<summary>Example</summary>

```cpp
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
  stack<int> s1;
  s1.push(12);
  s1.push(24);
  s1.push(36);

  while(!s1.empty()) {
    cout << s1.top() << " ";
    s1.pop();
  }  // Output : 36 24 12
  cout << endl;

  queue<int> q1;
  q1.push(10);
  q1.push(20);
  q1.push(30);

  while(!q1.empty()) {
    cout << q1.front() << " ";
    q1.pop();
  }  // Output : 10 20 30
  cout << endl;

  return 0;
}
```

</details>


## Sets
- Contains collection of **unique** elements
- `<unordered_set>` or `<set>` library
  - `.insert()` : add an element to the set
  - `.erase()` : removes an element from the set
  - `.count()` : check whether an element exists in the set
  - `.size()` : return the size of the set

<details>
<summary>Example</summary>
 
```cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
  unordered_set<int> primes({2, 3, 5, 7});

  primes.insert(11);
  primes.insert(13);
  primes.insert(11);  // Ignored since it is a duplicate

  primes.erase(2);
  primes.erase(13);

  if (primes.count(2)) cout << "Contains 2" << endl; 
  else cout << "Does not contain 2" << endl;  // <- Output

  cout << "Size is " << primes.size() << endl;  // Output : Size is 4

  return 0;
}
```

</details>


## Hash Maps
- Collection of unique elements in the form of key-value pairs
- Each element is an object of type `pair`
  - `.first` : Value of the key
  - `.second` : Mapped value
- `<map>` or `<unordered_map>` library
  - `.insert()` : add an element to the map
  - `.erase()` : removes an element from the map
  - `.count()` : check whether an element exists in the map
  - `.size()` : return the size of the map
  - `[]` operator
    - If the specified key matches an element in the map → Access the mapped value associated with that key
    - If the specified key doesn't match any element in the map → Add a new element to the map with that key

<details>
<summary>Example</summary>

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  unordered_map<string, int> country_codes;

  country_codes.insert({"Thailand", 65});
  country_codes.insert({"Peru", 51});
  country_codes["Japan"] = 81;  // Add a new element
  country_codes["Thailand"] = 66;  // Access an element

  country_codes.erase("Peru");

  if (country_codes.count("Belgium")) cout << "Yes" << endl;
  else cout << "No" << endl;  // Output : No

  cout << country_codes["Japan"] << endl;  // Output : 81

  cout << country_codes.size() << endl;  // Output : 2

  for (auto it: country_codes) {
    cout << it.first << " " << it.second << endl;
  }
  // Output : Japan 81
  //          Thailand 66

  return 0;
}
```

</details>


## Sources
Codecademy (n.d.). *C++'s Built-In Data Structures*. [Link](https://www.codecademy.com/learn/c-plus-plus-for-programmers/modules/cpp-built-in-data-structures/cheatsheet)

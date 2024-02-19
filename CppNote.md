# Study Note for C++

## How to handle strings



## Convert string to int

### stoi() Function

```cpp
int stoi(string str, size_t position = 0, int base = 10);
```

#### Parameters

- str : String to be converted (compulsory)

- position : Starting position (optional, with value = 0)

- base : base of the number system (optional, with value = 10)

<details>
  <summary>Example</summary>
  
  ```cpp
  #include <iostream>
  #include <string>

  int main()
  {
    string s1 = "12";
    string s2 = "3.14";

    cout << stoi(s1) << endl;
    cout << stoi(s2) << endl;
  }
  ```

  ```
  12
  3
  ```
</details>


# PROGRAMMING-CODE-FILTER
* This project takes a C++ code and remove the comments and the blank lines.
* It just keeps the executable code.

### Example
* input
```cpp
// I am a single comment and you must remove me :((
/*
I am a block comment and you must remove me
*/

#include<iostream>
using namespace std;

int main() {

int a, b;
cin » a » b; // Reading two variables from user (please remove me!! :( )
cout « a + b « endl;

// End of the program (remove me please :))
return 0;

}
```

* output
```cpp
#include<iostream>
using namespace std;
int main() {
int a, b;
cin » a » b; 
cout « a + b « endl;
return 0;
}
```

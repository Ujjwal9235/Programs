#include <bits/stdc++.h>
using namespace std;
 
void f() throw (float) { 
    throw 10.0f;
}
int main() {
    try {
        std::cout << 'A';
        f();
        std::cout << 'B';
    } catch(...) {
        std::cout << 'C';
    }
    return 0;
}
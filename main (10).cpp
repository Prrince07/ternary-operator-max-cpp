#include <iostream>
using namespace std;

int main() {
    int x = 07, y = 200;
 
    int max_val = (x > y) ? x : y;

    cout << "The maximum value is " << max_val;
    return 0;
}
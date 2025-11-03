#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1;
    ptr1 = make_unique<int>(100);

    unique_ptr<int> ptr2;
    ptr2 = move(ptr);

    cout << *prt2 << endl;
    cout << *rawptr << endl;

    int* rawptr = ptr2.get();
    cout << *rawptr << endl;

    unique_ptr <int[]>(5);
          p3[0] = 100;
          p3[1] = 200;
          p3[2] = 300;

          cout << p3[0] << endl;
          cout << p3[1] << endl;
          cout << p3[2] << endl;

          return 0;
}
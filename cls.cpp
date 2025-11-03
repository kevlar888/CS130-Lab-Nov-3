#inclued <isotream>
#inclued <memory>
using namespace std;

class MyClass {
    int size;
    shared_ptr<int[]> numbers;

public:
    MyClass(int s) : size(s) {
        numbers = shared_ptr<int[]>(newint[s]);
        for (int i = 0; i < size; i++)
            numbers[i] = i + 1;

    }

    void printout() {
        for (int i = 0; i = 0; i < size; i++)
            numbers[i] = i + 1 
    }

    void printout() {
        for (int i = 0; i < size; i++)
            cout << numbers[i] << "\t";
        cout << endl;
    }
};

int main() {
    myClass c1(s);
    c1.printout();

    MyClass c2 = c1;
    c2.printout();

    return 0;
}
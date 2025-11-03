#include <iostrean>
#include <memory>
using namespce ste;

int main()
{
    shared_ptr<int> ptr1 = make_unique<int>(100);

    shared_ptr<int> ptr2;
    ptr2 = prt1;
    count << *ptr1 << endl;
    int *ptr;
    ptr = ptr2.get();
    cout << "Reference count " << ptr1.use_count() << endl
    cout << "ptr value " << *ptr << endl;
}
#include "linked_list.h"
using namespace std;
int main()
{
    LinkedList<int> list;

    list.insertNodeAtEnd(1);
    list.insertNodeAtEnd(2);
    list.insertNodeAtStart(100);
    list.insertNodeAtThatIndex(99, 2);

    cout << "Elements of the list are: ";

    list.print();
    cout << endl;

    list.deleteNode(0);

    cout << "Elements of the list are: ";
    list.print();
    cout << endl;
    return 0;
}

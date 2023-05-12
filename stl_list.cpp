#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    // Print the Elements
    for (int i:l)
    {
        cout <<i << " "<<endl;
    }
    // Front
    cout << "Front Element->" << l.front() << endl;
    // Back
    cout << "back Element->" << l.back() << endl;
    // empty() operation
    cout << "List is Empty or not-> " << l.empty() << endl;
    // erase operation of vector clears the size not the capacity
    cout << "size before erase: " << endl;
    cout << l.size() << endl;
    l.erase(l.begin());
    cout << "size after erase: " << endl;
    cout << l.size() << endl;
     // Print the Elements
     cout<<"Elements present in list are:"<<endl;
     for (int i:l)
    {
        cout <<i << " "<<endl;
    }

    return 0;
}
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // Print the Elements
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl;
    }
    //'at()' operation
    cout << "Element at index 1-> " << d.at(1) << endl;
    cout << "Element at index 0-> " << d.at(0) << endl;
    // Front
    cout << "Front Element->" << d.front() << endl;
    // Back
    cout << "back Element->" << d.back() << endl;
    // empty() operation
    cout << "Array is Empty or not-> " << d.empty() << endl;
    // erase operation of vector clears the size not the capacity
    cout << "size before erase: " << endl;
    cout << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "size after erase: " << endl;
    cout << d.size() << endl;
     // Print the Elements
     cout<<"Elements present in deque are:"<<endl;
    for (int i = 0; i < d.size(); i++)
    {

        cout << d[i] << endl;
    }

    return 0;
}
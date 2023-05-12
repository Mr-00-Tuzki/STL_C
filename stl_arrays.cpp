// STL-Standard Template Library in C++
//STL-ARRAY 
//All operations of array lib

#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[3] = {2, 5, 6};
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    // Operations in STL-array
    //'at()' operation
    cout << "Element at index 2-> " << a.at(2) << endl;
    cout << "Element at index 0-> " << a.at(0) << endl;
    // empty() operation
    cout << "Array is Empty or not-> " << a.empty()<<endl;
    // front() operation
    cout << "First Element-> " << a.front()<<endl;
    // back() operation
    cout << "Last Element-> " << a.back()<<endl;

    return 0;
}
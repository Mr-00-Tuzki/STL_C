// STL-VECTOR
// All operations of vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  // Size and Capacity
  cout << "Capacity->" << v.capacity() << endl;
  cout << "Size->" << v.size() << endl;
  v.push_back(1);
  cout << "Capacity->" << v.capacity() << endl;
  cout << "Size->" << v.size() << endl;
  v.push_back(2);
  cout << "Capacity->" << v.capacity() << endl;
  cout << "Size->" << v.size() << endl;
  v.push_back(3);
  cout << "Capacity->" << v.capacity() << endl;
  cout << "Size->" << v.size() << endl;
  cout << "Element at index 2->" << v.at(2) << endl;
  // Front
  cout << "Front Element->" << v.front() << endl;
  // Back
  cout << "back Element->" << v.back() << endl;
  // Pop_back
  cout << "Elements before pop_back: " << endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << endl;
  }
  v.pop_back();
  cout << "Elements after pop_back: " << endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << endl;
  }
  //clear operation of vector clears the size not the capacity
  cout << "size before clear: " << endl;
  cout << v.size() << endl;
  cout << "capacity before clear: " << endl;
  cout << v.capacity() << endl;
  v.clear();
  cout << "size after clear: " << endl;
  cout << v.size() << endl;
  cout << "capacity after clear: " << endl;
  cout << v.capacity() << endl;
  return 0;
}
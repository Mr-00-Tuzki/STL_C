#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Tushar");
    q.push("Kumar");
    q.push("Sahu");
    // Top Element
    cout << "first element->" << q.front() << endl;
    cout << "last element->" << q.back() << endl;
    // Size
    cout << "Size of Stack->" << q.size() << endl;
    // empty() operation
    cout << "Stack is Empty or not-> " << q.empty() << endl;
    //pop
    cout << "size before pop: " << endl;
    cout << q.size() << endl;
    q.pop();
    cout << "size after pop: " << endl;
    cout << q.size() << endl;

    return 0;
}
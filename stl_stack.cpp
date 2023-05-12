#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Tushar");
    s.push("Kumar");
    s.push("Sahu");
    // Top Element
    cout << "Top element->" << s.top() << endl;
    s.pop();
    cout << "Top element->" << s.top() << endl;
    // Size
    cout << "Size of Stack->" << s.size() << endl;
    // empty() operation
    cout << "Stack is Empty or not-> " << s.empty() << endl;

    return 0;
}
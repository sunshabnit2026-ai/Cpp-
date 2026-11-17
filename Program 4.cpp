#include <iostream>
using namespace std;
template <class T>
class Stack
{
 T arr[5];
 int top;
public:
 Stack()
 {
 top = -1;
 }
 void push(T value)
 {
 if (top == 4)
 {
 cout << "Stack is Full\n";
 }
 else
 {
 top++;
 arr[top] = value;
 }
 }
 void pop()
 {
 if (top == -1)
 {
 cout << "Stack is Empty\n";
 }
 else
 {
 cout << "Deleted: " << arr[top] << endl;
 top--; }
 }
 void display()
 {
 cout << "Stack: ";
 for (int i = top; i >= 0; i--)
 {
 cout << arr[i] << " ";
 }
 cout << endl;
 }
};
int main()
{
 Stack<int> s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.display();
 s.pop();
 s.display();
 return 0;
}
O/P:
Push 10

#include "stack.h"

using namespace std;

int main()
{
  class Stack s;
  s.push(1);
  s.push(2);
  s.push(3);

  cout << s.pop() << " Popped from stack\n";
}
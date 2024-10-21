#include <iostream>
#include <string>
#include <math.h>

using namespace std;

// Returns the sum of the first n natural numbers
int recursiveSum(int n)
{

  // Recursive function is finished
  if (n <= 1)
  {
    return n;
  }
  else
  {
    // Recursively sum each number
    return n + recursiveSum(n - 1);
  }
}

// Returns the sum of the first n even number squares
int evenSquares(int n)
{

  // Recursive function is finished
  if (n == 0)
  {
    return n;
  }
  else if (n % 2 == 0)
  {
    // Number is even, square the number and do n-1
    return n * n + evenSquares(n - 1);
  }
  else
  {
    // Number is odd, call the function again
    return evenSquares(n - 1);
  }
}

// Return the sum of the first n even number squares
int evenSquares2(int n)
{
  // Recursive function is finished
  if (n == 0)
  {
    return n;
  }
  else
  {
    // Number is even, square the number and do n-1
    return pow(n + n, 2) + evenSquares2(n - 1);
  }
}

// Return the fibonnaci sequence of the nth number
int fibNumber(int n)
{

  // Recursive function is finished
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return fibNumber(n - 1) + fibNumber(n - 2);
  }
}

// Return true if string s with the length l contains char c
bool linear(string s, char c, int l)
{

  // Do linear search from back to front
  if (l < 0)
  {
    return false;
    // If string index == char return true
  }
  else if (s[l] == c)
  {
    return true;
    // Repeat and decrement index
  }
  else
  {
    return linear(s, c, l - 1);
  }
}

int main()
{
  int sumOfNumbers = recursiveSum(3);
  int sumOfEvenSquares = evenSquares(5);
  int sumOfEvenSquares2 = evenSquares2(2);
  int nthFibNumber = fibNumber(9);
  string hello = "hello";
  char substring = 'e';
  bool containsString = linear(hello, substring, hello.length() - 1);

  cout << "Sum: " << sumOfNumbers << endl;
  cout << "Even squares: " << sumOfEvenSquares << endl;
  cout << "Even squares 2: " << sumOfEvenSquares2 << endl;
  cout << "Fibonnaci number: " << nthFibNumber << endl;
  cout << "Char is in string: " << boolalpha << containsString << endl;
}
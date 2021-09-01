#include <iostream>
using namespace std;

int factorial(int num)
{
  if (num == 0)
    return 1;
  return num * factorial(num - 1);
}

int main()
{
  int num;
  cout << "Enter a number and I will print it's factorial for you\nNumber: ";
  cin >> num;
  cout << "Factorial: " << factorial(num);
  return 1;
}
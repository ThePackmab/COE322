
#include <iostream>
#include <vector>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
// Problem 6.12 on the homework, if odd i+1 = i/2 and if even i+1 = 3i + 1;
// find and print the value that has the longest sequence



int collatzEQ(int n)
{
    vector<int> store;
    while (n != 1)
    {
        if (n&1)
        n = 3*n + 1;
        else
        n = n/2;
        store.push_back(n); // adds a new element at the end of a vector
    }
    int count = store.size();
    return count;
}

int main()
{
    int max = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if(max < collatzEQ(i))
        {
            max = collatzEQ(i);
            cout << "The next max sequence comes from the integer value; " << i << " with " << max << " iterations" << endl;
            
        }
    }
  return 0;
}


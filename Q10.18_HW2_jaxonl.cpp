

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

// 

void IndEvenSum(int arr[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i<n; i++)
    {
        if (i%2==0)
        even+=arr[i];
        else
        odd+=arr[i];
    }
    cout << "The sum of the even indicies is " << even << endl;
}

int main()
{
    std::vector<int> Elements = {1,2,3,4,5,6,7,8,9,10};
    
    int EvenSum = 0;
    int OddSum = 1;
    
    for (int i=0; i < Elements.size(); i++)
    {
        int EvenEle = Elements[i]%2;
        if(EvenEle == 0)
        {
            EvenSum+=Elements[i];
        }
        else
        {
            OddSum+=Elements[i];
        }
    }
    std::cout<< "The sum of the even elements is " << EvenSum << endl;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    IndEvenSum(arr,n);
    return 0;
}



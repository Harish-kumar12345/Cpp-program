#include <iostream>
#include <cmath>
using namespace std;
/********************To check the number is armstrong*******************/
int main()
{
    int sum = 0, num, rem;
    cout << "Enter the number " << endl;
    cin >> num;
    int origional = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + pow(rem, 3);
        num = num / 10;
    }
    if (origional == sum)
    {
        cout << "The number is  an Armstrong number" << endl;
    }
    else
    {
        cout << "The number is not Armstrong number" << endl;
    }
    return 0;
}
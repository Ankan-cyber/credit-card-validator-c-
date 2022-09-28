#include <iostream>
using namespace std;
bool isNumber(const string &s)
{
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}
int main()
{
    string ccNumber;
    int OddSum = 0, EvenSum = 0, FinalSum;
    cout << "This program uses the Luhn Algorigthm to validate a Credit Card number." << endl;
    cout << "Enter Your Credit Card Number(Without Space and dash): ";
    cin >> ccNumber;
    if (!isNumber(ccNumber))
    {
        cout << "Bad Input" << endl;
    }
    else
    {
        int len = ccNumber.length();
        for (int i = len - 1; i >= 0; i = i - 2) // OddSum
        {
            OddSum += (int(ccNumber[i]) - 48);
        }
        for (int i = len - 2; i >= 0; i = i - 2) // EvenSum
        {
            int d1 = ((int(ccNumber[i]) - 48) * 2);
            if (d1 > 9)
            {
                d1 = (d1 / 10) + (d1 % 10);
            }
            EvenSum += d1;
        }
        FinalSum = EvenSum + OddSum;
        cout << (FinalSum % 10 == 0 ? "Valid!" : "Invalid!") << endl;
    }
    return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int length(int n) 
{
    int l = 0;
    do 
    {
       l++;
       n /= 10;
    } while (n);
    return l;
}

void luckyticket(int n)
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = (n / 1000) % 10;
    e = (n / 10000) % 10;
    f = (n / 100000) % 10;
    if (a + b + c == e + d + f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

void ticket(int n)
{
    if (length(n) <= 5)
    {
       throw "Length of number <= 5";
    }
    else if (length(n) >= 7)
    {
        throw exception("Length of number >= 7");
    }
    luckyticket(n);
}

int main()
{
    int number;
    cout << "Enter numbers: ";
    cin >> number;
    try
    {
        ticket(number);
    }
    catch (const char* p)
    {
        cout << p << endl;
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }

}

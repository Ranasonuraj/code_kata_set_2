#include <iostream>
using namespace std;
int main()
    
{
    unsigned int n;
    unsigned long long factorial = 1;
    cin >> n;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    cout << factorial;

    return 0;
    
}


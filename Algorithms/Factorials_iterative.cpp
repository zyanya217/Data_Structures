#include <iostream>
#include <string>
using namespace std;

int factorial (int n)
{
    // 0 ! = 1 以此作為 sum 的起始值
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main() {
    int result = factorial(6);  // 6! = 720
    cout << "result = " << result << endl;
    return 0;
}

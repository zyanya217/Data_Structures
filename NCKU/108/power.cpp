#include <iostream>
using namespace std;

// 定義計算 x^n 的快速指數算法(或稱快速冪、平方求冪)
int myPow(int x, int n) {
    int result = 1;  // 初始化結果為 1

    // 不斷將底數 x 自乘，同時將指數 n 右移一位，直到 n 變為 0
    while (n > 0) {
        // 如果 n 的最低位為 1
        if (n % 2 == 1) {
            result *= x; // 將結果乘以當前的底數 x
        }
        x *= x;  // 將底數 x 自乘
        n /= 2; // 將指數 n 右移一位
    }

    // 返回計算結果
    return result;
}

int main() {
    
    int x, n;
    cout << "Enter the base and exponent (x^n): ";
    cin >> x >> n; // 接收使用者輸入的底數 x 和指數 n

    cout << x << "^" << n << " = " << myPow(x, n) << endl; // 計算並輸出結果

    return 0;
}

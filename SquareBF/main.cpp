#include <iostream>
#include <chrono>

using namespace std;

int square_normal(int n){
    return n*n;
}

int square_bf(int n){
    int k = 0;
    do{
        k++;
    }while(k != n*n);
    return k;
}

int main()
{
    int n, answer;
    cout << "Enter number : ";
    cin >> n;

    auto t1 = chrono::high_resolution_clock::now();
    answer = square_normal(n);
    auto t2 = chrono::high_resolution_clock::now();
    auto duration1 = chrono::duration_cast<chrono::milliseconds>(t2-t1).count();

    cout << "\nThe square number from " << n << " is " << answer << endl;
    cout << "And it takes " << duration1 << " miliseconds (with normal approach)" << endl;

    auto t3 = chrono::high_resolution_clock::now();
    answer = square_bf(n);
    auto t4 = chrono::high_resolution_clock::now();
    auto duration2 = chrono::duration_cast<chrono::milliseconds>(t4-t3).count();

    cout << "\nThe square number from " << n << " is " << answer << endl;
    cout << "And it takes " << duration2 << " miliseconds (with Brute Force approach)" << endl;

    return 0;
}

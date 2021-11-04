# Square_BF
When you can just calculate it, but instead use "dumb" Brute Force approach

## How top Open
1. The main program is in main.cpp
2. If you have codeblocks, you can open SquareBF.cbp
3. If you don't have any IDE, you can run .exe file in /bin/Debug

## Complexity
Square Normal = O(1)

Square Brute Force = O(n^2)

## Algorithm
With Normal Approach, just return the result

```C++
int square_normal(int n){
    return n*n;
}
```

With Brute Force Approach
```C++
int square_bf(int n){
    int k = 0;
    do{
        k++;
    }while(k != n*n);
    return k;
}
```

## Graph
![Graph](https://drive.google.com/uc?id=1UwYAuvPnerEqj8Za_LBD6VQAhoEuy72w)

Green = Brute Force

Purple = Normal



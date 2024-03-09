#include<stdio.h>
// 1.const修饰的常变量

// int main() 
// {
// //    const int a = 1;
// //     a = 1;
// //     printf("% d\n", a);

// const int n = 10;
// int arr[n] = {0};

// return 0;
// }


// 2.define定义的标识常量
// %d 打印数值；%s 打印字符串

// #define Max 100
// #define STR "abcdef"
// int main()
// {
//     printf("%d\n", Max);
//     int a = Max;
//     printf("%d\n", a);
//     printf("%s", STR);

//     return 0;
// }


//3.枚举常量(相当于是一个给定的集合，集合内每一个常量都有默认的值，从上往下依次为0，1，2...以此类推，所以printf打印出的常量任然为数值可用%d输出)
enum Color
{
    RED,
    GREEN,
    BULE
};

enum Sex
{
    MALE,
    FEMALE,
    SECRET
};

int main()
{
    int num = 10;
    enum Color c = BULE;
    enum Sex a = MALE;
    printf("%d\n", c);
    printf("%d", a);
}
#include <stdio.h>
#include <string.h>
//字符串
int main()
{
    //char 字符类型
    char ch = 'w';// 单字符用单引号

    //c语言没有字符串类型，只有字符类型char，所以要想存储字符串要用到数组
    char arr[] = "abcdef";//字符串用双引号   //arr为数组名称   //数组内会自动存储一个'\0'作为为结束标志
    char arr1[] = {'a','b','c','d','e','f'};//数组内单个字符存储不会存储'\0'这个结束标志，所以打印的时候会一直打印这个数组内的字符直到'\0'这个结束标志

    printf("%s\n", arr);
    printf("%s\n", arr1);

    //strlen求字符串长度的函数   头文件 string.h
    int len = strlen("arr");

    printf("%d\n",len);//arr数组长度为6
    printf("%d\n",strlen(arr1));//arr1数组长度为12，因为结束标志前除了有手动存储的6个字符还有未显示的6个字符

    return 0;
}
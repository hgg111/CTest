/*
题目描述
有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
输入
初始人数n
输出
最后一人的初始编号
样例输入
3
样例输出
2
*/
#include<stdio.h>

void findLast(int peoplenumber,int number[],int count,int newpeople) // findLast函数求出最后一个数,传入的参数为总人数，每次变化的数组，用来计数的count和剩余的人数。
{
    int i = 0;
    int newpeople1 = 0; //表示当前整数的个数

    newpeople1 = newpeople;
    for(i = 1;i <= peoplenumber;i++)
    {
        if(0 == number[i])
        {
            count++;
        }
        if(3 == count)       //每次第三个数标为1，剩余newn1--个数
        {
            number[i] = 1;
            count = 0;
            newpeople1--;
        }
    }
    if(newpeople > 1)
    {
        findLast(peoplenumber,number,count,newpeople1);  //如果剩余的数大于1，则继续循环
    }
}

int main45()
{
    int peoplenumber= 0;  // 总人数
    int i = 0;
    int count = 0;    // 用来检测是否到了第三个
    int number[100] = {0};

    scanf("%d",&peoplenumber);
    findLast(peoplenumber,number,count,peoplenumber);

    for(i = 1;i <= peoplenumber;i++)    //数组中标为0的数的坐标为剩余的最后一个数原来的序号
    {
        if(0 == number[i])
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}

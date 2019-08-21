/*
题目描述
有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？
”答案是5瓶，方法如下：先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，
这时候剩2个空瓶子。然后你让老板先借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满的还给老板。
如果小张手上有n个空汽水瓶，最多可以换多少瓶汽水喝？

输入
输入文件最多包含10组测试数据，每个数据占一行，仅包含一个正整数n（1<=n<=100），表示小张手上的空汽水瓶数。
n=0表示输入结束，你的程序不应当处理这一行。

输出
 对于每组测试数据，输出一行，表示最多可以喝的汽水瓶数。如果一瓶也喝不到，输出0。

样例输入
3
10
81
0
样例输出
1
5
40
*/
#include<stdio.h>

/***************************************************
函数名称：count
描述：判断所剩空瓶是否能换一瓶汽水
参数：所剩的空瓶number,已换汽水get_number
返回值：返回最多可以换得的汽水
***************************************************/

int count(int number,int get_number)
{
    if(number >= 3)
    {
        number = number - 3 + 1;
        get_number++;
        count(number,get_number);
    }
    else if(2 == number)
    {
        get_number++;
        return get_number;
    }
    else
    {
        return get_number;
    }

}

int main63()
{
    int number[11] = {0};
    int nownumber[11] = {0};
    int i = 0;
    int get_number = 0;

    for(i = 0;i < 10;i++)
    {
        scanf("%d",&number[i]);
        if(0 == number[i])
        {
            break;
        }
        else
        {
            nownumber[i] = count(number[i],get_number);
        }
    }

    for(i = 0;nownumber[i] != 0;i++)
    {
        printf("%d\n",nownumber[i]);
    }

    return 0;
}

/*
��Ŀ����
�ü�����ɸѡ����N���ڵ�������
����
N
���
2��N������
��������
100
�������
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/
#include<stdio.h>
int main22()
{
    int n = 0;
    int i = 0;
    int j = 0;
    scanf("%d",&n);
    for(i = 2;i <= n;i++)
    {
        for(j = 2;j < i;j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j == i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

/*
题目描述
现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。 编写一个函数input,用来输入一个学生的数据记录。
编写一个函数print,打印一个学生的数据记录。 在主函数调用这两个函数，读取N条记录输入，再按要求输出。 N<100
输入
学生数量N占一行 每个学生的学号、姓名、三科成绩占一行，空格分开。
输出
每个学生的学号、姓名、三科成绩占一行，逗号分开。
样例输入
2
a100 clang 70 80 90
b200 dotcpp 90 85 75
样例输出
a100,clang,70,80,90
b200,dotcpp,90,85,75
*/
#include<stdio.h>

typedef struct st_student
{
    char number[100];
    char name[100];
    int score1;
    int score2;
    int score3;
};              // 构建结构体

void input(struct st_student s[],int i)   // input函数用来读取输入的数据，传入的参数为结构体数组和表示个数的i
{
    scanf("%s%s",s[i].number,s[i].name);
    scanf("%d%d%d",&(s[i].score1),&(s[i].score2),&(s[i].score3));
}

void output(struct st_student s[],int i)  // output函数用来输出数据，传入的参数为结构体数组和表示个数的i
{
    printf("%s,%s,%d,%d,%d\n",s[i].number,s[i].name,s[i].score1,s[i].score2,s[i].score3);
}

int main48()
{
    int amount = 0;  // 学生总数
    int i = 0;
    struct st_student s[100];  // 定义一个结构体数组

    scanf("%d",&amount);
    for(i = 0;i < amount;i++)
    {
        input(s,i);
    }
    for(i = 0;i < amount;i++)
    {
        output(s,i);
    }

    return 0;
}

/*
��Ŀ����
������N��ѧ�������ݼ�¼��ÿ����¼����ѧ�š����������Ƴɼ��� ��дһ������input,��������һ��ѧ�������ݼ�¼��
��дһ������print,��ӡһ��ѧ�������ݼ�¼�� ��������������������������ȡN����¼���룬�ٰ�Ҫ������� N<100
����
ѧ������Nռһ�� ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У��ո�ֿ���
���
ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У����ŷֿ���
��������
2
a100 clang 70 80 90
b200 dotcpp 90 85 75
�������
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
};              // �����ṹ��

void input(struct st_student s[],int i)   // input����������ȡ��������ݣ�����Ĳ���Ϊ�ṹ������ͱ�ʾ������i
{
    scanf("%s%s",s[i].number,s[i].name);
    scanf("%d%d%d",&(s[i].score1),&(s[i].score2),&(s[i].score3));
}

void output(struct st_student s[],int i)  // output��������������ݣ�����Ĳ���Ϊ�ṹ������ͱ�ʾ������i
{
    printf("%s,%s,%d,%d,%d\n",s[i].number,s[i].name,s[i].score1,s[i].score2,s[i].score3);
}

int main48()
{
    int amount = 0;  // ѧ������
    int i = 0;
    struct st_student s[100];  // ����һ���ṹ������

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

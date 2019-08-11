/*
题目描述
有N个学生，每个学生的数据包括学号、姓名、3门课的成绩，从键盘输入N个学生的数据，要求打印出3门课的总平均成绩，以及最高分的学生的数据（包括学号、姓名、3门课成绩）
输入
学生数量N占一行每个学生的学号、姓名、三科成绩占一行，空格分开。
输出
各门课的平均成绩 最高分的学生的数据（包括学号、姓名、3门课成绩）
样例输入
2
1 blue 90 80 70
b clan 80 70 60
样例输出
85 75 65
1 blue 90 80 70
*/
 #include<stdio.h>

 typedef struct st_student
 {
     char number[100];
     char name[100];
     int score1;
     int score2;
     int score3;
 };

 int main()
 {
     int student = 0;
     int i = 0;
     int max = 0;
     int maxi = 0;
     int sum1 = 0;
     int sum2 = 0;
     int sum3 = 0;
     struct st_student data[100] = {0};

     scanf("%d",&student);
     for(i = 0;i < student;i++)
     {
         scanf("%s%s%d%d%d",data[i].number,data[i].name,&data[i].score1,&data[i].score2,&data[i].score3);
     }
     for(i = 0;i < student;i++)
     {
         sum1 = sum1 + data[i].score1;
         sum2 = sum2 + data[i].score2;
         sum3 = sum3 + data[i].score3;
         if(data[i].score1 > max)
         {
             max = data[i].score1;
             maxi = i;
         }
         if(data[i].score2 > max)
         {
             max = data[i].score2;
             maxi = i;
         }
         if(data[i].score3 > max)
         {
             max = data[i].score3;
             maxi = i;
         }
     }

     printf("%d %d %d\n",(sum1 / student),(sum2 / student),(sum3 / student));
     printf("%s %s %d %d %d\n",data[maxi].number,data[maxi].name,data[maxi].score1,data[maxi].score2,data[maxi].score3);

     return 0;
 }

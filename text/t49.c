/*
��Ŀ����
��N��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ����Ӽ�������N��ѧ�������ݣ�Ҫ���ӡ��3�ſε���ƽ���ɼ����Լ���߷ֵ�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���
����
ѧ������Nռһ��ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У��ո�ֿ���
���
���ſε�ƽ���ɼ� ��߷ֵ�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���
��������
2
1 blue 90 80 70
b clan 80 70 60
�������
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

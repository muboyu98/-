#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
typedef struct student     //����ṹ��
{
    char name[20];    //����
    char num[15];      //ѧ��
    char sex[10];     //�Ա�
    char from[20];    //����
    char political[10];    //������ò
    char phone[15];      //�ֻ���
    char QQ[15];         //QQ��
    char dorm[10];     //����
    struct student *next;  //�ṹ��ָ��
}stu;
stu *head;

void print()    //���˵�
{
    system("cls");
    printf("\n\n\n");
    printf("      �������������������������������\n");
    printf("      ***********************************************************\n");
    printf("      \t\t\t�༶ͨѶ¼����ϵͳ\n");
    printf("\n");
    printf("      \t\t1. ��������");
    printf("\t\t2. ��ʾ����\n");
    printf("      \t\t3. ��������");
    printf("\t\t4. ɾ������\n");
    printf("      \t\t5. �鿴����");
    printf("\t\t6. �޸�����\n");
    printf("      \t\t7. ��������");
    printf("\t\t8. �������˵�\n");
    printf("      ***********************************************************\n");
    printf("      ~~~~~��~~~~~~~~~~��~~~~~~~~~~��~~~~~~~~~~��~~~~~~~~~~9~~~~~\n");
    printf("      -----------------------------------------------------------\n\n");
}

void input(stu *p1)    //�����������
{
    printf("����:");
    scanf("%s",&p1->name);
    printf("ѧ��:");
    scanf("%s",&p1->num);
    printf("�Ա�:");
    scanf("%s",&p1->sex);
    printf("����:");
    scanf("%s",&p1->from);
    printf("������ò:");
    scanf("%s",&p1->political);
    printf("�ֻ���:");
    scanf("%s",&p1->phone);
    printf("QQ��:");
    scanf("%s",&p1->QQ);
    printf("����:");
    scanf("%s",&p1->dorm);
}


stu * inputdata()     //��������ĺ���
{
    stu *p1,*p2;
    int i=1;
    p1=(stu *)malloc(sizeof(stu));
    if(p1!=NULL)
    {
        head=p1;
        printf("\n\t\t\t�����������ݡ���\n");
        printf("------------------------------------------------------------------\n");
        printf("�����������롰ok�������������ݽ���\n");
        while(i)
        {
            printf("����:");
            scanf("%s",&p1->name);
            if(strcmp(p1->name,"ok")==0)
            {
                printf("\n�������!\n");
                printf("========================================================================\n");
                i=0;
                p2->next=NULL;
                free(p1);
                p1=p2;
            }
            else
            {
                printf("ѧ��:");
                scanf("%s",&p1->num);
                printf("�Ա�:");
                scanf("%s",&p1->sex);
                printf("����:");
                 scanf("%s",&p1->from);
                printf("������ò:");
                scanf("%s",&p1->political);
                printf("�ֻ���:");
                scanf("%s",&p1->phone);
                printf("QQ��:");
                scanf("%s",&p1->QQ);
                printf("����:");
                scanf("%s",&p1->dorm);
                printf("=====================================\n");
                p2=p1;
                p1=(stu *)malloc(sizeof(stu));
                if(p1!=NULL)
                {
                    p2->next=p1;
                }
            }
        }
        return(p1->next);
    }
}
void screen()  //������ʾҳ�� 
{
    int i;
    char s[251]={"��ӭʹ�ð༶ͨѶ¼����ϵͳ��\n\n\t\t\t��ϵͳ����ͨѶ¼����----���򣬴�ӡ\n\n\n\t\tWelcome to use produced by MbyAndZxx class address book\n\n\t\t management system,sorting,printing"};

    printf("\n================================================================================\n");
    printf("\n\n\n\t\t\t");
    for(i=0;s[i]!=NULL;i++)
    {
        Sleep(30);
        printf("%c",s[i]);
    }
    printf("\n\n\n\n\n\n\n\n\t\t ~ Hi~ o(*������*)��~ ~ ~ף����;���~ ~\n");
    printf("================================================================================\n");

}
int main()
{
    int i;
    system("color 4e");
    screen();
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
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

void insert()      //��������
{
    int i;
    char named[20];
    stu *p1,*p2,*p3;
    p1=head;
    p3=(stu *)malloc(sizeof(stu));
    p3->next=NULL;
    printf("\n\t\t\t����������ݡ���\n");
    printf("----------------------------------------------------------------------\n");
    printf("����������ߵ�����:\n");
    input(p3);
    printf("\n����ѡ��\n");
    printf("1.��λ�ò���\t2.βλ�ò���\t3.ǰ��\n");
    printf("���������ѡ��:");
    scanf("%d",&i);
    switch(i)
    {
    case 1:p3->next=p1;
        head=p3;
        break;
    case 2:while(p1->next!=NULL)
           {
               p2=p1;
               p1=p1->next;
           }
        p1->next=p3;
        break;
    case 3:printf("������������ǰ�壩:");
        scanf("%s",named);
        while(strcmp(named,p1->name)!=0)
        {
            p2=p1;
            p1=p1->next;
        }
        p2->next=p3;
        p3->next=p1;
        break;
    }
    printf("����ɹ�!\n");
    printf("======================================================================\n");
    return;
}
void deleted()          //ɾ������
{
    stu *p1,*p2;
    char Name[20];  //��Ҫɾ�����˵�����
    printf("\n\t\t\t����ɾ�����ݡ���\n");
    printf("----------------------------------------------------------------------\n");
    printf("������Ҫɾ��������:");
    scanf("%s",Name);
    p1=head;
    if(head==NULL)
    {
    printf("�ڴ�տ�����û��!\n");
    printf("======================================================================\n");
    return;
    }
    if(strcmp(Name,p1->name)==0)
    {
    head=p1->next;
    printf("ɾ���ɹ�!\n");
    printf("======================================================================\n");
    return;
    }
    while(p1!=NULL&&(strcmp(Name,p1->name)!=0))
    {
    p2=p1;
    p1=p1->next;
    }
    if(p1==NULL)
    {
    printf("���˲�����!\n");
    printf("======================================================================\n");
    return;
    }
    if(p1->next!=NULL)
    {
    p1=p1->next;
    p2->next=p1;
    printf("ɾ���ɹ�!\n");
    printf("======================================================================\n");
    return;
    }
    else
    {
    p2->next=NULL;
    printf("ɾ���ɹ�!\n");
    printf("======================================================================\n");
    return;
    }
}

void update(stu *p2)   //ͨ�����������޸�����
{
    char name[20];
    int b=0,i;
    printf("\n\t\t\t�����޸����ݡ���\n");
    printf("----------------------------------------------------------------------\n");
    printf("�����뽫Ҫ�޸��˵�����:");
    scanf("%s",name);
    while(p2!=NULL)
    {
        if(strcmp(name,p2->name)==0)
        {
            printf("��ͬѧ�Ļ�����Ϣ\n");
            printf("����:%s\n",p2->name);
            printf("ѧ��:%s\t",p2->num);
             printf("�Ա�:%s\t",p2->sex);
            printf("����:%s\t",p2->from);
            printf("������ò:%s\t",p2->political);
            printf("�ֻ���:%s\t",p2->phone);
            printf("QQ��:%s\t",p2->QQ);
            printf("����:%s\n",p2->dorm);
            printf("\n��ѡ��Ҫ�޸ĵ���Ϣ\n");
            printf("\t1.����\t2.ѧ��\t3.�Ա�\t4.����\n\t5.������ò\t6.�ֻ���\t7.QQ\t8.����\n");
            printf("\n����ѡ����(1~8):");
            scanf("%d",&i);
            printf("�������޸�֮�������\n");
            switch(i)
            {
            case 1:printf("����:");
                scanf("%s",&p2->name);
                break;
            case 2:printf("ѧ��:");
                scanf("%s",&p2->num);
                break;
            case 3:printf("�Ա�:");
                scanf("%s",&p2->sex);
                break;
            case 4:printf("����:");
                scanf("%s",&p2->from);
                break;
            case 5:printf("������ò:");
                scanf("%s",&p2->political);
                break;
            case 6:printf("�ֻ���:");
                scanf("%s",&p2->phone);
                break;
            case 7:printf("QQ:");
                scanf("%s",&p2->QQ);
                break;
            case 8:printf("����:");
                scanf("%d",&p2->dorm);
                break;
            }
            printf("\n�޸ĳɹ�!\n");
            printf("=========================================================================\n");
            b=1;
        }
        p2=p2->next;
    }
    if(b==0)
    {
        printf("û���ҵ����˵�����!\n");
    }
}
void find(stu *p2)        //ͨ���������Ҳ鿴���ݵĺ���
{
    char name[20];
    int b=0;
    printf("\n\t\t\t����鿴���ݡ���\n");
    printf("----------------------------------------------------------------------\n");
    printf("��������������˵�����:");
    scanf("%s",name);
    while(p2!=NULL)
    {
        if(strcmp(name,p2->name)==0)
        {
            printf("��Ҫ�ҵ�������\n");
            printf("����:%s\n",p2->name);
            printf("ѧ��:%s\t",p2->num);
            printf("�Ա�:%s\t",p2->sex);
            printf("����:%s\t",p2->from);
            printf("������ò:%s\t",p2->political);
            printf("�ֻ���:%s\t",p2->phone);
            printf("QQ��:%s\t",p2->QQ);
            printf("����:%s\n",p2->dorm);
            printf("======================================================================\n");
            b=1;
        }
        p2=p2->next;
    }
    if(b==0)
    {
        printf("\n��Ҫ���ҵ��˲�����!\n");
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
stu * lookdata(stu *p1)     //�鿴���ݵĺ���
{
    printf("\n\t\t\t������ʾ���ݡ���\n");
    printf("----------------------------------------------------------------------\n");
    while(p1!=NULL)
    {
        printf("����:%s\n",p1->name);
        printf("ѧ��:%s\t",p1->num);
        printf("�Ա�:%s\t",p1->sex);
        printf("����:%s\t",p1->from);
        printf("������ò:%s\t",p1->political);
        printf("�ֻ���:%s\t",p1->phone);
        printf("QQ��:%s\t",p1->QQ);
        printf("����:%s\n",p1->dorm);
        printf("======================================================================\n");
        p1=p1->next;
    }
    return p1;
}
int main()
{
    int i;
    system("color 4e");
    screen();
    Sleep(3000);
    print();
}

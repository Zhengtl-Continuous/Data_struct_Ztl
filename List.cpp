#include<iostream>
using namespace std;

typedef int ElemType;
typedef struct ListNode
{
	ElemType data;
	ListNode *prior;
	ListNode *next;
}DlinkNode;

// Creat a new Dlist by font;
void CreatListF(DlinkNode * &L,ElemType *a,int n)
{	
	DlinkNode *s;
	L=(DlinkNode *)malloc(sizeof (DlinkNode));
	L->prior=L->next=NULL;
	for(int i=0;i<n;++i)
	{
		s=(DlinkNode *) malloc(sizeof (DlinkNode));
		s->data=a[i];
		s->next=L->next;
		if(L->next != NULL)
		{
			L->next->prior=s;
		}

		L->next=s;
		s->prior=L;
		
	}
}

int main()
{
	cout<<"Hello World"<<endl;
	return 0;
}

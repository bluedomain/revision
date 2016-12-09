//Definitions of linked list used in Project 4
#ifndef LINKED_LIST
#define LINKED_LIST
#include "CDepartment.h"
using namespace std;

struct CSnode
{
	CStudentInfo data;
	CSnode* next;
};

struct CCnode
{
	CCourse data;
	CCnode* next;
};

struct CDnode
{
	CDepartment data;
	CDnode* next;
};

typedef CCnode* CCp;
typedef CSnode* CSp;
typedef CDnode* CDp;

void CC_tail_insert(CCp &head, const CCourse& obj);

void CS_tail_insert(CSp &head, const CStudentInfo& obj);

void CD_tail_insert(CDp &head, const CDepartment& obj);

#endif

#include "Linked_list.h"

void CC_tail_insert(CCp &head, const CCourse& obj)
{
	CCp temp = new CCnode;
	temp->data = obj;
	temp->next = NULL;
	if (!head)
	{
		head = temp;
		return;
	}
	else
	{
		CCp last = head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = temp;
	}
}

void CS_tail_insert(CSp &head, const CStudentInfo& obj)
{
	CSp temp = new CSnode;
	temp->data = obj;
	temp->next = NULL;
	if (!head)
	{
		head = temp;
		return;
	}
	else
	{
		CSp last = head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = temp;
	}
}

void CD_tail_insert(CDp &head, const CDepartment& obj)
{
	CDp temp = new CDnode;
	temp->data = obj;
	temp->next = NULL;
	if (!head)
	{
		head = temp;
		return;
	}
	else
	{
		CDp last = head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = temp;
	}
}
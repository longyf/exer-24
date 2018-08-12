#ifndef REVERSE_LIST_H
#define REVERSE_LIST_H
#include <iostream>
using namespace std;
ListNode *reverseListRecursion(ListNode *pPre, ListNode *pNode) {
	if (pNode == nullptr)
		return nullptr;
	else if (pNode->next == nullptr) {
		pNode->next = pPre;
		return pNode;
	}
	else {
		ListNode *pNext = pNode->next;
		pNode->next = pPre;
		return reverseListRecursion(pNode, pNext);
	}
}

ListNode *reverseList(ListNode *pHead) {
	ListNode *pPre = nullptr;
	return reverseListRecursion(pPre, pHead);
}
#endif

#ifndef list_node_h
#define list_node_h
struct ListNode {
	int value;
	ListNode *next;
	ListNode (int x = 0) : value(x), next(nullptr) {}
};
#endif

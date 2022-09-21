#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/*
* l1 ��ü�� �ʱ�ȭ �����ʾұ� ������ �Լ� ���ο��� ���� ȣ�� �Ұ�����
* ���� ������a�� ����Ͽ� �ּҰ��� ȣ���Ͽ� ����ϴ� ���� ����
* ȣ������ *(a)�� ���
*/

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* ll1 = l1;
    struct ListNode* ll2 = l2;
    struct ListNode* head = NULL;// ���
    struct ListNode** now = &head;  // ã�ƴٴϸ鼭 �� ���
    int val1, val2, carry = 0, sum;
    while (ll1 || ll2) {
        val1 = ll1 ? ll1->val : 0;  // ���� �����ִ°��� ������� �� ������
        val2 = ll2 ? ll2->val : 0;  // ���� �����ִ°��� ������� �� ������
        sum = val1 + val2 + carry;
        *now = malloc(sizeof(struct ListNode));
        (*now)->val = sum % 10; // ���� ��
        (*now)->next = NULL;
        carry = sum / 10;
        now = &((*now)->next);
        ll1 = ll1 ? ll1->next : NULL;
        ll2 = ll2 ? ll2->next : NULL;
    }
    if (carry) {
        *now = malloc(sizeof(struct ListNode));
        (*now)->val = carry;
        (*now)->next = NULL;
    }
    return head;
}
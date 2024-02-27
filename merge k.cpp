#include <vector>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    auto compare = [](ListNode* a, ListNode* b) {
        return a->val > b->val;
    };
    priority_queue<ListNode*, vector<ListNode*>, decltype(compare)> minHeap(compare);

    for (ListNode* list : lists) {
        if (list) {
            minHeap.push(list);
        }
    }

    ListNode dummy(0);
    ListNode* current = &dummy;

    while (!minHeap.empty()) {
        ListNode* node = minHeap.top();
        minHeap.pop();
        current->next = node;
        current = current->next;

        if (node->next) {
            minHeap.push(node->next);
        }
    }

    return dummy.next;
}


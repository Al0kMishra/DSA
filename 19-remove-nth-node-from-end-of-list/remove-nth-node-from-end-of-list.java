class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int size = 0;
        ListNode temp = head;
        while (temp != null) {
            size++;
            temp = temp.next;
        }
        if (size == n) {
            return head.next;
        }
        int indexToFind = size - n;
        ListNode prev = head;
        for (int i = 1; i < indexToFind; i++) {
            prev = prev.next;
        }
        prev.next = prev.next.next;
        return head;
    }
}

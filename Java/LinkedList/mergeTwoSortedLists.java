public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode result = new ListNode();
        ListNode t = result;
        while(list1 != null || list2 != null) {
            if (list1 != null) {
                if (list2 == null || (list1.val < list2.val)) {
                    t.next = list1;
                    list1 = list1.next;
                } else {
                    t.next = list2;
                    list2 = list2.next;
                }
            } else {
                t.next = list2;
                list2 = list2.next;
            }
            t = t.next;
        }
        return result.next;
    }

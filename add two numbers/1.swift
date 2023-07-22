// Add Two Numbers Leet Code

class Solution {
    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        var l1 = l1
        var l2 = l2
        var carry = 0
        let dummy = ListNode(0)
        var current = dummy
        while l1 != nil || l2 != nil {
            let sum = (l1?.val ?? 0) + (l2?.val ?? 0) + carry
            carry = sum / 10
            current.next = ListNode(sum % 10)
            current = current.next!
            l1 = l1?.next
            l2 = l2?.next
        }
        if carry > 0 {
            current.next = ListNode(carry)
        }
        return dummy.next
    }
}
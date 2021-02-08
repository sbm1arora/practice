class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def insert(self, head, data):
        if head == None:
            head = Node(data)
        else:
            head.next = self.insert(head.next, data)
        return head

    def display(self, head):
        while head:
            print(head.data)
            head = head.next


List = LinkedList()
head = None
k = input()
k = k.split()

for m in k:
    head = List.insert(head, k)

List.display(head)

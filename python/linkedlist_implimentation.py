
class Node:
    def __init__(self, value=0) -> None:
        self.val = value
        self.next = None


class LL:
    def __init__(self):
        self.head = None
        self.tail = None
        self.length = 0

    def addAtHead(self, value):
        node = Node(value)

        if self.head == None:
            self.head = node
            self.tail = node
            self.length += 1
            return

        node.next = self.head
        self.head = node
        self.length += 1

    def addAtTail(self, value):
        node = Node(value)

        if self.head == None:
            self.head = node
            self.tail = node
            self.length += 1
            return

        self.tail.next = node
        self.tail = node

        self.length += 1

    def addAtIndex(self, index, value):
        if index > self.length or index < 0:
            raise ValueError("Out of bound")

        if index == 0:
            self.addAtHead(value)
        elif index == self.length:
            self.addAtTail(value)
        else:
            node = Node(value)
            prev = self.head
            itr = self.head.next
            for i in range(1, self.length, 1):
                if i == index:
                    prev.next = node
                    node.next = itr
                    self.length += 1
                    return
                prev = itr

                itr = itr.next

    def print(self):
        itr = self.head

        while (itr != None):
            print(f"{itr.val} -> ", end='')
            itr = itr.next
        print()


def main():

    l = LL()
    l.addAtTail(3)
    l.addAtHead(10)
    l.addAtTail(43)
    l.addAtTail(334)
    l.addAtTail(3121)
    l.addAtTail(3)

    l.addAtIndex(2, 45)
    l.print()
    print(l.length)


main()

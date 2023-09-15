class node:
    def __init__(self,val):
        self.value=val
        self.prev=None
        self.next=None
class doubly:
    def __init__(self):
        self.head=node('head')
        self.prev=None
        self.next=None
    def add(self,val):
        temp=node(val)
        x=self.head
        while x.next is not None:
            x=x.next
        x.next=temp
        temp.prev=x
    def printt(self):
        x=self.head
        while x.next is not None:
            x=x.next
        while x is not self.head:
            print(x.value)
            x=x.prev
d=doubly()
d.add(1)
d.add(2)
d.add(3)
d.printt()


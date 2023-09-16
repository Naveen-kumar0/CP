class node:
    def __init__(self,value):
        self.value=value
        self.next=None
class Single:
    def __init__(self):
        self.head=node("head")
        self.size=0
    def add(self,val):
        temp=node(val)
        x=self.head
        while x.next is not None:
            x=x.next
        x.next=temp
    def add_f(self,val):
        temp=node(val)
        x=self.head.next
        self.head.next=temp
        temp.next=x
    def addAtpos(self,val,pos):
        temp=node(val)
        x=self.head
        i=1
        while i < pos:
            x=x.next
            i+=1
        temp.next=x.next
        x.next=temp
    
    def printt(self):
        x=self.head.next
        while x is not None:
            print(x.value)
            x=x.next
    def sort(self):
        x=self.head.next
        y=None
        while x is not None:
            y=x.next
            while y is not None:
                if y.value < x.value:
                    temp=x.value
                    x.value=y.value
                    y.value=temp
                y=y.next
            x=x.next
    def reverse(self):
        prev,cur,next=None,self.head.next,None
        while cur!=None:
            next=cur.next
            cur.next=prev
            prev=cur
            cur=next
        self.head.next=prev

s=Single()
s.add(1)
s.add(2)
s.add(3)
s.add_f(4)
s.addAtpos(5,4)
s.printt()
s.sort()
s.reverse()
s.printt()
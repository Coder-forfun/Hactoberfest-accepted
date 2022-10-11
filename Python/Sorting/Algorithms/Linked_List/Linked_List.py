class Node:
    def __init__(self, dataval=None):
        self.dataval = dataval
        self.nextval = None

class SLinkedList:
    def __init__(self):
        self.headval = None
    
    # Print the data in linked list
    def printList(self):
        printval = self.headval
        while printval is not None:
            print (printval.dataval)
            printval = printval.nextval
    
    # Enter Element to the beggining of list
    def AtBeginning (self, newdata):
        NewNode = Node(newdata)
        NewNode.nextval = self.headval
        self.headval = NewNode
    
    # Enter Element to the Last of the list
    def AtLast(self, newdata):
        NewNode = Node(newdata)
        temp = self.headval
        while temp.nextval is not None:
            temp = temp.nextval
        temp.nextval = NewNode
    
    # Enter Element to a particular index
    def AtIndex(self, newdata, n):
        NewNode = Node(newdata)
        temp,x = self.headval,0
        while x!=n:
            temp = temp.nextval
            x+=1
        temp2 = temp
        temp2 = temp2.nextval
        temp.nextval = NewNode
        NewNode.nextval = temp2

list = SLinkedList()
list.headval=Node("Monday")
e2 = Node("Tuesday")
e3 = Node("Wednesday")
list.headval.nextval = e2
e2.nextval = e3

list.AtBeginning("Sunday")
list.AtLast("Thrusday")
list.AtIndex("Saturday", 3-1)
list.printList()
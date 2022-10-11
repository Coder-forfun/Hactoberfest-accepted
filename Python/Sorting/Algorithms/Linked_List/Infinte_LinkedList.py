class Node:
    def __init__(self, dataval=None):
        self.dataval = dataval
        self.nextval = None

class SLinkedList:
    def __init__(self):
        self.headval = None
    
    def CreateList(self):
        data = int(input("Enter value of first node : "))
        list.headval=Node(data)
        temp = self.headval
        while True:
            text = input("Do you want to enter more data (y/n) : ")
            if text == 'y':
                data = int(input("Enter value of node : "))
                NewNode = Node(data)
                temp.nextval = NewNode
                temp = temp.nextval
            else:
                break
        
    def printList(self):
        temp = self.headval
        while temp is not None:
            print(temp.dataval,end="\t")
            temp = temp.nextval

list = SLinkedList()
list.CreateList()
list.printList()
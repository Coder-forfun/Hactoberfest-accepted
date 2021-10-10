class node:
    def __init__(self,data):
        self.data=data
        self.link=None
class stack:
    def __init__(self):
        self.start=None
    def push(self,value):
        newnode=node(value)
        if(self.start==None):#if the stack is empty
            self.start=newnode
        else:
            temp=self.start
            while(temp.link!=None):
                temp=temp.link
            temp.link=newnode
            
    def pop(self):
        
        if(self.start==None):
            print("List is empty")
            
        elif(self.start.link==None):
            self.start=None
            
        else:
            temp=self.start
            while(temp.link.link!=None):
                temp=temp.link
            temp.link=None
            
   
    def display(self):
        if (self.start==None):
            print("list is empty")
        else:
            temp=self.start
            while(temp!=None):
                print(temp.data, end = " ")
                temp=temp.link
                
s=stack()
print("Initially: ", end=" ")
s.display()
print()
print(" After pushing 10, Stack: ", end=" ")
s.push(10)
s.display()

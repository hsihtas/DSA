class node:
    def __init__(self,data):
        self.value = data
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None
    
    def insert(self,value):
        nnode = node(value)
        if self.root == None:
            self.root = nnode
            return True
        temp = self.root
        while True:
            if temp.value == value:
                return False
            if temp.value>value:
                if temp.left is None:
                    temp.left = nnode
                    return True
                temp = temp.left
            else:
                if temp.right is None:
                    temp.right = nnode
                    return True
                temp = temp.right
            
    def contain(self,value):
        temp = self.root
        while temp:
            if temp.value == value:
                return False
            if temp.value>value:
                temp = temp.left
            else:
                temp = temp.right
        return False

bst = BST()

bst.insert(6)
bst.insert(9)
bst.insert(7)
bst.insert(3)
bst.insert(5)

print(bst.contain(4))
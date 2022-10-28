





# Node class
class Node:

	# constructor to create a new node
	def __init__(self, data):
		self.data = data
		self.next = None

# function to insert node at the
# middle of linked list given the head
def insertAtMid(head, x):

	if(head == None): #if the list is empty
		head = Node(x)
	else:
		
		# create a new node for the value
		# to be inserted
		newNode = Node(x)

		ptr = head
		length = 0
		
		# calculate the length of the linked
		# list
		while(ptr != None):
			ptr = ptr.next
			length += 1

		# 'count' the number of node after which
		# the new node has to be inserted
		if(length % 2 == 0):
			count = length / 2
		else:
			(length + 1) / 2

		ptr = head

		# move ptr to the node after which
		# the new node has to inserted
		while(count > 1):
			count -= 1
			ptr = ptr.next

		# insert the 'newNode' and adjust
		# links accordingly
		newNode.next = ptr.next
		ptr.next = newNode

# function to display the linked list
def display(head):
	temp = head
	while(temp != None):
		print(str(temp.data), end = " ")
		temp = temp.next

# Driver Code

# Creating the linked list 1.2.4.5
head = Node(1)
head.next = Node(2)
head.next.next = Node(4)
head.next.next.next = Node(5)

print("Linked list before insertion: ", end = "")
display(head)

# inserting 3 in the middle of the linked list.
x = 3
insertAtMid(head, x)

print("
Linked list after insertion: " , end = "")
display(head)



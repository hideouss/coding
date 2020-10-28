#stack implemnt not involve pointer

#memory eat less because of it not use pointers
#it is not dynamic   it not grow and shrink depends on needs at runtime

#import maxsize module from maxsize
#used to return -infinite when stack is empty
from sys import maxsize

#function to create a stack it initila stack size as 0
def createStack():
  stack = []
  return stack

#stack is empty when stack size is 0
def isEmpty(stack):
  return len(stack) == 0

#function to add an item to stack it increase size by 1
def push(stack, item):
  stack.append(item)
  print(item + "pushed to stack")

#function to pop an item from stack it decrease size by 1
def pop(stack):
  if (isEmpty(stack)):
    return str(-maxsize - 1) #return minus infinite
  return stack.pop()
#function to return top element from stack without pop it
def peek(stack):
  if (isEmpty(stack)):
    return str(-maxsize - 1) #return minus infinite
  return stack[len(stack) - 1]

stack = createStack()
push(stack, str(10))
push(stack, str(20))
push(stack, str(30))
print(pop(stack) + "popped from stack")








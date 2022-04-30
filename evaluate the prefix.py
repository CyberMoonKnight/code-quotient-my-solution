# class CQStack:
#     def push(self,j) // Adds an element to top of queue    
#     def pop(self) // Removes and returns the top element
#     def isEmpty(self) // returns true if the stack is empty
#     def isFull(self) // returns true if the stack is full
# Stack class already defined as per the above blueprint
# Return the answer after evaluating the prefix expression
def evalPrefix(stack, exp):
  # Write your code here
  for i in exp[::-1]:
    if i.isdigit():
      stack.push(int(i));
    else:
      val1=stack.pop();
      val2=stack.pop();
      if i == '+':
        stack.push(val1+val2);
      elif i == '-':
        stack.push(val1-val2);
      elif i == '*':
        stack.push(val1*val2);
      elif i=='/':
        stack.push(val1/val2);
      elif i=='^':
      	stack.push(pow(val1,val2));
  return int(stack.pop());

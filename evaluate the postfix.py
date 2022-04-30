# Stack has already defined functions push(j),pop(),isEmpty(),isFull()
def evalPostfix(stack,exp):
  stack = CQStack()
  for i in exp:
        if i.isdigit(): 
            stack.push(i) 
        else: 
            val1 = stack.pop() 
            val2 = stack.pop()
            if i=='^':
              i = "**"
            stack.push(str(int(eval(val2 + i + val1))))
  return int(stack.pop())

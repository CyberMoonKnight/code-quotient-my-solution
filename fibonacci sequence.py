#print the first nterms of the Fibonacci sequence
def fibo(i):
  if i<=1:
    return i
  else:
    return fibo(i-2)+fibo(i-1)
for i in range(int(input())):
  print(fibo(i))

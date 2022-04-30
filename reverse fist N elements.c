int top=-1;
int Stack[SIZE];
void push(int item) {
  if(top>=SIZE-1) {
    return;
  }
  top++;
  Stack[top] = item;
}
int pop() {
  if(top == -1) {
    return -1;
  }
  int item = Stack[top];
  top--;
  return item;
}
void reverseKelementsQueue (int arr[], int K)
{
  int len = rear+1-K;
  int a[len];
  for(int i=0; i<K; i++) {
    int item = dequeue();
    push(item);
  }
  for(int i=0; i<K; i++) {
    int item = pop();
    enqueue(item);
  }
  for(int i=0; i<len; i++) {
    a[i] = dequeue();
    enqueue(a[i]);
  }
}

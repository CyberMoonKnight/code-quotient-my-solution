void swap(int *x, int *y){
   int temp = *x;
   *x = *y;
   *y = temp;
}
void moveElements(int arr[], int n){
   for (int i=0; i<n; i++){
       if (arr[i] >= 0){
           for (int j=i; j>0; j--){
               if (arr[j-1] < 0)
                   swap(&arr[j], &arr[j-1]);
               else
               break;
           }
       }
   }
}

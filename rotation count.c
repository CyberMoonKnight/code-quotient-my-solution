int rotationCount(int arr[], int n){
   int min_index = 0;
   for (int i=0; i<n; i++){
       if (arr[i] < arr[min_index])
           min_index = i;
   }
   return min_index;
}

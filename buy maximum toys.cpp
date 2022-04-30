int maxToys(int cost[], int n, int X) {
	// Write your code here
    int remainingAmount = X;
   int count = 0;
   sort(cost, cost + n);
   for(int i=0; i<n; i++){
       if (remainingAmount < cost[i])
           break;
       remainingAmount -= cost[i];
       count++;
   }
   return count;
}

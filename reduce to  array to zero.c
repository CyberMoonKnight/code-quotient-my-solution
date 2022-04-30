int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int* reduceArray(int n, int lengths[], int *result_size) {
 int res=n;
    qsort(lengths, n, sizeof(int), cmpfunc);
    for(int i=0; i<n; i++)
    {	
        printf("%d", res);
      	printf("\n");
        int count = 1;
        while (i+1 < n && lengths[i] == lengths[i+1])
        {
            count++;
            i++;
        }
        res -= count;
    }
}

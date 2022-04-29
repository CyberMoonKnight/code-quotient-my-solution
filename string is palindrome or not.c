// Return 1 if the string is palindrome, else return 0
int isPalindrome(char *str)
{
	int n = strlen(str);
    char str1[n+1];
    // reverse the given string
    for (int i = 0; i < n; i++)
        str1[i] = str[n-1-i];
    	str1[n] = '\0';
  	if (strcmp(str, str1) == 0)
      return 1;
   else
     return 0;
}

int isAnagram(char *str1, char* str2){
	// Write your code here
  	if (strlen(str1) != strlen(str2))
        return 0;
    int count[256] = { 0 };
    int i;
    for (i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (i = 0; i < 256; i++)
        if (count[i])
            return 0;
    return 1;
}

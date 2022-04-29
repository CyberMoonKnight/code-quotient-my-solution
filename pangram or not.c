/*     
 * Complete the 'isPangrams' function below.
 * @params
 *  str -> a string that is to be tested for pangram
 *
 * @return
 *  boolean value, based on the fact, whether 
 *  the given string is a pangram or not.
 */
bool isPangram(char* str) {
  // Write your code here
  int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
            count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

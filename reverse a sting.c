/*
int Stack[SIZE], top = -1;
int isFull();
int isEmpty();
int push(int item);
int pop();
Above global variables and functions are available to you for use, So just complete the below function as per specifications. */
char* reverseString(char *s)
{
  int len = strlen(s);
    char tmp = s[ len - 1 ];
    if( len > 1 )
    {
        for( int i = len - 1; i > 0; i-- )
        {
            s[ i ] = s[ i - 1 ];
        }
        s[ 0 ] = tmp;
        reverseString( s + 1 );
    }
    return s;
}

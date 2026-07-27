bool check(char *s, int i, int j)
{
    while(i < j)
    {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(char* s)
{
    int i = 0;
    int j = strlen(s) - 1;

    while(i < j)
    {
        if(s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return check(s, i + 1, j) || check(s, i, j - 1);
        }
    }

    return true;
}
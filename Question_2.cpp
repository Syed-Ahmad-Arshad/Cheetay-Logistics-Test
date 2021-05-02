int activityselection(int s[], int f[], int n)
{
    int i, j;
    i = 0;
    int count = 1;
    for (j = 1; j < n; j++)
    {
        if (s[j] >= f[i])
        {
            count++;
            i = j;
        }
    }
    return count;
}

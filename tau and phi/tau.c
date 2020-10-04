int tau(int n)
{
    int x = 1, count = 0;
    
    while(x <= n)
    {
        if(!(n%x))
        {
            count++;
        }
        x++;
    }
    return count;
}
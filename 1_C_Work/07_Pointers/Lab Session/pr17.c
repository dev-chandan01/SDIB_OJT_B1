int main()
{
    int i;
    char ch[] = {'x','y','z'};
    char *ptr, *str;
    ptr = ch;
    str = ch;
    i = (*ptr-- + ++*str)-10;
    printf("%d",i);   
}
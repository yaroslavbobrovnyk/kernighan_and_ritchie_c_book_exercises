#define EOF -1

main()
{
    int nl, space, tab, c;

    nl = 0;
    space = 0;
    tab = 0;

    printf("%d\n", nl);

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            nl++;
        }
        if (c == ' ')
        {
            space++;
        }
        if (c == '\t')
        {
            tab++;
        }
    }
    printf("nl = %d\n", nl);
    printf("space = %d\n", space);
    printf("tab = %d\n", tab);
}
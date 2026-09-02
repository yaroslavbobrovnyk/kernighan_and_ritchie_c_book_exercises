#define EOF -1
#define YES 1
#define NO 0

main()
{
    int c, inword, space_c;
    c = space_c = 0;

    while ((c = getchar()) != EOF)
    {
        inword = YES;
        if (c == ' ' || c == '\t' || c == '\n')
        {
            inword = NO;
            if (space_c >= 1)
            {
                space_c++;
            }
            if (space_c < 1)
            {
                putchar('\n');
                space_c++;
            }
        }
        if (inword == YES)
        {
            putchar(c);

            space_c = 0;
        }
    }
}
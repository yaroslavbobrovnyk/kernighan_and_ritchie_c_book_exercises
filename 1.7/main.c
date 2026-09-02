#define EOF -1

main()
{
    int c, space_c;
    space_c = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            space_c = 0;
        }
        if (c == ' ')
        {
            if (space_c >= 1)
            {
                space_c++;
            }
            if (space_c < 1)
            {
                putchar(c);
                space_c++;
            }
        }
    }
}
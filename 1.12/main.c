# define YES 1
# define NO 0
# define EOF -1

main() {
    int c, nl, nw, nc, inword;
    int gistograma[10];
    nl = nw = nc = 0;
    inword = NO;

    for (int i = 0; i < 10; ++i) {
        gistograma[i] = 0;
    }
    while ((c = getchar(c)) != EOF) {
        if ( c == ' ' || c == '\n' || c == '\t') {
            inword = NO;
            ++gistograma[nc -1];
            nc = 0;
        }
        else if (((c >= 'a' && c <= 'z') || (c>='A' && c<='Z')) && inword == NO) {
            ++nc;
            inword = YES;
        } else {
            ++nc;
            inword = YES;
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (gistograma[i] != 0) {
            printf("Words with length %d = %d\n", i + 1, gistograma[i]);
        }
    }
}
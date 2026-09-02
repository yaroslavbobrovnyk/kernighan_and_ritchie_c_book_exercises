# define YES 1
# define NO 0
# define EOF -1

main() {
    int c, nl, nw, nc, inword;
    nl = nw = nc = 0;
    inword = NO;
    while ((c = getchar(c)) != EOF) {
        ++nc;
        if (c == '\n'){
            ++nl;
        }
        if ( c == ' ' || c == '\n' || c == '\t') {
            inword = NO;
        }
        else if (((c >= 'a' && c <= 'z') || (c>='A' && c<='Z')) && inword == NO) {
            ++nw;
            inword = YES;
        } else {
            inword = YES;
        }
    }
    printf("Lines:%d Words:%d Chars:%d\n", nl, nw, nc);
}
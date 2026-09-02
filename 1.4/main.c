// f = C * 1.8 + 32

main() {
    int  lower, upper, step;
    float fahr, cels;
    lower = 0;
    upper = 100;
    step = 10;
    cels = lower;
    printf("Cels Fahr\n");

    while(cels<=upper){
        fahr = (cels * 1.8) + 32;
        printf("%.1f %.1f\n", cels, fahr);
        cels = cels + step;
    }

}
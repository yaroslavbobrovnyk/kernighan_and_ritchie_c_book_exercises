#define lower 0
#define upper 300
#define step 20

main()
{
    int fahr;
    for (fahr = upper; fahr >= lower; fahr = fahr - step)
    {
        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}

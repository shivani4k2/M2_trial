int date(int a, int b, int c)
{
    int res;
    int k[] = {0,3,2,5,0,3,5,1,4,6,2,4};
    c -= b < 3;
    res=(c + c / 4 - c / 100 + c / 400+ k[b - 1] + a) % 7;
    return res;
}
char* getmpe(int tot)
{
    char* name;
    switch (tot) {
    case(0):
        name="january";
        break;
    case(1):
        name="february";
        break;
    case(2):
        name="march";
        break;
    case(3):
        name="april";
        break;
    case(4):
        name="may";
        break;
    case(5):
        name="june";
        break;
    case(6):
        name="july";
        break;
    case(7):
        name="august";
        break;
    case(8):
        name="september";
        break;
    case(9):
        name="october";
        break;
    case(10):
        name="november";
        break;
    case(11):
        name="december";
        break;
    }
    return name;
}
int dayscal(int m, int n)
{
    switch(m){
        case(0):
            return(31);
            break;
        case(1):
            if (n % 400 == 0|| (n % 4 == 0&& n % 100 != 0))
                return (29);
            else
                return (28);
            break;
        case(2):
            return(31);
            break;
        case(3):
            return(30);
            break;
        case(4):
            return(31);
            break;
        case(5):
            return(30);
            break;
        case(6):
            return(31);
            break;
        case(7):
            return(31);
            break;
        case(8):
            return(30);
            break;
        case(9):
            return(31);
            break;
        case(10):
            return(30);
            break;
        case(11):
            return(31);
            break;
    }
}
void calp(int in)
{
    printf("Calendar - %d\n\n", in);
    int num;
    int pre = date(1, 1, in);
    for (int c = 0;c<12;c++) {
        num = dayscal(c, in);
        printf("\n ------------%s-------------\n",getmpe(c));
        printf(" sun   mon  tue  wed  thu  fri  sat\n");
        int l;
        for (l = 0; l < pre; l++)
            printf("     ");
  
        for (int e = 1;e<= num;e++) {
            printf("%5d", e);
            if (++l > 6) {
                l = 0;
                printf("\n");
            }
        }
        if (l)
            printf("\n");
  
        pre = l;
    }
    return;
}
int main()
{
    int z;
    printf("Enter the year");
    scanf("%d",&z);
    calp(z);
    return 0;
}
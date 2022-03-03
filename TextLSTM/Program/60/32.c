int IsPrime (int a) {
    int x, i;
    x = sqrt (a);
    assert (a > 1);
    for (i = 2; i <= x; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int n, i, primea, primeb, flag = 0;
    int isprimeflag1, isprimeflag2;
    int exist = 0;
    scanf ("%d", &n);
    for (i = 3; i <= n; i += 2) {
        if (flag == 1) {
            primeb = i;
            if (IsPrime (primeb)) {
                exist = 1;
                printf ("%d %d\n", i - 2, primeb);
            }
            else
                flag = 0;
        }
        else {
            primea = i;
            primeb = i + 2;
            if (primeb > n)
                break;
            i += 2;
            isprimeflag1 = IsPrime (primea);
            isprimeflag2 = IsPrime (primeb);
            if (isprimeflag1 && isprimeflag2) {
                exist = 1;
                printf ("%d %d\n", primea, primeb);
                flag = 1;
            }
            else if (isprimeflag2) {
                flag = 1;
            }
        }
    }
    if (!exist)
        printf ("empty\n");
    return 0;
}


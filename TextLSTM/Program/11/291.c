main () {
    int Y, M, D;
    scanf ("%d %d %d", &Y, &M, &D);
    if (Y % 400 == 0 && Y % 4000 != 0) {
        if (M == 1)
            printf ("%d", D);
        if (M == 2)
            printf ("%d", D +31);
        if (M == 3)
            printf ("%d", D +60);
        if (M == 4)
            printf ("%d", D +91);
        if (M == 5)
            printf ("%d", D +121);
        if (M == 6)
            printf ("%d", D +151);
        if (M == 7)
            printf ("%d", D +182);
        if (M == 8)
            printf ("%d", D +213);
        if (M == 9)
            printf ("%d", D +244);
        if (M == 10)
            printf ("%d", D +274);
        if (M == 11)
            printf ("%d", D +305);
        if (M == 12)
            printf ("%d", D +335);
    }
    else if (Y % 4 == 0 && Y % 100 != 0) {
        if (M == 1)
            printf ("%d", D);
        if (M == 2)
            printf ("%d", D +31);
        if (M == 3)
            printf ("%d", D +60);
        if (M == 4)
            printf ("%d", D +91);
        if (M == 5)
            printf ("%d", D +121);
        if (M == 6)
            printf ("%d", D +151);
        if (M == 7)
            printf ("%d", D +182);
        if (M == 8)
            printf ("%d", D +213);
        if (M == 9)
            printf ("%d", D +244);
        if (M == 10)
            printf ("%d", D +274);
        if (M == 11)
            printf ("%d", D +305);
        if (M == 12)
            printf ("%d", D +335);
    }
    else {
        if (M == 1)
            printf ("%d", D);
        if (M == 2)
            printf ("%d", D +31);
        if (M == 3)
            printf ("%d", D +59);
        if (M == 4)
            printf ("%d", D +90);
        if (M == 5)
            printf ("%d", D +120);
        if (M == 6)
            printf ("%d", D +150);
        if (M == 7)
            printf ("%d", D +181);
        if (M == 8)
            printf ("%d", D +212);
        if (M == 9)
            printf ("%d", D +243);
        if (M == 10)
            printf ("%d", D +273);
        if (M == 11)
            printf ("%d", D +304);
        if (M == 12)
            printf ("%d", D +334);
    }
}


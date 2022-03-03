void main () {
    int f (int, int);
    int n, i, y, m1, m2, M1, M2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d%d", &y, &m1, &m2);
        M1 = f (y, m1);
        M2 = f (y, m2);
        if ((M1 -M2) % 7 == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
}

int f (int year, int month) {
    int re;
    if ((year % 4) != 0 || (year % 100 == 0 && year % 400 != 0)) {
        switch (month) {
        case 1 :
            re = 1;
            break;
        case 2 :
            re = 32;
            break;
        case 3 :
            re = 60;
            break;
        case 4 :
            re = 91;
            break;
        case 5 :
            re = 121;
            break;
        case 6 :
            re = 152;
            break;
        case 7 :
            re = 182;
            break;
        case 8 :
            re = 213;
            break;
        case 9 :
            re = 244;
            break;
        case 10 :
            re = 274;
            break;
        case 11 :
            re = 305;
            break;
        case 12 :
            re = 335;
            break;
        default :
            break;
        };
    }
    else
        switch (month) {
        case 1 :
            re = 1;
            break;
        case 2 :
            re = 32;
            break;
        case 3 :
            re = 61;
            break;
        case 4 :
            re = 92;
            break;
        case 5 :
            re = 122;
            break;
        case 6 :
            re = 153;
            break;
        case 7 :
            re = 183;
            break;
        case 8 :
            re = 214;
            break;
        case 9 :
            re = 245;
            break;
        case 10 :
            re = 275;
            break;
        case 11 :
            re = 306;
            break;
        case 12 :
            re = 336;
            break;
        default :
            break;
        };
    return re;
}


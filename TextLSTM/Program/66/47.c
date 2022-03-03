int main () {
    int nian, yue, ri, i, j = 0;
    scanf ("%d%d%d", &nian, &yue, &ri);
    nian = nian % 2800;
    for (i = 1; i < nian; i++) {
        if (i % 400 == 0 || i % 100 != 0 && i % 4 == 0) {
            j += 366 % 7;
        }
        else {
            j += 365 % 7;
        }
    }
    for (i = 1; i < yue; i++) {
        if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10)) {
            j += 31;
        }
        else {
            if ((i == 2) && (nian % 4 == 0)) {
                j += 29;
            }
            else {
                if (i == 2) {
                    j += 28;
                }
                else {
                    j += 30;
                }
            }
        }
    }
    j += ri;
    j %= 7;
    if (j == 0) {
        printf ("Sun.");
    }
    else {
        if (j == 1) {
            printf ("Mon.");
        }
        else {
            if (j == 2) {
                printf ("Tue.");
            }
            else {
                if (j == 3) {
                    printf ("Wen.");
                }
                else {
                    if (j == 4) {
                        printf ("Thu.");
                    }
                    else {
                        if (j == 5) {
                            printf ("Fri.");
                        }
                        else {
                            printf ("Sat.");
                        }
                    }
                }
            }
        }
    }
    return 0;
}


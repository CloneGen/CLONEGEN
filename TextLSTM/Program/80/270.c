void main () {
    int sy, sm, sd, ey, em, ed, d;
    scanf ("%d%d%d", &sy, &sm, &sd);
    scanf ("%d%d%d", &ey, &em, &ed);
    d = 0;
    for (;;) {
        if (sy == ey && sm == em && sd == ed) {
            break;
        }
        if (sm == 1 || sm == 3 || sm == 5 || sm == 7 || sm == 8 || sm == 10 || sm == 12) {
            if (sm == 12 && sd == 31) {
                sy++;
                sm = 1;
                sd = 1;
                d++;
                continue;
            }
            if (sd == 31) {
                sm++;
                sd = 1;
                d++;
                continue;
            }
            else {
                sd++;
                d++;
                continue;
            }
        }
        if (sm == 4 || sm == 6 || sm == 9 || sm == 11) {
            if (sd == 30) {
                sm++;
                sd = 1;
                d++;
                continue;
            }
            else {
                sd++;
                d++;
                continue;
            }
        }
        if (sm == 2) {
            if ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0)) {
                if (sd == 29) {
                    sm++;
                    sd = 1;
                    d++;
                    continue;
                }
                else {
                    sd++;
                    d++;
                    continue;
                }
            }
            else {
                if (sd == 28) {
                    sm++;
                    sd = 1;
                    d++;
                    continue;
                }
                else {
                    sd++;
                    d++;
                    continue;
                }
            }
        }
    }
    printf ("%d", d);
}


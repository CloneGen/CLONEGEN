typedef struct  num {
    int x;
    struct  num *nxt;
}
num;
num *pHeader;

void Create () {
    pHeader = (num *) malloc (sizeof (num));
    pHeader->nxt = NULL;
}

void Store (num *p, int x) {
    num *p1;
    p1 = (num *) malloc (sizeof (num));
    p1->nxt = p->nxt;
    p1->x = x;
    p->nxt = p1;
}

int main () {
    char c1 [200], c2 [200];
    int i, x1, x2, n, s = 0;
    Create ();
    scanf ("%s", c1);
    scanf ("%s", c2);
    for (i = 0; c1[i] != '\0'; i++)
        x1 = i;
    for (i = 0; c2[i] != '\0'; i++)
        x2 = i;
    if ((c1[0] != '-' && c2[0] != '-') || (c1[0] == '-' && c2[0] == '-')) {
        if (c1[0] == '-' && c2[0] == '-') {
            for (i = 0; i < x1; i++)
                c1[i] = c1[i + 1];
            for (i = 0; i < x2; i++)
                c2[i] = c2[i + 1];
            x1--;
            x2--;
            printf ("-");
        }
        n = (x1 > x2);
        if (n == 0) {
            if (x1 == x2) {
                for (i = 0; i < x1; i++) {
                    s += c1[x1 - i] - '0' + c2[x2 - i] - '0';
                    Store (pHeader, s % 10);
                    s = s / 10;
                }
                c2[0] = c2[0] + (c1[0] - '0') + s;
                Store (pHeader, (int) (c2[0] - '0'));
            }
            else {
                for (i = 0; i <= x1; i++) {
                    s += c1[x1 - i] - '0' + c2[x2 - i] - '0';
                    Store (pHeader, s % 10);
                    s = s / 10;
                }
                c2[x2 - x1 - 1] = c2[x2 - x1 - 1] + s;
                s = 0;
                for (i = (x2 - x1 - 1); i > 0; i--) {
                    s += c2[i] - '0';
                    Store (pHeader, s % 10);
                    s = s / 10;
                }
                c2[0] += s;
                Store (pHeader, c2[0] - '0');
            }
        }
        else {
            for (i = 0; i <= x2; i++) {
                s += c1[x1 - i] - '0' + c2[x2 - i] - '0';
                Store (pHeader, s % 10);
                s = s / 10;
            }
            c1[x1 - x2 - 1] = c1[x1 - x2 - 1] + s;
            s = 0;
            for (i = (x1 - x2 - 1); i > 0; i--) {
                s += c1[i] - '0';
                Store (pHeader, s % 10);
                s = s / 10;
            }
            c1[0] += s;
            Store (pHeader, c1[0] - '0');
        }
    }
    else if (c1[0] == '-' || c2[0] == '-') {
        if (c1[0] == '-') {
            for (i = 0; i < x1; i++)
                c1[i] = c1[i + 1];
            x1--;
            n = 1;
        }
        if (c2[0] == '-') {
            for (i = 0; i < x2; i++)
                c2[i] = c2[i + 1];
            x2--;
            n = 2;
        }
        if (x1 < x2) {
            for (i = 0; i <= x1; i++) {
                s = c2[x2 - i] - '0' - (c1[x1 - i] - '0');
                if (s < 0) {
                    s += 10;
                    c2[x2 - 1 - i]--;
                }
                Store (pHeader, s);
            }
            s = 0;
            for (i = (x2 - x1 - 1); i > 0; i--) {
                s += c2[i];
                if (s < 0) {
                    s += 10;
                    c2[i - 1]--;
                }
                Store (pHeader, s);
            }
            Store (pHeader, c2[0] - '0');
            if (n == 2)
                printf ("-");
        }
        if (x1 > x2) {
            for (i = 0; i <= x2; i++) {
                s = c1[x1 - i] - '0' - (c2[x2 - i] - '0');
                if (s < 0) {
                    s += 10;
                    c1[x1 - 1 - i]--;
                }
                Store (pHeader, s);
            }
            s = 0;
            for (i = (x1 - x2 - 1); i > 0; i--) {
                s += c1[i];
                if (s < 0) {
                    s += 10;
                    c1[i - 1]--;
                }
                Store (pHeader, s);
            }
            Store (pHeader, c1[0] - '0');
            if (n == 1)
                printf ("-");
        }
        if (x1 == x2) {
            for (i = 0; i < x2; i++) {
                s = c1[x1 - i] - '0' - (c2[x2 - i] - '0');
                if (s < 0) {
                    s += 10;
                    c1[x1 - 1 - i]--;
                }
                Store (pHeader, s);
            }
            s = c1[0] - '0' - (c2[0] - '0');
            if (s < 0) {
                s = -s;
                Store (pHeader, s);
                if (n == 2)
                    printf ("-");
            }
            if (s > 0) {
                Store (pHeader, s);
                if (n == 1)
                    printf ("-");
            }
        }
    }
    num *p0;
    p0 = pHeader->nxt;
    while (p0->x == 0 && p0 != NULL) {
        if (p0->nxt == NULL) {
            printf ("%d", p0->x);
            p0 = p0->nxt;
            break;
        }
        p0 = p0->nxt;
    }
    while (p0 != NULL) {
        printf ("%d", p0->x);
        p0 = p0->nxt;
    }
    while (pHeader != NULL) {
        p0 = pHeader;
        pHeader = pHeader->nxt;
        free (p0);
    }
    return 0;
}


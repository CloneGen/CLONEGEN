void main () {
    int i, j, a, b;
    long x = 0, t = 1;
    char n [50], m [50];
    for (i = 50; i >= 0; i--) {
        m[i] = '\0';
        n[i] = '\0';
    }
    scanf ("%d", &a);
    scanf ("%s", n);
    scanf ("%d", &b);
    for (i = 50; i >= 0; i--) {
        if (n[i] != '\0') {
            for (j = i; j >= 0; j--) {
                if (n[j] >= 48 && n[j] <= 59) {
                    x = x + (n[j] - 48) * t;
                    t = t * a;
                }
                if (n[j] >= 65 && n[j] <= 90) {
                    x = x + (n[j] - 55) * t;
                    t = t * a;
                }
                if (n[j] >= 97 && n[j] <= 122) {
                    x = x + (n[j] - 87) * t;
                    t = t * a;
                }
            }
            if (j == -1)
                break;
        }
    }
    for (i = 50; i >= 0; i--) {
        if (x == 0)
            break;
        if (b <= 10) {
            m[i] = x % b + 48;
            x = x / b;
        }
        if (b > 10) {
            if (x % b <= 9)
                m[i] = x % b + 48;
            if (x % b >= 10)
                m[i] = x % b + 55;
            x = x / b;
        }
    }
    for (i = 0; i <= 50; i++) {
        if (m[i] != '\0') {
            for (j = i; j <= 50; j++)
                printf ("%c", m[j]);
            break;
        }
        if (i == 50 && m[i] == '\0')
            printf ("0");
    }
    printf ("\n");
}


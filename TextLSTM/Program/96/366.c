main () {
    char a [100];
    int i, count = 0, shang [100], yu = 0, q = 0, h = 0, t [100];
    for (i = 0; i < 100; i++) {
        a[i] = '\0';
        shang[i] = 0;
        t[i] = 0;
    }
    scanf ("%s", a);
    for (i = 0; i < 100; i++) {
        if (a[i] == '\0')
            break;
        count++;
    }
    for (i = 0; i < count; i++) {
        q = (a[i] - '0') + yu * 10;
        shang[i] = q / 13;
        yu = q - 13 * shang[i];
    }
    if (shang[0] == 0) {
        for (i = 0; i < 100; i++) {
            t[i] = shang[i];
        }
        for (i = 0; i < 99; i++) {
            shang[i] = t[i + 1];
        }
        if (shang[0] != 0) {
            for (i = 0; i < count - 1; i++) {
                printf ("%d", shang[i]);
            }
        }
        else {
            for (i = 0; i < 100; i++) {
                t[i] = 0;
            }
            for (i = 0; i < 100; i++) {
                t[i] = shang[i];
            }
            for (i = 0; i < 99; i++) {
                shang[i] = t[i + 1];
            }
            if (shang[0] != 0) {
                for (i = 0; i < count - 2; i++) {
                    printf ("%d", shang[i]);
                }
            }
            else
                printf ("0");
        }
    }
    else {
        for (i = 0; i < count - 1; i++) {
            printf ("%d", shang[i]);
        }
    }
    printf ("\n%d", yu);
}


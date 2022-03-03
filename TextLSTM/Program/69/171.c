int main () {
    int a [270], b [270], i, wp, wq;
    char s1 [270], s2 [270];
    for (i = 0; i < 251; i++) {
        a[i] = -1;
        b[i] = -1;
    }
    int *p = a, *q = b;
    cin >> s1;
    cin >> s2;
    i = 0;
    while (s1[i] != '\0')
        *p++ = s1[i++] - '0';
    wp = i;
    i = 0;
    while (s2[i] != '\0')
        *q++ = s2[i++] - '0';
    wq = i;
    p--;
    q--;
    int jinwei = 0;
    while (p >= a && q >= b) {
        int temp;
        temp = *p + *q + jinwei;
        *p = temp % 10;
        *q = *p;
        jinwei = temp / 10;
        p--;
        q--;
    }
    if (wp >= wq) {
        while (p >= a) {
            if (!jinwei)
                break;
            int temp;
            temp = *p + jinwei;
            *p = temp % 10;
            jinwei = temp / 10;
            p--;
        }
        if (jinwei) {
            cout << "1";
            for (i = 0; a[i] != -1; i++)
                cout << a[i];
        }
        else {
            for (i = 0; a[i] == 0; i++)
                ;
            if (a[i] == -1)
                cout << "0";
            else
                for (; a[i] != -1; i++)
                    cout << a[i];
        }
    }
    else {
        while (q >= b) {
            if (!jinwei)
                break;
            int temp;
            temp = *q + jinwei;
            *q = temp % 10;
            jinwei = temp / 10;
            q--;
        }
        if (jinwei) {
            cout << "1";
            for (i = 0; b[i] != -1; i++)
                cout << b[i];
        }
        else {
            for (i = 0; b[i] == 0; i++)
                ;
            if (b[i] == -1)
                cout << "0";
            else
                for (; b[i] != -1; i++)
                    cout << b[i];
        }
    }
    return 0;
}


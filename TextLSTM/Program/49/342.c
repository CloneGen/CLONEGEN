int main () {
    int i = 0, j, k, p, length;
    char a [100];
    do {
        a[i] = getchar ();
    }
    while (a[i++] != '\n');
    length = i;
    for (i = 2; i <= length; i++) {
        for (j = 0; j <= length - i - 1; j++) {
            p = 1;
            for (k = 0; k <= (i - 1) / 2; k++) {
                if (a[j + k] != a[j + i - 1 - k])
                    p = 0;
            }
            if (p == 1) {
                for (k = j; k < i + j; k++)
                    cout << a[k];
                cout << endl;
            }
        }
    }
    return 0;
}


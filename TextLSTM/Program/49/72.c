int main () {
    char str [500], h [500];
    int i, len, j, k, l = 0, p, q, flag = 0;
    cin.getline (str, 500);
    len = strlen (str);
    for (i = 2; i <= len; i++) {
        for (j = 0; j <= len - i; j++) {
            l = 0;
            for (k = j; k <= j + i - 1; k++) {
                h[l++] = str[k];
            }
            for (p = 0; p <= i / 2 - 1; p++) {
                if (h[p] != h[i - 1 - p])
                    break;
            }
            if (p == i / 2) {
                for (q = 0; q <= i - 2; q++)
                    cout << h[q];
                cout << h[i - 1] << endl;
            }
        }
    }
    return 0;
}


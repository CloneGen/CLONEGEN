int main () {
    char str [500];
    int i, j, k, len, m, n, count;
    cin.getline (str, 500);
    len = strlen (str);
    for (i = 1; i < len; i++) {
        for (j = 0; j < len - i; j++) {
            m = j;
            n = j + i;
            count = 0;
            while (str[m] == str[n] && m < n) {
                m++;
                n--;
                count++;
            }
            if (count == i / 2 + 1) {
                for (k = j; k <= j + i; k++) {
                    cout << str[k];
                }
                cout << endl;
            }
        }
    }
    return 0;
}


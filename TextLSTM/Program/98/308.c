int main () {
    int n, i, len1 = 0, len2;
    char words [1000] [41];
    char (*p) [41] = NULL;
    p = words;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> *(p + i);
    len2 = strlen (*p) + 1;
    for (i = 0; i < n; i++) {
        len1 += strlen (*(p + i));
        len2 += strlen (*(p + i + 1));
        if (len2 <= 80 && i != n - 1) {
            cout << *(p + i) << " ";
            len1++;
            len2++;
        }
        else {
            if (len1 <= 80) {
                cout << *(p + i) << endl;
                len1 = 0;
                len2 = strlen (*(p + i + 1)) + 1;
            }
            else {
                cout << endl;
                len1 = 0;
                len2 = strlen (*(p + i)) + 1;
            }
        }
    }
    return 0;
}


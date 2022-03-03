int main () {
    int str_1 [100], str_2 [100], str_3 [100], n, k;
    char str_a [101], str_b [101];
    int len_a, len_b;
    cin >> n;
    for (k = 0; k < n; k++) {
        cin.get ();
        cin.getline (str_a, 101);
        cin.getline (str_b, 101);
        len_a = strlen (str_a);
        len_b = strlen (str_b);
        memset (str_1, 0, sizeof (str_1));
        memset (str_2, 0, sizeof (str_2));
        memset (str_3, 0, sizeof (str_3));
        int i, j = 0;
        for (i = len_a - 1; i >= 0; i--)
            str_1[j++] = str_a[i] - '0';
        j = 0;
        for (i = len_b - 1; i >= 0; i--)
            str_2[j++] = str_b[i] - '0';
        for (i = 0; i < len_b; i++) {
            if (str_1[i] >= str_2[i])
                str_3[i] = str_1[i] - str_2[i];
            else {
                str_3[i] = str_1[i] - str_2[i] + 10;
                str_1[i + 1]--;
            }
        }
        for (; i < len_a; i++)
            str_3[i] = str_1[i];
        for (i = 99; i >= 0; i--) {
            if (str_3[i] != 0)
                break;
        }
        if (i == -1)
            cout << 0;
        else
            for (; i >= 0; i--)
                cout << str_3[i];
        cout << endl;
    }
    return 0;
}


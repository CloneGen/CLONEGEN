int main () {
    int n, i, j = 0, k, t, sum = 0;
    char word [40], str [80];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> word;
        sum += strlen (word);
        if ((i != n) && (sum <= 80)) {
            for (k = 0; k < strlen (word); k++, j++)
                str[j] = word[k];
            str[j] = ' ';
            j++;
            sum++;
        }
        else if (sum > 80) {
            for (t = 0; t < j - 1; t++)
                cout << str[t];
            cout << endl;
            memset (str, 0, sizeof (str));
            for (j = 0, k = 0; k < strlen (word); k++, j++)
                str[j] = word[k];
            str[j] = ' ';
            j++;
            sum = strlen (word) + 1;
        }
        else {
            for (k = 0; k < strlen (word); k++, j++)
                str[j] = word[k];
            for (t = 0; t <= j - 1; t++)
                cout << str[t];
            cout << endl;
        }
    }
    return 0;
}


int Legal0 (char s) {
    if (s == '_')
        return 1;
    else if (((s > 64) && (s < 91)) || ((s > 96) && (s < 123)))
        return 1;
    else
        return 0;
}

int Legal (char s) {
    if (s == '_')
        return 1;
    else if (((s > 64) && (s < 91)) || ((s > 96) && (s < 123)))
        return 1;
    else if ((s > 47) && (s < 58))
        return 1;
    else
        return 0;
}

int main () {
    char str [81];
    int i = 0, len = 0, sum, IsLegal, j = 0, n;
    cin >> n;
    getchar ();
    for (i = 0; i < n; i++) {
        cin.getline (str, 81, '\n');
        sum = 0;
        for (len = 1; str[len] != '\0'; len++)
            ;
        if (Legal0 (str[0]) == 1)
            sum++;
        for (j = 1; j < len; j++) {
            if (Legal (str[j]) == 1)
                sum++;
        }
        if (sum == len)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}


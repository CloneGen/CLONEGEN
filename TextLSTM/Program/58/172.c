int Legal0 (char z) {
    if ((z > 64) && (z < 91))
        return 1;
    else if ((z > 96) && (z < 123))
        return 1;
    else if (z == '_')
        return 1;
    else
        return 0;
}

int Legal (char z) {
    if (((z > 64) && (z < 91)) || ((z > 96) && (z < 123)))
        return 1;
    else if ((z > 47) && (z < 58))
        return 1;
    else if (z == '_')
        return 1;
    else
        return 0;
}

int main () {
    char str [81];
    int i = 0, j = 0, n = 0, len, sum = 0;
    cin >> n;
    getchar ();
    for (i = 0; i < n; i++) {
        sum = 0;
        cin.get (str, 81, '\n');
        getchar ();
        len = strlen (str);
        sum += Legal0 (str[0]);
        for (j = 1; j < len; j++) {
            sum += Legal (str[j]);
        }
        if (sum == len)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}


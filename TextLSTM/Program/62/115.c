int main () {
    char str [101];
    int n = 0, count = 0, i, j, k;
    cin.get (str, 101, '\n');
    n = strlen (str);
    for (i = 0; i < n; i++) {
        if (str[i] != ' ')
            continue;
        for (j = i + 1; j < n; j++) {
            if (str[j] == ' ')
                count++;
            else
                break;
        }
        if (count > 0) {
            for (k = i + 1; k < n; k++)
                str[k] = str[k + count];
        }
        count = 0;
    }
    cout << str;
    return 0;
}


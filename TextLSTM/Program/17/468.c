int brackets_matching (char str [], char result [], int n, int j) {
    int i, p;
    for (i = j; str[i]; i++) {
        switch (str[i]) {
        case '(' :
            p = brackets_matching (str, result, n + 1, i + 1);
            if (str[p] == ')')
                result[i] = ' ';
            else
                result[i] = '$';
            i = p;
            break;
        case ')' :
            if (!n)
                result[i] = '?';
            else {
                result[i] = ' ';
                return i;
            }
            break;
        default :
            result[i] = ' ';
        }
    }
    result[i] = 0;
    return i;
}

int main () {
    char a [MAXL], result [MAXL];
    while (cin >> a) {
        cout << a << endl;
        brackets_matching (a, result, 0, 0);
        cout << result << endl;
    }
    return 0;
}


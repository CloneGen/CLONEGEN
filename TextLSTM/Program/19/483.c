int main () {
    char str [10001];
    char c1 [101], c2 [101];
    int i, j, a, b, c;
    cin.getline (str, 10001);
    cin >> c1 >> c2;
    a = strlen (str);
    b = strlen (c1);
    c = strlen (c2);
    for (i = 0; i < a; i++) {
        if (((str[i - 1] == 32) && (str[i + b] == 32)) || ((i == 0) && (str[i + b] == 32)) || (str[i - 1] == 32) && (i + b == a)) {
            if (str[i] == c1[0]) {
                for (j = i; j <= i + b - 1; j++) {
                    if (str[j] != c1[j - i])
                        break;
                }
                if (j == (i + b)) {
                    if (c > b) {
                        for (j = a - 1; j >= i + b; j--) {
                            str[j + c - b] = str[j];
                        }
                        for (j = i; j <= i + c - 1; j++) {
                            str[j] = c2[j - i];
                        }
                        a = a + c - b;
                        i = i + c - 1;
                    }
                    else {
                        for (j = i + b; j <= a - 1; j++) {
                            str[j + c - b] = str[j];
                        }
                        for (j = i; j <= i + c - 1; j++) {
                            str[j] = c2[j - i];
                        }
                        a = a + c - b;
                        i = i + c;
                    }
                }
            }
        }
    }
    for (i = 0; i < a; i++) {
        cout << str[i];
    }
    return 0;
}


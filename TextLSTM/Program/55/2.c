int shi (int a, char b []) {
    int sum = 0, i = 0, f;
    double t;
    f = strlen (b);
    t = a;
    for (i = 0; i < strlen (b); i++) {
        if (b[i] < 'A')
            sum += (int) (b[i] - '0') * pow (t, f - 1 - i);
        else if (b[i] < 'a')
            sum += (int) (b[i] - 'A' + 10) * pow (t, f - 1 - i);
        else
            sum += (int) (b[i] - 'a' + 10) * pow (t, f - 1 - i);
    }
    return sum;
}

void zhuanhua (int x, int y) {
    int i = 0, yu [300] = {0}, j = 0;
    if (x != 0) {
        for (i = 0; x != 0; i++) {
            yu[i] = x % y;
            x = x / y;
        }
    }
    else
        cout << "0" << endl;
    for (j = i - 1; j >= 0; j--) {
        if (yu[j] > 9) {
            cout << (char) (yu[j] - 10 + 'A');
        }
        else {
            cout << yu[j];
        }
    }
    return;
}

int main () {
    int a, b;
    char n [300];
    cin >> a >> n >> b;
    zhuanhua (shi (a, n), b);
    return 0;
}


char s [50];
int i, j, k;
int flag = 0;

void f (int n) {
    if (n == 0)
        return;
    else if (n == 1) {
        for (i = 48; i >= 0; i--) {
            s[i] = (s[i] - '0') * 2 + flag;
            if (s[i] >= 10) {
                flag = s[i] / 10;
                s[i] = s[i] % 10 + '0';
            }
            else {
                flag = 0;
                s[i] = s[i] + '0';
            }
        }
        return;
    }
    else if (n == 2) {
        for (i = 48; i >= 0; i--) {
            s[i] = (s[i] - '0') * 4 + flag;
            if (s[i] >= 10) {
                flag = s[i] / 10;
                s[i] = s[i] % 10 + '0';
            }
            else {
                flag = 0;
                s[i] = s[i] + '0';
            }
        }
        return;
    }
    else {
        for (i = 48; i >= 0; i--) {
            s[i] = (s[i] - '0') * 8 + flag;
            if (s[i] >= 10) {
                flag = s[i] / 10;
                s[i] = s[i] % 10 + '0';
            }
            else {
                flag = 0;
                s[i] = s[i] + '0';
            }
        }
        f (n - 3);
    }
}

int main () {
    int n;
    cin >> n;
    memset (s, '0', sizeof (s));
    s[48] = '1';
    f (n);
    i = 0;
    while (s[i] == '0') {
        i++;
    }
    for (j = i; j <= 48; j++) {
        cout << s[j];
    }
    return 0;
}


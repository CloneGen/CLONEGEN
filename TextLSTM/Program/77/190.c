int hands (int n);
int c [200] = {0}, b [100];

int main () {
    char a [100];
    int i = 0, num = 0, j = 1;
    cin >> a;
    c[0] = 0;
    for (i = 1; i < strlen (a); i++) {
        if (a[i] == a[0]) {
            c[j] = 0;
            j++;
            num++;
        }
        else {
            c[j] = 1;
            j++;
            num++;
        }
    }
    for (i = 0; i < strlen (a); i++)
        b[i] = i;
    hands (num + 1);
    return 0;
}

int hands (int n) {
    int i, j, temp = 0;
    for (i = 0; i < n; i++) {
        if (c[i] == 0 && c[i + 1] == 1) {
            cout << b[i] << " " << b[i + 1] << endl;
            break;
        }
    }
    for (j = i + 2; j < n; j++) {
        c[j - 2] = c[j];
        b[j - 2] = b[j];
    }
    if (n > 2)
        return hands (n - 2);
    else {
        return 0;
    }
}


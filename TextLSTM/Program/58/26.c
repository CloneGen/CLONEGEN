int qualification (char a [90]) {
    int result = 0, flag = 0, i = 0, l = 0;
    if (a[0] == 95 || (a[0] > 64 && a[0] < 91) || (a[0] > 96 && a[0] < 123))
        flag = 0;
    else {
        flag = 1;
        return 1;
    }
    l = strlen (a);
    for (i = 1; i < l; i++) {
        if (a[i] == 95 || (a[i] > 64 && a[i] < 91) || (a[i] > 96 && a[i] < 123) || (a[i] > 47 && a[i] < 58)) {
            flag = 0;
            continue;
        }
        else {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        result = 1;
    else if (flag == 0)
        result = 2;
    return result;
}

int main () {
    char a [90];
    int n = 0, i = 0;
    cin >> n;
    gets (a);
    for (i = 0; i < n; i++) {
        gets (a);
        cout << qualification (a) - 1 << endl;
    }
    return 0;
}


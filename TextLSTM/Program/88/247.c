int main () {
    char a [31];
    cin.getline (a, 31);
    int len = strlen (a);
    for (int i = 0;
    i < len; i++) {
        if ((a[i] > '9' || a[i] < '0') && (a[i + 1] <= '9' && a[i + 1] >= '0')) {
            cout << endl;
            continue;
        }
        if ((a[i] > '9' || a[i] < '0') && (a[i + 1] > '9' || a[i + 1] < '0'))
            continue;
        cout << a[i];
    }
    return 0;
}


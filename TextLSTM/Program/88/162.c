int main () {
    char a [31];
    cin.getline (a, 31);
    int i = -1, len = strlen (a);
    while (i < len) {
        i++;
        if (a[i] > '9' || a[i] < '0')
            continue;
        while (a[i] <= '9' && a[i] >= '0') {
            cout << a[i];
            i++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}


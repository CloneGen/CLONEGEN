int main () {
    int i;
    char a [31];
    cin.getline (a, 31);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] <= '9' && a[i] >= '0' && a[i + 1] <= '9' && a[i + 1] >= '0')
            cout << a[i];
        if (a[i] <= '9' && a[i] >= '0' && (a[i + 1] > '9' || a[i + 1] < '0'))
            cout << a[i] << endl;
    }
    return 0;
}


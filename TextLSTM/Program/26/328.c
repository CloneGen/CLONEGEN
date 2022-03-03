int main () {
    int i, j;
    char a [101];
    cin.getline (a, 101);
    for (i = 0; i < (strlen (a));) {
        if (a[i] == ' ' && a[i + 1] == ' ') {
            i = i;
            for (j = i; j < (strlen (a) + 1); j++) {
                a[j] = a[j + 1];
            }
        }
        else
            i++;
    }
    cout << a;
    cout << endl;
    return 0;
}


int main () {
    char a [100];
    int i, k;
    cin.getline (a, 100);
    for (i = 0; a[i] != '\n'; i++)
        if (a[i] == ' ') {
            while (a[i + 1] == ' ') {
                for (k = i + 1; k < strlen (a); k++) {
                    a[k] = a[k + 1];
                }
            }
        }
    cout << a << endl;
    return 0;
}


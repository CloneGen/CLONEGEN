int main () {
    char a [100];
    cin.getline (a, 100);
    int i, j, count = 0;
    char *p = NULL;
    for (i = 1; a[i - 1] != '\0'; i++) {
        if (a[i] == ' ')
            count++;
        else {
            if (count >= 2) {
                for (j = i; a[j - 1] != '\0'; j++)
                    a[j - count + 1] = a[j];
                i = i - count + 1;
            }
            count = 0;
        }
    }
    p = a;
    for (p = a, i = 0; a[i] != '\0'; i++)
        cout << p[i];
    return 0;
}


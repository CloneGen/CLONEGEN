int main () {
    int i, g;
    char a [100];
    gets (a);
    g = 0;
    for (i = 0; i < strlen (a); i++) {
        if (g == 0) {
            if (a[i] != ' ')
                cout << a[i];
            else {
                g = 1;
                cout << a[i];
            }
        }
        else {
            if (a[i] == ' ')
                continue;
            else {
                g = 0;
                cout << a[i];
            }
        }
    }
    cout << endl;
    return 0;
}


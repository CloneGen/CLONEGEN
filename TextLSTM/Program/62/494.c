int main () {
    char *p, a [201], b;
    int i, j, k, len;
    cin.getline (a, 201);
    len = strlen (a);
    p = a;
    for (i = 0; i < len; i++) {
        if (*p != ' ') {
            cout << *p;
            p++;
            j = 0;
        }
        else {
            if (j == 0)
                cout << ' ';
            p++;
            j = 1;
        }
    }
    cout << endl;
    return 0;
}


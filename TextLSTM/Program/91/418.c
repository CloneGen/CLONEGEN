int main () {
    char a [200], b [200], *p = a, *q = b, *s = NULL;
    do {
        cin.get (*p);
    }
    while (*p++ != '\n');
    p = a;
    while (*(p + 1) != '\n') {
        *q = *p + *(p + 1);
        p++;
        q++;
    }
    *q = *p + *a;
    for (s = b; s <= q; s++)
        cout << *s;
    cout << endl;
    return 0;
}


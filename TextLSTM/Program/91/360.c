int main () {
    char a [101], t, i = 0, *p;
    cin.getline (a, 101, '\n');
    t = a[0];
    p = &a[1];
    while (*p != '\0') {
        a[i] = *p + *(p - 1);
        i++;
        p++;
    }
    a[i] = a[i] + t;
    cout << a << endl;
    return 0;
}


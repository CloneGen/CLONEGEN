int main () {
    char s [101], s1 [101];
    cin.getline (s, 101);
    int len = strlen (s);
    char *p = s, *q = s1;
    int i;
    for (i = 0; i < len - 1; i++)
        q[i] = p[i] + p[i + 1];
    q[i] = p[i] + p[0];
    for (i = 0; i < len; i++)
        cout << *q++;
    cout << endl;
    return 0;
}


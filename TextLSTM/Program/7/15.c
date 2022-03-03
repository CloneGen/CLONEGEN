int main () {
    char a [250], b [150], c [150];
    cin >> a >> b >> c;
    if (strstr (a, b) == NULL) {
        cout << a;
        return 0;
    }
    char *p = strstr (a, b);
    int i = 0;
    while (c[i] != '\0') {
        *p++ = c[i];
        i++;
    }
    cout << a;
    return 0;
}


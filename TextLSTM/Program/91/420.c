int main () {
    char str [101], *p, t;
    cin.getline (str, 101);
    p = str;
    t = *p;
    for (; p < str + strlen (str) - 1; p++) {
        *p = *p + *(p + 1);
        cout << *p;
    }
    t = *p + t;
    cout << t << endl;
    return 0;
}


int main () {
    char a [30], *p;
    int b;
    cin.getline (a, 31);
    b = strlen (a);
    for (p = a; p < a + b; p++) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        else
            cout << endl;
    }
    return 0;
}


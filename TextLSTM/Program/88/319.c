int main () {
    char a [30];
    int len, i;
    gets (a);
    len = strlen (a);
    if (*a >= '0' && *a <= '9')
        cout << *a;
    for (i = 1; i < len; i++) {
        if (*(a + i) >= '0' && *(a + i) <= '9')
            cout << *(a + i);
        else if ((*(a + i) < '0' || *(a + i) > '9') && (*(a + i - 1) >= '0' && *(a + i - 1) <= '9'))
            cout << endl;
        else
            continue;
    }
    return 0;
}


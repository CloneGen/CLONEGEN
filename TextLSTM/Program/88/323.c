int main () {
    char a [32], *p = NULL;
    int n = 0, i;
    gets (a);
    p = a;
    for (; *p != '\0'; p++) {
        if (isdigit (*p) && *(p + 1) != '\0')
            n++;
        else {
            for (i = n - 1; i >= 0; i--)
                cout << *(p - i - 1);
            if (*(p + 1) == '\0' && isdigit (*p))
                cout << *(p);
            if (n != 0)
                cout << endl;
            n = 0;
        }
    }
    return 0;
}


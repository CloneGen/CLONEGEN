int main () {
    char text [50];
    char *p;
    p = text;
    gets (p);
    for (; *p != 0; p++)
        if (*p < '0' || *p > '9')
            *p = 0;
    *p = 1;
    p = text - 1;
    while (*(++p) != 1)
        if (*p != 0)
            cout << *p;
        else if (*(p + 1) != 0)
            cout << endl;
    return 0;
}


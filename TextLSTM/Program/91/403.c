int main () {
    char st1 [102], st2 [102];
    char *p, *q;
    p = st1;
    q = st2;
    cin.getline (st1, 102);
    while (*(p + 1) != '\0') {
        *(q++) = *p + *(++p);
    }
    *(q++) = *p + *st1;
    *q = '\0';
    cout << st2 << endl;
}


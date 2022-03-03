int main () {
    char a [102], *p = NULL, *q = NULL;
    cin.getline (a, 105);
    q = a;
    for (p = a; *(p + 1) != '\0'; p++)
        cout << (char) (*p + *(p + 1));
    cout << (char) (*p + *q) << endl;
    return 0;
}


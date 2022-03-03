int main () {
    char str [102];
    gets (str);
    char *p = NULL;
    for (p = str; p < str + strlen (str) - 1; p++)
        cout << (char) (*p + *(p + 1));
    cout << (char) (str[0] + str[strlen (str) - 1]);
    return 0;
}


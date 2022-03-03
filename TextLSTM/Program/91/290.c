int main () {
    char str [1000];
    cin.getline (str, 1000, '\n');
    char *p = str;
    int lenth = strlen (str);
    int i;
    for (i = 0; i < lenth - 1; i++)
        cout << (char) (*(p + i) + *(p + i + 1));
    cout << (char) (*p + *(p + lenth - 1)) << endl;
    return 0;
}


int main () {
    char a [105], b [105];
    int i, len;
    cin.getline (a, 105);
    len = strlen (a);
    for (i = 0; i < len - 1; i++) {
        *(b + i) = *(a + i) + *(a + i + 1);
        cout << *(b + i);
    }
    *(b + len - 1) = *(a + len - 1) + *a;
    cout << *(b + len - 1) << endl;
    return 0;
}


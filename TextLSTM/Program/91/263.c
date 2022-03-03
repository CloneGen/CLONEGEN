int main () {
    char a [1000], b;
    cin.getline (a, 1000);
    b = *a;
    for (int i = 0;
    i < strlen (a) - 1; i++) {
        int c = *(a + i + 1);
        *(a + i) += c;
    }
    int c = b, len = strlen (a) - 1;
    *(a + len) += c;
    cout << a;
    return 0;
}


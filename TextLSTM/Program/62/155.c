int main () {
    int j, i;
    char a [1000] [100];
    for (i = 0; i < 1000; i++) {
        cin >> *(a + i);
        if (getchar () == '\n')
            break;
    }
    cout << *(a);
    for (j = 1; j <= i; j++)
        cout << " " << *(a + j);
}


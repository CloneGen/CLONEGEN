int main () {
    char a1 [101] = {-1};
    int i;
    cin.getline (a1, 101);
    for (i = 0; i <= 100; i++) {
        if (a1[i] == 0)
            break;
        if (a1[i] != 32)
            cout << a1[i];
        else if (a1[i - 1] != 32)
            cout << a1[i];
    }
    return 0;
}


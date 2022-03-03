int main () {
    int i, n, flag;
    char Sen [101];
    cin.getline (Sen, 100);
    n = strlen (Sen);
    flag = 0;
    for (i = 0; i < n; i++) {
        if (Sen[i] != ' ') {
            cout << Sen[i];
            flag = 1;
        }
        else {
            if (flag == 1) {
                cout << " ";
                flag = 0;
            }
        }
    }
    cout << endl;
    return 0;
}


int main () {
    int n, i, k, j, p = 0;
    char str1 [100];
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        cin.getline (str1, 100);
        k = strlen (str1);
        if (str1[0] >= 'A' && str1[0] <= 'Z' || str1[0] >= 'a' && str1[0] <= 'z' || str1[0] == '_') {
            for (j = 1; j < k; j++) {
                if (str1[j] >= 'A' && str1[j] <= 'Z' || str1[j] >= 'a' && str1[j] <= 'z' || str1[j] >= '0' && str1[j] <= '9' || str1[j] == '_')
                    ;
                else
                    break;
            }
            if (j == k)
                p = 1;
        }
        cout << p << endl;
        p = 0;
    }
    return 0;
}


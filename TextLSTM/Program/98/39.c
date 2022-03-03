int main () {
    int n, i, num [1000], *p = num, sum = 0;
    char word [1000] [40];
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cin >> word[i];
        *(p + i) = strlen (word[i]);
    }
    for (i = 0; i <= n - 1; i++) {
        if (sum == 0) {
            sum += *(p + i);
            cout << word[i];
        }
        else {
            sum += (*(p + i) + 1);
            if (sum <= 80)
                cout << " " << word[i];
            else {
                sum = 0;
                i--;
                cout << endl;
            }
        }
    }
    cout << endl;
    return 0;
}


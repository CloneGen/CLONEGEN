int main () {
    int n, i, temp;
    cin >> n;
    const  int N = n;
    int ia [N];
    for (i = 0; i != n; i++)
        cin >> ia[i];
    i = 1;
    while (i < n) {
        temp = n;
        for (int j = 0;
        j < i; j++) {
            if (ia[i] == ia[j]) {
                for (int k = i;
                k < n - 1; k++)
                    ia[k] = ia[k + 1];
                n--;
                break;
            }
        }
        if (n == temp)
            i++;
    }
    for (i = 0; i < n - 1; i++)
        cout << ia[i] << " ";
    cout << ia[n - 1] << endl;
    return 0;
}


int cmp (const  void *a, const  void *b) {
    return (*(int*) a - *(int*) b);
}

int main () {
    int n, k, odd [1000] = {0}, c = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int num;
        cin >> num;
        if (num % 2) {
            odd[c] = num;
            c++;
        }
    }
    qsort (odd, c, sizeof (int), cmp);
    cout << odd[0];
    for (int i = 1;
    i < c; i++) {
        cout << "," << odd[i];
    }
    return 0;
}


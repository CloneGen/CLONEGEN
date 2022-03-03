int main () {
    int a [16];
    int i, j, k;
    int count;
end3 :
    ;
    for (i = 0;; i++) {
        count = 0;
        cin >> a[i];
        if (a[i] == -1) {
            goto end1;
        }
        if (a[i] == 0) {
            for (j = 0; j < i; j++) {
                for (k = 0; k < i; k++) {
                    if (a[j] == 2 * a[k]) {
                        count = count + 1;
                        break;
                    }
                }
            }
            cout << count << endl;
            goto end3;
        }
    }
end1 :
    ;
    return 0;
}


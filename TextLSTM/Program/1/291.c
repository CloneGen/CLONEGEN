void fenjie (int);
int solutionnum = 1;

int main () {
    int n, a, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        fenjie (a);
        cout << solutionnum << endl;
        solutionnum = 1;
    }
    return 0;
}

int yinzi [100] = {2}, i = 0;

void fenjie (int x) {
    int j;
    for (j = yinzi[i]; j < x; j++) {
        if (x % j == 0 && x / j >= j) {
            i++;
            yinzi[i] = j;
            fenjie (x / j);
            j = yinzi[i];
            i--;
            solutionnum++;
        }
    }
}


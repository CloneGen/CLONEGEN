int N;
int i = 1;

int Apple (int n, int k) {
    if (n == 1) {
        return i * N +k;
    }
    else {
        while (Apple (n - 1, k) % (N -1) != 0) {
            i++;
        }
        return (N *Apple(n - 1, k) / (N -1) + k);
    }
}

int main () {
    int n, k;
    cin >> n >> k;
    N = n;
    cout << Apple (n, k) << endl;
    return 0;
}


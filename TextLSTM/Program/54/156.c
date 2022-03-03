int n, k, rest = 1;

int remain (int i) {
    if (i == n + 1)
        return rest;
    if (remain (i + 1) % (n - 1) == 0)
        return remain (i + 1) / (n - 1) * n + k;
    else {
        rest++;
        return remain (i);
    }
}

int main () {
    cin >> n >> k;
    cout << remain (1) << endl;
    return 0;
}


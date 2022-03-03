int n, k, cnt = 0, i;

int apple (int m) {
    if (cnt == n - 1) {
        cout << m;
        return 1;
    }
    else {
        if (m % (n - 1) == 0) {
            cnt++;
            if (apple (m / (n - 1) * n + k))
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
}

int main () {
    cin >> n >> k;
    for (i = 1;; i++)
        if ((i + k) % (n - 1) == 0) {
            cnt = 0;
            if (apple (n * i + k))
                break;
        }
    return 0;
}


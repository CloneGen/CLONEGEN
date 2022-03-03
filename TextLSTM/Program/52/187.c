int data [1000] = {0};
int n = 0, m = 0;

void cir_move (int dir, int left, int right, int step) {
    if ((left == right) || (step == 0))
        return;
    int len = right - left + 1;
    step = step % len;
    if (step > len / 2) {
        cir_move (dir ^ 1, left, right, len - step);
        return;
    }
    int j = 0, k = len - step;
    for (int i = left;
    i < left + step; i++) {
        j = data[i];
        data[i] = data[i + k];
        data[i + k] = j;
    }
    if (dir == 0) {
        cir_move (dir, left, right - step, step);
    }
    else {
        cir_move (dir, left + step, right, step);
    }
}

int main () {
    cin >> n >> m;
    m = m % n;
    for (int i = 1;
    i <= n; i++)
        cin >> data[i];
    cir_move (1, 1, n, m);
    cout << data[1];
    for (int i = 2;
    i <= n; i++)
        cout << ' ' << data[i];
}


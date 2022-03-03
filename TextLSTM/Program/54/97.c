int n, k;
int n0;
int flag;
void calc (int p);

int main () {
    cin >> n >> k;
    n0 = n;
    for (int i = 2;
    i <= 100000000; i++) {
        flag = 0;
        n = n0;
        calc (i);
        if (flag == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

void calc (int p) {
    if (n == 0)
        return;
    else {
        if ((p - k) % n0 == 0 && p - k >= n0) {
            n--;
            calc ((p - k) * (n0 - 1) / n0);
        }
        else
            flag = 1;
    }
}


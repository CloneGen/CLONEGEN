int answer = 0;
int a = 2;
void f (int, int);

int main () {
    int n = 0;
    int i = 0;
    int data [100] = {0};
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> data[i];
    }
    for (i = 0; i < n; i++) {
        f (data[i], a);
        cout << answer << endl;
        answer = 0;
    }
}

void f (int m, int n) {
    int i = 0;
    if (m == 1) {
        answer = answer + 1;
    }
    for (i = n; i <= m; i++) {
        if (m % i == 0) {
            f (m / i, i);
        }
    }
}


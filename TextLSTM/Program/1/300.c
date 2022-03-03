int varieties = 0;
void factor (int, int);

int main () {
    int n = 0, num = 0, i = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        varieties = 0;
        cin >> num;
        factor (2, num);
        cout << varieties << endl;
    }
    return 0;
}

void factor (int first, int num) {
    int i = 0;
    if (num == 1) {
        varieties++;
    }
    else {
        for (i = first; i <= num; i++) {
            if (num % i == 0) {
                factor (i, num / i);
            }
        }
    }
}


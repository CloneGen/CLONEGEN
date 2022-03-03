int n, k, get_n = 1, temp;
void func (int num);

int main () {
    cin >> n >> k;
    func (n);
    cout << temp;
    return 0;
}

void func (int num) {
    if (num == n)
        temp = get_n * n + k;
    else
        temp = temp * n / (n - 1) + k;
    if (num == 1)
        return;
    if (temp % (n - 1) == 0)
        func (num - 1);
    else {
        ++get_n;
        func (n);
    }
}


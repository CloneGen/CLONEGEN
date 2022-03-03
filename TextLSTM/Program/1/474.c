int disintegerate (int a, int b) {
    if (a == b || b == 1)
        return 1;
    if (a > b)
        return 0;
    int ans = 0;
    for (int i = a;
    i <= b; i++) {
        if (b % i == 0)
            ans = ans + disintegerate (i, b / i);
    }
    return ans;
}

int main () {
    int Time;
    cin >> Time;
    while (Time > 0) {
        int n;
        cin >> n;
        cout << disintegerate (2, n) << endl;
        Time--;
    }
    return 0;
}


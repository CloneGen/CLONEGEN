int n, high, low, s, ans;

int main () {
    cin >> n;
    for (; n--;) {
        cin >> high >> low;
        if (90 <= high && high <= 140 && 60 <= low && low <= 90) {
            ++s;
            if (s > ans)
                ans = s;
        }
        else
            s = 0;
    }
    cout << ans << endl;
    return 0;
}


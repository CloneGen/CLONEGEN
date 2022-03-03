void BlockMove (int *fromP, int *targetP, int blockSize) {
    if (blockSize == 0)
        return;
    for (int i = 0;
    i < blockSize; i++)
        *(targetP + i) = *(fromP + i);
}

int main () {
    int m, i, nums [200], n;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> nums[i + 100];
    BlockMove (nums + 100 + n - m, nums + 100 - m, m);
    cout << nums[100 - m];
    for (i = 1; i < n; i++)
        cout << ' ' << nums[100 - m + i];
    return 0;
}


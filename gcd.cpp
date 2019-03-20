int gcd_easy(int a, int b) {
    while (a) a ^= b ^= a ^= b %= a;
    return b;
}

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

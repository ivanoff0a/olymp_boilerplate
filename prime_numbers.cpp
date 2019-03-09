bool is_prime(LL x){
    if(x<2 || (x>3 && (x%6&3) !=1)) return false;
    for(LL d=5, k=4; d*d<=x; d+=k^=6) if(x%d==0) return false;
    return true;
}

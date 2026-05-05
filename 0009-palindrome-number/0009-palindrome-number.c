bool isPalindrome(int x) {
    int y = 0;
    long long result = 0;
    int original = x;

    if(x < 0){
        return false;
    }

    else{
        while(x > 0){
            y = x % 10;
            result = result * 10 + y;
            x /= 10;
        }

        if(result == original) return true;

        else return false;
    }
}
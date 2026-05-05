bool isPalindrome(int x) {
    int arr2[30] = {0};
    int i = 0;
    int length = 0;

    if(x < 0){
        return false;
    }

    else{
        while(x > 0){
            arr2[i++] = x % 10;
            x = x / 10;
            length++;
        }

       for(int i = 0; i < length / 2; i++){ 
                if(arr2[i] == arr2[length - 1 - i]) continue;
                return false;
            }
        return true;
    }
}
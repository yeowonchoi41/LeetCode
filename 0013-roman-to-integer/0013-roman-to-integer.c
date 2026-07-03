int romanToInt(char* s) {
    int result = 0;
    int tmp = 0;
    int tmp2 = 0;

    for(int i = 0; i < strlen(s); i++){
        switch(s[i]){
            case 'I': tmp = 1;
            break;

            case 'V': tmp = 5;
            break;

            case 'X': tmp = 10;
            break;

            case 'L': tmp = 50;
            break;

            case 'C': tmp = 100;
            break;

            case 'D': tmp = 500;
            break;

            case 'M': tmp = 1000;
            break;       
        }

         switch(s[i+1]){
            case 'I': tmp2 = 1;
            break;

            case 'V': tmp2 = 5;
            break;

            case 'X': tmp2 = 10;
            break;

            case 'L': tmp2 = 50;
            break;

            case 'C': tmp2 = 100;
            break;

            case 'D': tmp2 = 500;
            break;

            case 'M': tmp2 = 1000;
            break;       
        }

        if(tmp < tmp2){
            result -= tmp;
        }

        else result += tmp;
    }

    return result;
}
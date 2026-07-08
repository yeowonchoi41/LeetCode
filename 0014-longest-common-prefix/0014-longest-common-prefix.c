char* longestCommonPrefix(char** strs, int strsSize) {
    char tmp[200] = {0};
    char* result = (char*)malloc(sizeof(char) * 201);
    bool check = true;

   if(strsSize ==1){
        strcpy(result, strs[0]);
        return result;
    }

    for(int i = 0; i < strlen(strs[0]); i++){

        if(i >= strlen(strs[1])) break;

        if(strs[0][i] == strs[1][i]){
            tmp[i] = strs [0][i];
        }
        else break;
    }    

    result[0] = '\0';

    for(int i = 0; i< strlen(tmp); i++){
        check = true;
        
        for(int j = 2; j < strsSize; j++){

            if(i >= strlen(strs[j])) {
                check = false;
                result[i]= '\0'; 
                break;
            }

            if(tmp[i] != strs[j][i]){
                check = false;
                result[i]= '\0'; 
                break;
            }
        }

        if(check == true) result[i] = tmp[i];
    }

    result[strlen(tmp)]= '\0'; 
    return result;
}

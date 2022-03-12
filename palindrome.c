bool solution(char * inputString) {
    int i=0;
    int length= strlen(inputString) - 1;
    while (length>0) {
        if(inputString[i++]!=inputString[length--]){
            return false;
        }

    }
    return true;
    
}

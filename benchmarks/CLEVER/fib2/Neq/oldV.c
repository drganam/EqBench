int lib(int n){
    if(n <= 1){
        return 0;
    }
    else{
        return lib(n - 1) + lib(n - 2);
    }
}
int client(int x){
    if(x < 5){
        return lib(x);
    }
    else{
        return 0;
    }
}
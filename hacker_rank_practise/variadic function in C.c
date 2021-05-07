
int  sum (int count,...) {
    va_list arr;
    va_start(arr, count);
    int sum=0;
    for(int i=0;i<count;i++){
        sum=sum+va_arg(arr, int);
    }
    va_end(arr);
    return sum;

}

int min(int count,...) {
va_list arr;
va_start(arr,count);
int a;
int min = va_arg(arr, int);
for (int i = 0; i <= count; i++){
         a = va_arg(arr, int);   
        if  ( a < min) {
            min = a; }}
va_end(arr);
return min;


}

int max(int count,...) {
va_list arr;
va_start(arr,count);
int a;
int max = va_arg(arr, int);
for (int i = 0; i <= count; i++){
         a = va_arg(arr, int);   
        if  ( a > max) {
            max = a; }}
va_end(arr);
return max;


}


# include <iostream>
# include <stdlib.h>
using namespace std;
int main(){
    char *p;
    p = (char*) malloc(1024);
    cout<<sizeof(p)<<endl;
    p = (char*)realloc(p,2);
    cout<<sizeof(p);
    return 0;
}
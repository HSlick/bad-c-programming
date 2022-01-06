    #include<stdio.h>

/* copy input to its output, replacing each
   string of one or more blanks by a single blank */

int main()
{
    int c, nspace=0;
    while((c=getchar()) != EOF){
        if(c==' ') ++nspace;
        else{
            if(nspace >= 1){
                printf(" ");
                putchar(c);
                nspace=0;
            }
            else
                putchar(c);
        }
    } 
            
}

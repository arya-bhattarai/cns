#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k,l;
    char a[20],c[20],d[20];
    printf("\nEnter the plaintext: ");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    l=strlen(a);
    j=0;
    for(i=0;i<l;i+=2){
        c[j++]=a[i];
    }
    for(i=1;i<l;i+=2){
        c[j++]=a[i];
    }
    printf("\nEncrypted: %s",c);
    k =(l+1)/2;
    j=0;
    for(i=0;i<k;i++){
        d[j]=c[i];
        if(j+1<l){
            d[j+1]=c[k+i];
        }
        j+=2;
    }
    printf("\nDecrypted : %s",d);
    return 0;

}
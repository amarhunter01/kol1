#include <stdio.h>

int isSentence(char *);

int isSame(char *, char *);

void remove_chr(char *, char);

void connect(char *, char *);

int main(){
        // //Ham number
        // int n;
        // printf("Enter n: ");
        // scanf("%d", &n);

        // while(n%2==0){
        //     n /= 2;
        // }

        // while(n%3==0){
        //     n /= 3;
        // }

        // while(n%5==0){
        //     n /= 5;
        // }

        // if(n==1)
        //     printf("Is Hamm\n");
        // else 
        //     printf("Not Hamm\n");

        // //unlimted 3 digit number and listing less then it
        // int n;
        // while (1){
        //     printf("Enter n: ");
        //     scanf("%d", &n);
        //     if(n<100 || n>999){
        //         printf("N is not 3 digit number\n");
        //         continue;
        //     }
        //     for(n-1; n>=0; n--){
        //         printf("%d\n", n);
        //     }
        // }

    
    // //2d array to array 
    // int arr2d[50][50], arr[100], n, k = 0;
    // printf("Enter n: ");
    // scanf("%d", &n);
    // for(int i = 0; i<n; i++)
    //     for(int j = 0; j<n; j++){
    //         printf("Element [%d][%d]: ", i, j);
    //         scanf("%d", &arr2d[i][j]);
    //     }
    // for(int i = 0; i<n; i++)
    //     for(int j = 0; j < n; j++)
    //         arr[k++] = arr2d[i][j];
    // printf("Start of array:\n");
    // for(int i = 0; i<2*n; i++)
    //     printf("%d ", arr[i]);
    // printf("\nEnd of array\n");
    
    // //check if sentence is correct
    // char s[50];
    // printf("Enter sentence:\n");
    // gets(s);

    // if(isSentence(s))
    //     printf("Sentence is correct");
    // else
    //     printf("Sentence is incorrect");

    // //checking for diffrent words in 2d array
    // int n, count = 0;
    // char s[50][50];
    // printf("Enter n: ");
    // scanf("%d", &n);
    // printf("Enter words:\n");
    // for(int i = 0; i < n; i++)
    //     scanf("%s", s[i]);
    // for(int i = 0; i<n-1; i++){
    //     for(int j = 0; j<n; j++){
    //         if(j!=0){
    //             if(!isSame(s[i], s[j]))
    //                 count++;
    //         }
    //     }
    // }

    // printf("Amount of different words is: %d", count);

    // //remove char and connect strings if after char removal string are the same
    // char c, s1[50], s2[50];

    // printf("Enter char: ");
    // scanf(" %c", &c);
    // printf("Enter first string: ");
    // scanf("%s", s1);
    // printf("Enter second string: ");
    // scanf("%s", s2);

    // remove_chr(s1, c);
    // remove_chr(s2, c);

    // if(isSame(s1, s2)){
    //     connect(s1, s2);
    //     printf("Connected string: %s", s1);
    // }else
    //     printf("s1: %s\ns2: %s", s1, s2);

    return 0;

}

int isSentence(char *s){
    int i;
    if(s[0]>='A' && s[0]<= 'Z')
        for(i = 1; s[i]!='\0'; i++)
            if( (s[i]<'a' || s[i]>'z') && s[i]!=' ' && s[i]!=',' && s[i]!=';' )
                if(s[i]=='.' && s[i+1]=='\0')
                    return 1;
                else
                    return 0;

            else
                if(s[i] == ' ')
                    if(s[i+1] == ' ')
                        return 0;

    return 0;


}

int isSame(char *s1, char *s2){
    int i = 0;
    for(i; s1[i]!= '\0' && s2[i]!='\0'; i++){
        if(s1[i]!=s2[i]){
            return 0;
        }
    }
    if(s1[i] != s2[i]){
        return 0;
    }
    return 1;
}

void remove_chr(char *s, char c){
    int j;
    for(int i = 0; s[i]!= '\0'; i++)
        if(s[i]==c){
            for(j = i; s[j]!='\0'; j++)
                s[j] = s[j+1];
            s[j-1] = '\0';
        }
}

void connect(char *s1, char *s2){
    int i = 0, j;
    while(s1[i]!='\0')
        i++;
    for(i, j = 0; s2[j]!='\0';i++, j++)
        s1[i] = s2[j];
    s1[i] == '\0';
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char string[1000];
    int string_len;
    fgets(string,sizeof(string),stdin);
    string_len=strlen(string);
    int alphabet_frequency[26];
    //initializing frequency of all alphabets to zero
    for(int i=0;i<26;i++)
    {
        alphabet_frequency[i]=0;
    }
    //calculating frequency of alphabets in the string
    for(int i=0;i<string_len;i++)
    {
        char ch=tolower(string[i]);
        switch (ch) {
        case 'a':
            alphabet_frequency[0]+=1;
            break;
        case 'b':
            alphabet_frequency[1]+=1;
            break;
        case 'c':
            alphabet_frequency[2]+=1;
            break;
        case 'd':
            alphabet_frequency[3]+=1;
            break;
        case 'e':
            alphabet_frequency[4]+=1;
            break;
        case 'f':
            alphabet_frequency[5]+=1;
            break;
        case 'g':
            alphabet_frequency[6]+=1;
            break;
        case 'h':
            alphabet_frequency[7]+=1;
            break;
        case 'i':
            alphabet_frequency[8]+=1;
            break;
        case 'j':
            alphabet_frequency[9]+=1;
            break;
        case 'k':
            alphabet_frequency[10]+=1;
            break;
        case 'l':
            alphabet_frequency[11]+=1;
            break;
        case 'm':
            alphabet_frequency[12]+=1;
            break;
        case 'n':
            alphabet_frequency[13]+=1;
            break;
        case 'o':
            alphabet_frequency[14]+=1;
            break;
        case 'p':
            alphabet_frequency[15]+=1;
            break;
        case 'q':
            alphabet_frequency[16]+=1;
            break;
        case 'r':
            alphabet_frequency[17]+=1;
            break;
        case 's':
            alphabet_frequency[18]+=1;
            break;
        case 't':
            alphabet_frequency[19]+=1;
            break;
        case 'u':
            alphabet_frequency[20]+=1;
            break;
        case 'v':
            alphabet_frequency[21]+=1;
            break;
        case 'w':
            alphabet_frequency[22]+=1;
            break;
        case 'x':
            alphabet_frequency[23]+=1;
            break;
        case 'y':
            alphabet_frequency[24]+=1;
            break;
        case 'z':
            alphabet_frequency[25]+=1;
            break;  
        }
    }
//checking if any alphabet has zero frequency 
int pangram=1;
for(int i=0;i<26;i++)
{
    if (!alphabet_frequency[i]){
        printf("not pangram");
        pangram=0;
        break;
    }
}
if(pangram)
{
    printf("pangram");
}
}
/*The substitution cipher is used to decode a previously encrypted text where the normal
    alphabet a-z is replaced with a randomly generated alphabet as supplied.
        The cipher alphabet supplied is 
"QWERTYUIOPASDFGHJKLZXCVBNM"
- Note alphabet is in uppercase as required for all text and code will
    be implemented to support this.


*/
#include <stdio.h>
void substitution(char*, char*);

int main() 
{
    
char cipher[26] ="QWERTYUIOPASDFGHJKLZXCVBNM";
char message[40] = "PLEASE GET MILK AT THE SHOPS";

substitution(message, cipher);

return 0;
}
    
void substitution(char *message, char *cipher)
{
int i=0;
int j=0;

while(message[i]!= 0)
{
    if (message[i]>64 &&message[i]<91)
    { 
       while (message[i]!=cipher[j])
       {
               j++;   
        }
             j=message[i]-65;
             
            message[i]=cipher[j];
    }
        i++;
        j=0;
}
puts(message);
}
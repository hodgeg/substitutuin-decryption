/*The substitution cipher is used to encode a message by randomly allocating letters from
a supplied alphabet in substitution of another letter
    
        The cipher alphabet supplied is 
"QWERTYUIOPASDFGHJKLZXCVBNM"
- Note alphabet is in uppercase as required for all text and code will
    be implemented to support this.


*/
#include <stdio.h>
void substitution(char*, char*); // function definition is declared above the main function

int main() 
{
    
char cipher[26] ="QWERTYUIOPASDFGHJKLZXCVBNM"; // this is the cipher alphabet as supplied by the user which will be called later
char message[40] = "PLEASE GET MILK AT THE SHOPS"; // message to be encrypted later 

substitution(message, cipher); // call the function whilst in the int main with the 'message' and 'cipher' to ensure they are reused in the encryption function

return 0;
}
    
void substitution(char *message, char *cipher)
{
int i=0; // declare both variables as 0 so the compiler knows to start and the first charachter of the message and of the alphabet
int j=0;

while(message[i]!= 0) // telling the compiler to follow the following procedure when the message to be encrypted is not a NULL or 0 charachter
{
    if (message[i]>64 &&message[i]<91) // ensure that the ASCII charachter of the letter is an UPPER CASE LETTER between 65 and 91
    { 
       while (message[i]!=cipher[j]) // main encryption key within this while statement 
       {
          
               j++;   
        }
             j=message[i]-65;
             // the cipher message is not indentical but merely the same minus 65
            message[i]=cipher[j];
    }
        i++;
        j=0; // incrementing the function and stating j=0 ensures the comipler does not end up in an infinite loop
}
puts(message); // essentially the print function which pushes the now encrypted message to the print function in the int main. 
}
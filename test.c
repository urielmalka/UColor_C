#include "color.h"

int main() {
    
    printc(RED,"RED color!\n");
    printc(GREEN,"GREEN!\n");
    printc(YELLOW,"YELLOW color!\n");
    printc(BLUE,"BLUE color!\n");
    printc(MAGENTA,"MAGENTA color!\n");
    printc(CYAN,"CYAN color!\n");
    printc(WHITE,"WHITE color!\n\n");
    
    printcb(RED,"Bold RED color!\n");
    printcb(GREEN,"Bold GREEN!\n");
    printcb(YELLOW,"Bold YELLOW color!\n");
    printcb(BLUE,"Bold BLUE color!\n");
    printcb(MAGENTA,"Bold MAGENTA color!\n");
    printcb(CYAN,"Bold CYAN color!\n");
    printcb(WHITE,"Bold WHITE color!\n\n");
    
    printci(RED,"Italic RED color!\n");
    printci(GREEN,"Italic GREEN!\n");
    printci(YELLOW,"Italic YELLOW color!\n");
    printci(BLUE,"Italic BLUE color!\n");
    printci(MAGENTA,"Italic MAGENTA color!\n");
    printci(CYAN,"Italic CYAN color!\n");
    printci(WHITE,"Italic WHITE color!\n\n");
    
    int a = 7;
    int b = 6;
  
    char *msg1 = "Hello World!";
    char *msg2 = "By Uriel Malka.";
    
    printc(RED,"%d + %d = %d\n",a,b,a+b);
    printcb(GREEN,"%s\n",msg1);
    printci(YELLOW,"%s\n",msg2);
    printcu(BLUE,"%s\n",msg2);
    printcd(MAGENTA,"%s\n",msg2);
    printcm(CYAN,"%s\n",msg2);

    return 0;
}



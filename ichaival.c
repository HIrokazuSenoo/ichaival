
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <curses.h>


int main(int argc,char *argv[]){
  
  setlocale(LC_ALL,"");
  initscr();
  int myx = 20;
  int myy = 40;
  newwin(40,40,0,0);
  char gameflag = 1;
  short int com = NULL;
 
  for(;;){
    if(!gameflag)break;
    com = getchar();
    switch(com){
    case 'j':
      myx--;
      clear();
      move(myx,myy);
      addch('@');
      refresh();
      break;
    case 'k':
      myx++;
      clear();
      move(myx,myy);
      addch('@');
      refresh();
      break;
    case 'h':
      myy--;
      clear();
      move(myx,myy);
      addch('@');
      refresh();
      break;
    case 'l':
      myy++;
      clear();
      move(myx,myy);
      addch('@');
      refresh();
      break;
    case '!':
      gameflag = 0;
    default:
      ;
      break;
    }
    refresh();
    addch('@');
  }
  
  return 0;
}

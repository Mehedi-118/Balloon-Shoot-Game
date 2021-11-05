#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

//Variables for different menu screens
int LOGO=1,MENU_SHOW=0,NEW_GAME=0,HIGH_SCORE=0,HOW_TO_PLAY,ABOUT=0;

//shows the game logo screen

void logo_screen(void) {
    //the bmp picture of logo screen

	iShowBMP(0,0,"images\\MENU_Start.bmp");
}

//shows the game menu

void show_menu(void) {
    //the bmp picture of the game menu
    iShowBMP(0,0,"images\\MENU_Pic.bmp");

}

#endif // MENU_H_INCLUDED

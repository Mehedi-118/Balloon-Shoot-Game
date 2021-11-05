#include"iGraphics.h"
#include"bitmap_loader.h"
#include"menu.h"
#include"newgame.h"
#define SCR_HEIGHT 720
#define SCR_WIDTH 1080




void iDraw()

{

	iClear();
	if(LOGO==1) {
		logo_screen();
	}
	if(MENU_SHOW==1) {
		show_menu();
	}
	if(NEW_GAME==1) {
		Newgame A;
		A.loadgame(A);
	}



}

void iMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		if(LOGO==1) {
			LOGO=0;
			MENU_SHOW=1;
		}
		if((mx>=63 && mx<=305)&&(my>=511 && my<=556)) {
			MENU_SHOW=0;
			NEW_GAME=1;
		}
		if((mx>=60 && mx<=313)&&(my>=428 && my<=477)) {
			MENU_SHOW=0;
			HIGH_SCORE=1;
		}
		if((mx>=57 && mx<=352)&&(my>=347 && my<=394)) {
			MENU_SHOW=0;
			HOW_TO_PLAY=1;
		}
		if((mx>=56 && mx<=348)&&(my>=260 && my<=313)) {
			MENU_SHOW=0;
			ABOUT=1;
		}
		if((mx>=54 && mx<=156)&&(my>=190 && my<=237)) {
			exit(0);
		}


}
if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
{

}
}

void iKeyboard(unsigned char key)
{
if(key == 'q')
{

}

}

void iSpecialKeyboard(unsigned char key)
{
if(key == GLUT_KEY_END)
{
exit(0);
}

}
int main() {

	iSetTimer(2,movepic);
	iSetTimer(1,moveBalloon);
	iInitialize(SCR_WIDTH,SCR_HEIGHT, "SHOOT THE BALLOONS");
	return 0;
}
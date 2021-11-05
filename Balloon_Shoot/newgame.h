#ifndef NEWGAME_H_INCLUDED
#define NEWGAME_H_INCLUDED

//the structure contains functions of newgame
typedef struct Newgame Newgame;
//various variables of the newgame
int move_x=0,balloon_y=0;
struct Newgame {
    Newgame() {
        ;
    }



    //void stillbackground() function shows the moving  background in the game
    void stillbackground(void) {
        //This picture shows the upper still background
        iShowBMP(0,120,"images\\Background_Stillpic.bmp");
    }
    //void movingbackground shows two same picture end to end
    void movingbackground(void) {
        //shows first image
        iShowBMP(move_x,0,"images\\river_flow_3.bmp");
        //shows second picture in the end of first image
        iShowBMPAlternative2(move_x-1070,0,"images\\river_flow_3.bmp",255);

    }
    //void balloonSample(void) shows the balloon in certain position
    void balloonsample(void) {
        iShowBMP(540,balloon_y,"images\\balloonsample2.bmp");
    }


    //void loadgame(NEWGAME A) contains all the aspects of newgame and takes as Newgame variable for perimeter

    void loadgame(Newgame A) {
        A.stillbackground();
        A.movingbackground();
        A.balloonsample();

    }
};
//void movepic() moves the position of the moving background image
void movepic(void) {
        move_x+=10;
        if(move_x==1080) {
            move_x=0;
        }

}
//moves the position of sample balloon
void moveBalloon(void) {
        balloon_y+=7;
        if(balloon_y==720) {
            balloon_y==0;
        }
}



#endif // NEWGAME_H_INCLUDED

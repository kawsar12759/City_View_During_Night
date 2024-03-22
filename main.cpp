#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<stdlib.h>
#include<math.h>
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100.0, 0.0, 100.0, -1.0, 1.0);

}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0; i<=100; i++)
    {
        float angle=2.0f*3.1416f*i/100.0;
        float x=rx* cos(angle);
        float y=ry*sin(angle);
        glVertex2f(cx+x,cy+y);
    }
    glEnd();
}
float ssl=0.0,ts=0.05,tm=-40,wm=0,bos=0.009,bm=35,bos1=0.03,bm1=170,trs=0.015,trm=0,trs1=0.015,trm1=-30,bs=0.02,bsm=20,bs1=0.025,bsm1=0,bs2=0.025,bsm2=-100,cs=0.035,cm=-80,cs1=0.04,cm1=-60,pm=35,ps=0.035;
float strs,strs1,sbs,sbs1,sbs2,scs,scs1;
void MouseClick(int button, int state, int x, int y)
{
    switch(button)
    {
    case GLUT_LEFT_BUTTON:
        trs+=0.01;
        trs1+=0.01;
        cs+=0.01;
        cs1+=0.01;
        bs+=0.01;
        bs1+=0.01;
        bs2+=0.01;
        break;
    case GLUT_RIGHT_BUTTON:
        if(trs<=0.01 || trs1<=0.01 || cs<=0.01 || cs1<=0.01 || bs<=0.01 || bs1<=0.01 || bs2<=0.01)
        {
            break;
        }
        trs-=0.01;
        trs1-=0.01;
        cs-=0.01;
        cs1-=0.01;
        bs-=0.01;
        bs1-=0.01;
        bs2-=0.01;
        break;

    case GLUT_MIDDLE_BUTTON:
        if(bos==0)
        {
            trs=0.015;
            trs1=0.015;
            bs=0.02;
            bs1=0.025;
            bs2=0.025;
            cs=0.035;
            cs1=0.04;
            bos=0.009;
            bos1=0.03;
            ps=0.035;
            ts=0.05;
            break;
        }
        trs=0.0;
        trs1=0.0;
        cs=0.0;
        cs1=0.0;
        bs=0.0;
        bs1=0.0;
        bs2=0.0;
        ts=0.0;
        bos=0.0;
        bos1=0.0;
        ps=0.0;
        break;
    }

}
void KeyboardButton(unsigned char key, int x, int y)
{
    switch(key)
    {

    case 's':

        if(trs==0)
        {
            trs=strs;
            trs1=strs1;
            bs=sbs;
            bs1=sbs1;
            bs2=sbs2;
            cs=scs;
            cs1=scs1;
            break;
        }
        strs=trs;
        strs1=trs1;
        sbs=bs;
        sbs1=bs1;
        sbs2=bs2;
        scs=cs;
        scs1=cs1;

        trs=0.0;
        trs1=0.0;
        cs=0.0;
        cs1=0.0;
        bs=0.0;
        bs1=0.0;
        bs2=0.0;
        break;


    case 'r':

        trs=0.015;
        trs1=0.015;
        bs=0.02;
        bs1=0.025;
        bs2=0.025;
        cs=0.035;
        cs1=0.04;
        break;

    }
}

void SpecialKey(int key, int x, int y)
{
    switch(key)
    {

    case GLUT_KEY_DOWN:
        ts=0;
        break;
    case GLUT_KEY_LEFT:
        if(ts<=0.02)
        {
            break;
        }
        ts-=0.02;
        break;
    case GLUT_KEY_RIGHT:
        ts+=0.02;
        break;
    }
    glutPostRedisplay();
}
void Draw()
{

    ///////////ROAD

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.08,0.08,0.08);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(100,0);
    glVertex2f(100,15);
    glVertex2f(0,15);
    glEnd();



    //////////ROAD WHITE LINE

    int rt=0;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();
    rt+=7;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(rt+1,7.3);
    glVertex2f(rt+5,7.3);
    glVertex2f(rt+5,7.7);
    glVertex2f(rt+1,7.7);
    glEnd();



    //////ROAD-SIDE

    glColor3f(0.19,0.19,0.19);
    glBegin(GL_POLYGON);
    glVertex2f(0,15);
    glVertex2f(100,15);
    glVertex2f(100,16);
    glVertex2f(0,16);
    glEnd();


    //////RIVER
    glColor3f(0.0,0.4,0.7);
    glBegin(GL_POLYGON);
    glVertex2f(0,16);
    glVertex2f(100,16);
    glVertex2f(100,30);
    glVertex2f(0,30);
    glEnd();


    /////;/SKY

    float sg=0;
    glColor3f(0.92,0.92,0.87);
    circle(3,4,12,91);
    glColor3f(0,0,0);
    circle(3,4.1,13.4,92);
    glColor3f(0.95,0.95,0.92);
    for(int i=0; i<19; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(sg+2+ssl,93);
        glVertex2f(sg+2.2-ssl,93);
        glVertex2f(sg+2.2-ssl,93.3);
        glVertex2f(sg+2+ssl,93.3);
        glEnd();
        sg+=8;
    }
    sg=2;
    for(int i=0; i<19; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(sg+2+ssl,97);
        glVertex2f(sg+2.2-ssl,97);
        glVertex2f(sg+2.2-ssl,97.3);
        glVertex2f(sg+2+ssl,97.3);
        glEnd();
        sg+=11;
    }
    sg=4;
    for(int i=0; i<19; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(sg+0+ssl,88);
        glVertex2f(sg+0.2-ssl,88);
        glVertex2f(sg+0.2-ssl,88.3);
        glVertex2f(sg+0+ssl,88.3);
        glEnd();
        sg+=7;
    }
    sg=2;
    for(int i=0; i<19; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(sg+3+ssl,83);
        glVertex2f(sg+3.2-ssl,83);
        glVertex2f(sg+3.2-ssl,83.3);
        glVertex2f(sg+3+ssl,83.3);
        glEnd();
        sg+=9;
    }
    sg=2;
    for(int i=0; i<19; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(sg+3+ssl,78);
        glVertex2f(sg+3.2-ssl,78);
        glVertex2f(sg+3.2-ssl,78.3);
        glVertex2f(sg+3+ssl,78.3);
        glEnd();
        sg+=8;
    }
    sg=2;
    for(int i=0; i<19; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(sg+3+ssl,73);
        glVertex2f(sg+3.2-ssl,73);
        glVertex2f(sg+3.2-ssl,73.3);
        glVertex2f(sg+3+ssl,73.3);
        glEnd();
        sg+=10;
    }
    sg=5;
    for(int i=0; i<19; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(sg+3+ssl,70);
        glVertex2f(sg+3.2-ssl,70);
        glVertex2f(sg+3.2-ssl,70.3);
        glVertex2f(sg+3+ssl,70.3);
        glEnd();
        sg+=7;
    }
    if(ssl==0.0)
    {
        ssl=0.06;
    }
    else{
        ssl=0.0;
    }
    glutPostRedisplay();


    ////////PLANE

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(pm+80,88);
    glVertex2f(pm+91,88);
    glVertex2f(pm+91,92);
    glVertex2f(pm+80,92);
    glEnd();
    circle(4,2.1,pm+81.7,90);
    circle(4,2.1,pm+88.6,89.9);
    glBegin(GL_POLYGON);
    glVertex2f(pm+88,89.25);
    glVertex2f(pm+92.6,89.25);
    glVertex2f(pm+95,95.5);
    glVertex2f(pm+93.6,95.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(pm+87.5,85);
    glVertex2f(pm+89,85);
    glVertex2f(pm+87.5,88);
    glVertex2f(pm+85,88);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(pm+85,92);
    glVertex2f(pm+87.5,92);
    glVertex2f(pm+89.3,95);
    glVertex2f(pm+88,95);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(pm+77.9,89.2);
    glVertex2f(pm+92.5,89.2);
    glVertex2f(pm+92.8,89.7);
    glVertex2f(pm+77.9,89.7);
    glEnd();
    glColor3f( 0,0.31,0);
    glBegin(GL_POLYGON);
    glVertex2f(pm+78.6,88.4);
    glVertex2f(pm+92,88.4);
    glVertex2f(pm+92,88.9);
    glVertex2f(pm+78.3,88.9);
    glEnd();

    glColor3f(0.13,0.13,0.13);
    glBegin(GL_POLYGON);
    glVertex2f(pm+78,89.6);
    glVertex2f(pm+79.7,89.6);
    glVertex2f(pm+79.7,91.1);
    glVertex2f(pm+78,91.1);
    glEnd();
    circle(0.4,0.5,pm+78,90.2);

    circle(.6,.6,pm+81.5,90.6);
    circle(.6,.6,pm+83,90.6);
    circle(.6,.6,pm+84.5,90.6);
    circle(.6,.6,pm+86,90.6);
    circle(.6,.6,pm+87.5,90.6);
    circle(.6,.6,pm+89,90.6);

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(pm+92.8,94.6);
    glVertex2f(pm+93.6,95.5);
    glVertex2f(pm+95,95.5);
    glVertex2f(pm+93.7,92);
    glEnd();

    glColor3f( 0,0.31,0);
    glBegin(GL_POLYGON);
    glVertex2f(pm+92,93.9);
    glVertex2f(pm+92.5,94.5);
    glVertex2f(pm+93.5,91.4);
    glVertex2f(pm+93.1,90.5);
    glEnd();

    if(pm>-120)
    {
        pm-=ps;
    }
    else
    {
        pm=35;
    }

    glutPostRedisplay();



    //////BUILDING 1 (ORANGE)
    glColor3f(1,0.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(82,38);
    glVertex2f(100,38);
    glVertex2f(100,57);
    glVertex2f(82,57);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(84,57);
    glVertex2f(98,57);
    glVertex2f(98,70);
    glVertex2f(84,70);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(86,66);
    glVertex2f(96,66);
    glVertex2f(96,79);
    glVertex2f(86,79);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(88.5,79);
    glVertex2f(93.5,79);
    glVertex2f(93.5,86);
    glVertex2f(88.5,86);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(90.9,86);
    glVertex2f(91.1,86);
    glVertex2f(91.1,93);
    glVertex2f(90.9,93);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(83,39);
    glVertex2f(99,39);
    glVertex2f(99,41);
    glVertex2f(83,41);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(83,42.5);
    glVertex2f(99,42.5);
    glVertex2f(99,44.5);
    glVertex2f(83,44.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(83,46);
    glVertex2f(99,46);
    glVertex2f(99,48);
    glVertex2f(83,48);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(83,49.5);
    glVertex2f(99,49.5);
    glVertex2f(99,51.5);
    glVertex2f(83,51.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(83,53);
    glVertex2f(99,53);
    glVertex2f(99,55);
    glVertex2f(83,55);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(85,58.5);
    glVertex2f(97,58.5);
    glVertex2f(97,60.5);
    glVertex2f(85,60.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(85,62);
    glVertex2f(97,62);
    glVertex2f(97,64);
    glVertex2f(85,64);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(85,65.5);
    glVertex2f(97,65.5);
    glVertex2f(97,67.5);
    glVertex2f(85,67.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(87,71.5);
    glVertex2f(95,71.5);
    glVertex2f(95,73.5);
    glVertex2f(87,73.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(87,75);
    glVertex2f(95,75);
    glVertex2f(95,77);
    glVertex2f(87,77);
    glEnd();


    /////////BUILDING2 (WHITE)
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(94,38);
    glVertex2f(98,38);
    glVertex2f(98,46);
    glVertex2f(94,46);
    glEnd();
    glColor3f(0.6,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2f(94.4,38);
    glVertex2f(95.5,38);
    glVertex2f(95.5,41.5);
    glVertex2f(94.4,41.5);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(94.3,42.8);
    glVertex2f(95.8,42.8);
    glVertex2f(95.8,45);
    glVertex2f(94.3,45);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(96.3,42.8);
    glVertex2f(97.8,42.8);
    glVertex2f(97.8,45);
    glVertex2f(96.3,45);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(96.3,38.8);
    glVertex2f(97.8,38.8);
    glVertex2f(97.8,41);
    glVertex2f(96.3,41);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(94,46);
    glVertex2f(98,46);
    glVertex2f(96,50);
    glEnd();

    //BUILDING3 (bRICK COLOR)
    glColor3f(0.8,0,0.13);
    glBegin(GL_POLYGON);
    glVertex2f(86,38);
    glVertex2f(93,38);
    glVertex2f(93,51);
    glVertex2f(86,51);
    glEnd();
    glColor3f(1,0.84,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,44);
    glVertex2f(93,44);
    glVertex2f(93,45);
    glVertex2f(86,45);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(85.5,51);
    glVertex2f(93.5,51);
    glVertex2f(93.5,52);
    glVertex2f(85.5,52);
    glEnd();
    glColor3f(0,0.84,1);
    glBegin(GL_POLYGON);
    glVertex2f(88.8,38);
    glVertex2f(90.2,38);
    glVertex2f(90.2,43);
    glVertex2f(88.8,43);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(86.5,41);
    glVertex2f(88,41);
    glVertex2f(88,43);
    glVertex2f(86.5,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(86.5,38.5);
    glVertex2f(88,38.5);
    glVertex2f(88,40.5);
    glVertex2f(86.5,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(91,41);
    glVertex2f(92.5,41);
    glVertex2f(92.5,43);
    glVertex2f(91,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(91,38.5);
    glVertex2f(92.5,38.5);
    glVertex2f(92.5,40.5);
    glVertex2f(91,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(86.5,46);
    glVertex2f(88.6,46);
    glVertex2f(88.6,50);
    glVertex2f(86.5,50);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(90.4,46);
    glVertex2f(92.5,46);
    glVertex2f(92.5,50);
    glVertex2f(90.4,50);
    glEnd();



    ///////building4(BLUE)
    glColor3f(0,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(74,38);
    glVertex2f(81.5,38);
    glVertex2f(81.5,62);
    glVertex2f(74,62);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(74.4,62);
    glVertex2f(81.1,62);
    glVertex2f(81.1,64);
    glVertex2f(74.4,64);
    glEnd();
    glColor3f(0,0.4,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(74,45);
    glVertex2f(81.5,45);
    glVertex2f(81.5,48);
    glVertex2f(74,48);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(74,49);
    glVertex2f(81.5,49);
    glVertex2f(81.5,52);
    glVertex2f(74,52);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(74,53);
    glVertex2f(81.5,53);
    glVertex2f(81.5,56);
    glVertex2f(74,56);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(74,57);
    glVertex2f(81.5,57);
    glVertex2f(81.5,60);
    glVertex2f(74,60);
    glEnd();


    /////////building5(BLUE)
    glColor3f(0,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(55,38);
    glVertex2f(63.5,38);
    glVertex2f(63.5,74);
    glVertex2f(55,74);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(55.4,74);
    glVertex2f(63.1,74);
    glVertex2f(63.1,76);
    glVertex2f(55.4,76);
    glEnd();
    glColor3f(0,0.4,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(55,49);
    glVertex2f(63.5,49);
    glVertex2f(63.5,52);
    glVertex2f(55,52);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(55,53);
    glVertex2f(63.5,53);
    glVertex2f(63.5,56);
    glVertex2f(55,56);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(55,57);
    glVertex2f(63.5,57);
    glVertex2f(63.5,60);
    glVertex2f(55,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(55,61);
    glVertex2f(63.5,61);
    glVertex2f(63.5,64);
    glVertex2f(55,64);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(55,65);
    glVertex2f(63.5,65);
    glVertex2f(63.5,68);
    glVertex2f(55,68);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(55,69);
    glVertex2f(63.5,69);
    glVertex2f(63.5,72);
    glVertex2f(55,72);
    glEnd();


    ////////BUILDING6 (ASH)
    glColor3f(0.85,0.82,0.87);
    glBegin(GL_POLYGON);
    glVertex2f(63,38);
    glVertex2f(73.3,38);
    glVertex2f(73.3,72);
    glVertex2f(63,72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(65,72);
    glVertex2f(70.5,72);
    glVertex2f(70.5,80);
    glVertex2f(65,80);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(64,72);
    glVertex2f(65,72);
    glVertex2f(65,77);
    glVertex2f(64,77);
    glEnd();
    glColor3f( 0.76,0.74,0.78);
    glBegin(GL_POLYGON);
    glVertex2f(70.5,72);
    glVertex2f(71,72);
    glVertex2f(71,80);
    glVertex2f(70.5,80);
    glEnd();
    glColor3f(0.85,0.82,0.87);
    glBegin(GL_POLYGON);
    glVertex2f(71,72);
    glVertex2f(71.5,72);
    glVertex2f(71.5,77);
    glVertex2f(71,77);
    glEnd();
    glColor3f( 0.76,0.74,0.78);
    glBegin(GL_POLYGON);
    glVertex2f(71.5,72);
    glVertex2f(72.3,72);
    glVertex2f(72.3,77);
    glVertex2f(71.5,77);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(73.3,38);
    glVertex2f(73.8,38);
    glVertex2f(73.8,72);
    glVertex2f(73.3,72);
    glEnd();
    int wg=0;
    for(int i=0; i<5; i++,wg-=6)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(63.5,wg+66);
        glVertex2f(64.5,wg+66);
        glVertex2f(64.5,wg+70.5);
        glVertex2f(63.5,wg+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(65,wg+66);
        glVertex2f(66,wg+66);
        glVertex2f(66,wg+70.5);
        glVertex2f(65,wg+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(67,wg+66);
        glVertex2f(68,wg+66);
        glVertex2f(68,wg+70.5);
        glVertex2f(67,wg+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(68.5,wg+66);
        glVertex2f(69.5,wg+66);
        glVertex2f(69.5,wg+70.5);
        glVertex2f(68.5,wg+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(70.5,wg+66);
        glVertex2f(71.5,wg+66);
        glVertex2f(71.5,wg+70.5);
        glVertex2f(70.5,wg+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(72,wg+66);
        glVertex2f(73,wg+66);
        glVertex2f(73,wg+70.5);
        glVertex2f(72,wg+70.5);
        glEnd();
    }


    /////BUILDING9 (RED)
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(71,38);
    glVertex2f(77,38);
    glVertex2f(77,55);
    glVertex2f(71,55);
    glEnd();
    glColor3f(0.75,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(77,38);
    glVertex2f(77.4,38);
    glVertex2f(77.4,54.7);
    glVertex2f(77,55);
    glEnd();
    int wg6=0;
    for(int i=0; i<3; i++,wg6-=5)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(71.5,wg6+50);
        glVertex2f(72.3,wg6+50);
        glVertex2f(72.3,wg6+54);
        glVertex2f(71.5,wg6+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(72.6,wg6+50);
        glVertex2f(73.4,wg6+50);
        glVertex2f(73.4,wg6+54);
        glVertex2f(72.6,wg6+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(74.4,wg6+50);
        glVertex2f(75.2,wg6+50);
        glVertex2f(75.2,wg6+54);
        glVertex2f(74.4,wg6+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(75.5,wg6+50);
        glVertex2f(76.3,wg6+50);
        glVertex2f(76.3,wg6+54);
        glVertex2f(75.5,wg6+54);
        glEnd();
    }

    ////////BUILDING8 (PURPLR)
    glColor3f(0.75,0.38,0.94);
    glBegin(GL_POLYGON);
    glVertex2f(62,38);
    glVertex2f(69,38);
    glVertex2f(69,51);
    glVertex2f(62,51);
    glEnd();
    glColor3f(0.21,0.11,0.27);
    glBegin(GL_POLYGON);
    glVertex2f(62,44);
    glVertex2f(69,44);
    glVertex2f(69,45);
    glVertex2f(62,45);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(61.5,51);
    glVertex2f(69.5,51);
    glVertex2f(69.5,52);
    glVertex2f(61.5,52);
    glEnd();
    glColor3f(0,0.84,1);
    glBegin(GL_POLYGON);
    glVertex2f(64.8,38);
    glVertex2f(66.2,38);
    glVertex2f(66.2,43);
    glVertex2f(64.8,43);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(62.5,41);
    glVertex2f(64,41);
    glVertex2f(64,43);
    glVertex2f(62.5,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(62.5,38.5);
    glVertex2f(64,38.5);
    glVertex2f(64,40.5);
    glVertex2f(62.5,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(67,41);
    glVertex2f(68.5,41);
    glVertex2f(68.5,43);
    glVertex2f(67,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(67,38.5);
    glVertex2f(68.5,38.5);
    glVertex2f(68.5,40.5);
    glVertex2f(67,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(62.5,46);
    glVertex2f(64.6,46);
    glVertex2f(64.6,50);
    glVertex2f(62.5,50);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(66.4,46);
    glVertex2f(68.5,46);
    glVertex2f(68.5,50);
    glVertex2f(66.4,50);
    glEnd();

    ///////BUILDING9 (NAVY BLUE)
    glColor3f(0,0.15,0.45);
    glBegin(GL_POLYGON);
    glVertex2f(44,38);
    glVertex2f(58,38);
    glVertex2f(58,50);
    glVertex2f(44,50);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(46,50);
    glVertex2f(56,50);
    glVertex2f(56,61);
    glVertex2f(46,61);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(48,60);
    glVertex2f(54,60);
    glVertex2f(54,69);
    glVertex2f(48,69);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(49,68);
    glVertex2f(53,68);
    glVertex2f(53,74);
    glVertex2f(49,74);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(50.9,74);
    glVertex2f(51.1,74);
    glVertex2f(51.1,80);
    glVertex2f(50.9,80);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(45,39);
    glVertex2f(57,39);
    glVertex2f(57,41);
    glVertex2f(45,41);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(45,42.5);
    glVertex2f(57,42.5);
    glVertex2f(57,44.5);
    glVertex2f(45,44.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(45,46);
    glVertex2f(57,46);
    glVertex2f(57,48);
    glVertex2f(45,48);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(47,51);
    glVertex2f(55,51);
    glVertex2f(55,53);
    glVertex2f(47,53);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(47,54.5);
    glVertex2f(55,54.5);
    glVertex2f(55,56.5);
    glVertex2f(47,56.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(47,58);
    glVertex2f(55,58);
    glVertex2f(55,60);
    glVertex2f(47,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(49,62);
    glVertex2f(53,62);
    glVertex2f(53,64);
    glVertex2f(49,64);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(49,65.5);
    glVertex2f(53,65.5);
    glVertex2f(53,67.5);
    glVertex2f(49,67.5);
    glEnd();


    /////////BUILDING10 (LIGHT BROWN)
    glColor3f(0.75,0.62,0.38);
    glBegin(GL_POLYGON);
    glVertex2f(48,38);
    glVertex2f(59.5,38);
    glVertex2f(59.5,60);
    glVertex2f(48,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(50.2,60);
    glVertex2f(58,60);
    glVertex2f(58,62);
    glVertex2f(50.2,62);
    glEnd();
    glColor3f(0.56,0.47,0.28);
    glBegin(GL_POLYGON);
    glVertex2f(59.5,38);
    glVertex2f(60,38);
    glVertex2f(60,60);
    glVertex2f(59.5,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(58,60);
    glVertex2f(58.5,60);
    glVertex2f(58.5,62);
    glVertex2f(58,62);
    glEnd();
    int wg10=-12;
    for(int i=0; i<3; i++,wg10-=6)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(49,wg10+66);
        glVertex2f(50,wg10+66);
        glVertex2f(50,wg10+70.5);
        glVertex2f(49,wg10+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(50.5,wg10+66);
        glVertex2f(51.5,wg10+66);
        glVertex2f(51.5,wg10+70.5);
        glVertex2f(50.5,wg10+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(52.5,wg10+66);
        glVertex2f(53.5,wg10+66);
        glVertex2f(53.5,wg10+70.5);
        glVertex2f(52.5,wg10+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(54,wg10+66);
        glVertex2f(55,wg10+66);
        glVertex2f(55,wg10+70.5);
        glVertex2f(54,wg10+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(56,wg10+66);
        glVertex2f(57,wg10+66);
        glVertex2f(57,wg10+70.5);
        glVertex2f(56,wg10+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(57.5,wg10+66);
        glVertex2f(58.5,wg10+66);
        glVertex2f(58.5,wg10+70.5);
        glVertex2f(57.5,wg10+70.5);
        glEnd();
    }


    /////////BUILDING11(BLUE)
    glColor3f(0,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(34,38);
    glVertex2f(40,38);
    glVertex2f(40,68);
    glVertex2f(34,68);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(35,68);
    glVertex2f(39,68);
    glVertex2f(39,70);
    glVertex2f(35,70);
    glEnd();
    glColor3f(0,0.4,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(34,49);
    glVertex2f(40,49);
    glVertex2f(40,52);
    glVertex2f(34,52);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(34,53);
    glVertex2f(40,53);
    glVertex2f(40,56);
    glVertex2f(34,56);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(34,57);
    glVertex2f(40,57);
    glVertex2f(40,60);
    glVertex2f(34,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(34,61);
    glVertex2f(40,61);
    glVertex2f(40,64);
    glVertex2f(34,64);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(34,65);
    glVertex2f(40,65);
    glVertex2f(40,68);
    glVertex2f(34,68);
    glEnd();


    ///////BUILDING12 (WHITE)
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(37,38);
    glVertex2f(46.5,38);
    glVertex2f(46.5,58);
    glVertex2f(37,58);
    glEnd();
    glColor3f( 0.76,0.76,0.73);
    glBegin(GL_POLYGON);
    glVertex2f(46.5,38);
    glVertex2f(47,38);
    glVertex2f(47,58);
    glVertex2f(46.5,58);
    glEnd();
    int lg=0;
    for(int i=0; i<9; i++,lg+=01)
    {
        glColor3f( 0.76,0.76,0.73);
        glBegin(GL_POLYGON);
        glVertex2f(lg+37.5,38);
        glVertex2f(lg+38,38);
        glVertex2f(lg+38,57);
        glVertex2f(lg+37.5,57);
        glEnd();
    }
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(38,58);
    glVertex2f(45.5,58);
    glVertex2f(45.5,74);
    glVertex2f(38,74);
    glEnd();
    glColor3f( 0.76,0.76,0.73);
    glBegin(GL_POLYGON);
    glVertex2f(45.5,58);
    glVertex2f(46,58);
    glVertex2f(46,74);
    glVertex2f(45.5,74);
    glEnd();
    lg=0;
    for(int i=0; i<7; i++,lg+=01)
    {
        glColor3f( 0.76,0.76,0.73);
        glBegin(GL_POLYGON);
        glVertex2f(lg+38.5,59);
        glVertex2f(lg+39,59);
        glVertex2f(lg+39,73);
        glVertex2f(lg+38.5,73);
        glEnd();
    }
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(40,74);
    glVertex2f(43.5,74);
    glVertex2f(43.5,85);
    glVertex2f(40,85);
    glEnd();
    glColor3f( 0.76,0.76,0.73);
    glBegin(GL_POLYGON);
    glVertex2f(43.5,74);
    glVertex2f(43.8,74);
    glVertex2f(43.8,85);
    glVertex2f(43.5,85);
    glEnd();
    lg=0;
    for(int i=0; i<3; i++,lg+=01)
    {
        glColor3f( 0.76,0.76,0.73);
        glBegin(GL_POLYGON);
        glVertex2f(lg+40.5,75);
        glVertex2f(lg+41,75);
        glVertex2f(lg+41,84);
        glVertex2f(lg+40.5,84);
        glEnd();
    }
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(40.25,85);
    glVertex2f(43.25,85);
    glVertex2f(41.75,90);
    glEnd();


    ////////BUILDING13 (BLUE)
    glColor3f(0,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(25,38);
    glVertex2f(33.5,38);
    glVertex2f(33.5,79);
    glVertex2f(25,79);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(26,79);
    glVertex2f(32.5,79);
    glVertex2f(32.5,81);
    glVertex2f(26,81);
    glEnd();
    glColor3f(0,0.4,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(25,49);
    glVertex2f(33.5,49);
    glVertex2f(33.5,52);
    glVertex2f(25,52);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25,53);
    glVertex2f(33.5,53);
    glVertex2f(33.5,56);
    glVertex2f(25,56);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25,57);
    glVertex2f(33.5,57);
    glVertex2f(33.5,60);
    glVertex2f(25,60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25,61);
    glVertex2f(33.5,61);
    glVertex2f(33.5,64);
    glVertex2f(25,64);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25,65);
    glVertex2f(33.5,65);
    glVertex2f(33.5,68);
    glVertex2f(25,68);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25,69);
    glVertex2f(33.5,69);
    glVertex2f(33.5,72);
    glVertex2f(25,72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25,73);
    glVertex2f(33.5,73);
    glVertex2f(33.5,76);
    glVertex2f(25,76);
    glEnd();



    ///////BUILDING14 (GREEN TALL)
    glColor3f(0.35,0.7,0);
    glBegin(GL_POLYGON);
    glVertex2f(29,38);
    glVertex2f(35,38);
    glVertex2f(35,72);
    glVertex2f(29,72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(30,72);
    glVertex2f(34,72);
    glVertex2f(34,74);
    glVertex2f(30,74);
    glEnd();
    glColor3f(0.26,0.53,0);
    glBegin(GL_POLYGON);
    glVertex2f(35,38);
    glVertex2f(35.5,38);
    glVertex2f(35.5,72);
    glVertex2f(35,72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(34,72);
    glVertex2f(34.5,72);
    glVertex2f(34.5,74);
    glVertex2f(34,74);
    glEnd();
    int wg14=17;
    for(int i=0; i<6; i++,wg14-=5)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(29.5,wg14+50);
        glVertex2f(30,wg14+50);
        glVertex2f(30,wg14+53);
        glVertex2f(29.5,wg14+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(30.3,wg14+50);
        glVertex2f(30.8,wg14+50);
        glVertex2f(30.8,wg14+53);
        glVertex2f(30.3,wg14+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(31.3,wg14+50);
        glVertex2f(31.8,wg14+50);
        glVertex2f(31.8,wg14+53);
        glVertex2f(31.3,wg14+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(32.1,wg14+50);
        glVertex2f(32.6,wg14+50);
        glVertex2f(32.6,wg14+53);
        glVertex2f(32.1,wg14+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(33.1,wg14+50);
        glVertex2f(33.6,wg14+50);
        glVertex2f(33.6,wg14+53);
        glVertex2f(33.1,wg14+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(33.9,wg14+50);
        glVertex2f(34.4,wg14+50);
        glVertex2f(34.4,wg14+53);
        glVertex2f(33.9,wg14+53);
        glEnd();
    }


    ///////BUILDING15 (PINK)
    glColor3f(1,0.3,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(18,38);
    glVertex2f(26,38);
    glVertex2f(26,74);
    glVertex2f(18,74);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(19,74);
    glVertex2f(25,74);
    glVertex2f(25,78);
    glVertex2f(19,78);
    glEnd();
    glColor3f(0.75,0.23,0.66);
    glBegin(GL_POLYGON);
    glVertex2f(26,38);
    glVertex2f(26.5,38);
    glVertex2f(26.5,74);
    glVertex2f(26,74);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25,74);
    glVertex2f(25.5,74);
    glVertex2f(25.5,78);
    glVertex2f(25,78);
    glEnd();
    int wg15=17.5;
    for(int i=0; i<4; i++,wg15-=7)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(19,wg15+50);
        glVertex2f(19.6,wg15+50);
        glVertex2f(19.6,wg15+55);
        glVertex2f(19,wg15+55);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(20,wg15+50);
        glVertex2f(20.6,wg15+50);
        glVertex2f(20.6,wg15+55);
        glVertex2f(20,wg15+55);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(21.3,wg15+50);
        glVertex2f(21.9,wg15+50);
        glVertex2f(21.9,wg15+55);
        glVertex2f(21.3,wg15+55);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(22.3,wg15+50);
        glVertex2f(22.9,wg15+50);
        glVertex2f(22.9,wg15+55);
        glVertex2f(22.3,wg15+55);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(23.6,wg15+50);
        glVertex2f(24.2,wg15+50);
        glVertex2f(24.2,wg15+55);
        glVertex2f(23.6,wg15+55);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(24.6,wg15+50);
        glVertex2f(25.2,wg15+50);
        glVertex2f(25.2,wg15+55);
        glVertex2f(24.6,wg15+55);
        glEnd();
    }


    //////BUILDING16(PURPLE)
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(28,38);
    glVertex2f(32.3,38);
    glVertex2f(32.3,55);
    glVertex2f(28,55);
    glEnd();
    glColor3f(0.75,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(32.3,38);
    glVertex2f(32.6,38);
    glVertex2f(32.6,55);
    glVertex2f(32.3,55);
    glEnd();
    int wg16=0;
    for(int i=0; i<3; i++,wg16-=4)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(28.5,wg16+50);
        glVertex2f(29,wg16+50);
        glVertex2f(29,wg16+53);
        glVertex2f(28.5,wg16+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(29.3,wg16+50);
        glVertex2f(29.8,wg16+50);
        glVertex2f(29.8,wg16+53);
        glVertex2f(29.3,wg16+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(30.5,wg16+50);
        glVertex2f(31,wg16+50);
        glVertex2f(31,wg16+53);
        glVertex2f(30.5,wg16+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(31.3,wg16+50);
        glVertex2f(31.8,wg16+50);
        glVertex2f(31.8,wg16+53);
        glVertex2f(31.3,wg16+53);
        glEnd();
    }



    ///////BUILDING17 (LIGHT YELLOW)
    glColor3f(1,0.88,0.3);
    glBegin(GL_POLYGON);
    glVertex2f(23,38);
    glVertex2f(29,38);
    glVertex2f(29,50);
    glVertex2f(23,50);
    glEnd();
    glColor3f(1,0.84,0);
    glBegin(GL_POLYGON);
    glVertex2f(23,44);
    glVertex2f(29,44);
    glVertex2f(23,45);
    glVertex2f(29,45);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(22.5,50);
    glVertex2f(29.5,50);
    glVertex2f(29.5,51);
    glVertex2f(22.5,51);
    glEnd();
    glColor3f(0,0.84,1);
    glBegin(GL_POLYGON);
    glVertex2f(25.5,38);
    glVertex2f(26.5,38);
    glVertex2f(26.5,43);
    glVertex2f(25.5,43);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(23.5,41);
    glVertex2f(25,41);
    glVertex2f(25,43);
    glVertex2f(23.5,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(23.5,38.5);
    glVertex2f(25,38.5);
    glVertex2f(25,40.5);
    glVertex2f(23.5,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(27,41);
    glVertex2f(28.5,41);
    glVertex2f(28.5,43);
    glVertex2f(27,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(27,38.5);
    glVertex2f(28.5,38.5);
    glVertex2f(28.5,40.5);
    glVertex2f(27,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(23.5,46);
    glVertex2f(25.6,46);
    glVertex2f(25.6,49);
    glVertex2f(23.5,49);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(26.5,46);
    glVertex2f(28.5,46);
    glVertex2f(28.5,49);
    glVertex2f(26.5,49);
    glEnd();


    ///////BUILDING18(BLUE)
    glColor3f(0,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(7,38);
    glVertex2f(16,38);
    glVertex2f(16,72);
    glVertex2f(7,72);
    glEnd();
    glColor3f(0,0.4,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(16,38);
    glVertex2f(16.5,38);
    glVertex2f(16.5,71.7);
    glVertex2f(16,72);
    glEnd();
    int wg18=17.5;
    for(int i=0; i<4; i++,wg18-=7)
    {
        glColor3f(0,0.4,0.6);
        glBegin(GL_POLYGON);
        glVertex2f(7.5,wg18+48);
        glVertex2f(9,wg18+48);
        glVertex2f(9,wg18+54);
        glVertex2f(7.5,wg18+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(9.5,wg18+48);
        glVertex2f(11,wg18+48);
        glVertex2f(11,wg18+54);
        glVertex2f(9.5,wg18+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(12,wg18+48);
        glVertex2f(13.5,wg18+48);
        glVertex2f(13.5,wg18+54);
        glVertex2f(12,wg18+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(14,wg18+48);
        glVertex2f(15.5,wg18+48);
        glVertex2f(15.5,wg18+54);
        glVertex2f(14,wg18+54);
        glEnd();
    }

    ///////BUILDING19
    glColor3f(0.44,0.52,0.68);
    glBegin(GL_POLYGON);
    glVertex2f(10,38);
    glVertex2f(16.5,38);
    glVertex2f(16.5,66);
    glVertex2f(10,66);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(11,66);
    glVertex2f(15.5,66);
    glVertex2f(15.5,69);
    glVertex2f(11,69);
    glEnd();
    glColor3f(0.33,0.39,0.51);
    glBegin(GL_POLYGON);
    glVertex2f(16.5,38);
    glVertex2f(17,38);
    glVertex2f(17,65.7);
    glVertex2f(16.5,66);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(15.5,66);
    glVertex2f(15.9,66);
    glVertex2f(15.9,68.7);
    glVertex2f(15.5,68.7);
    glEnd();
    int wg19=10.5;
    for(int i=0; i<4; i++,wg19-=5)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(10.5,wg19+50);
        glVertex2f(11,wg19+50);
        glVertex2f(11,wg19+54);
        glVertex2f(10.5,wg19+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(11.3,wg19+50);
        glVertex2f(11.8,wg19+50);
        glVertex2f(11.8,wg19+54);
        glVertex2f(11.3,wg19+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(12.6,wg19+50);
        glVertex2f(13.1,wg19+50);
        glVertex2f(13.1,wg19+54);
        glVertex2f(12.6,wg19+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(13.4,wg19+50);
        glVertex2f(13.9,wg19+50);
        glVertex2f(13.9,wg19+54);
        glVertex2f(13.4,wg19+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(14.6,wg19+50);
        glVertex2f(15.1,wg19+50);
        glVertex2f(15.1,wg19+54);
        glVertex2f(14.6,wg19+54);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(15.4,wg19+50);
        glVertex2f(15.9,wg19+50);
        glVertex2f(15.9,wg19+54);
        glVertex2f(15.4,wg19+54);
        glEnd();
    }


    ///////BUILDING20 (BLUE)

    glColor3f(0,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(-3,38);
    glVertex2f(6,38);
    glVertex2f(6,74);
    glVertex2f(-3,74);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-2,74);
    glVertex2f(3.5,74);
    glVertex2f(3.5,82);
    glVertex2f(-2,82);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(3.5,74);
    glVertex2f(4.5,74);
    glVertex2f(4.5,78);
    glVertex2f(3.5,78);
    glEnd();
    glColor3f( 0,0.4,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(3.5,74);
    glVertex2f(3.9,74);
    glVertex2f(3.9,81.7);
    glVertex2f(3.5,82);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(4.5,74);
    glVertex2f(4.9,74);
    glVertex2f(4.9,77.7);
    glVertex2f(4.5,78);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(6,38);
    glVertex2f(6.4,38);
    glVertex2f(6.4,73.7);
    glVertex2f(6,74);
    glEnd();
    int wg20=0;
    for(int i=0; i<5; i++,wg20-=6)
    {
        glColor3f( 0,0.4,0.6);
        glBegin(GL_POLYGON);
        glVertex2f(0.7,wg20+66);
        glVertex2f(1.5,wg20+66);
        glVertex2f(1.5,wg20+70.5);
        glVertex2f(0.7,wg20+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1.9,wg20+66);
        glVertex2f(2.7,wg20+66);
        glVertex2f(2.7,wg20+70.5);
        glVertex2f(1.9,wg20+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(3.6,wg20+66);
        glVertex2f(4.4,wg20+66);
        glVertex2f(4.4,wg20+70.5);
        glVertex2f(3.6,wg20+70.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(4.8,wg20+66);
        glVertex2f(5.6,wg20+66);
        glVertex2f(5.6,wg20+70.5);
        glVertex2f(4.8,wg20+70.5);
        glEnd();
    }

    //////building21 (PURPLE)
    glColor3f(0.62,0.25,0.7);
    glBegin(GL_POLYGON);
    glVertex2f(-1,38);
    glVertex2f(3.3,38);
    glVertex2f(3.3,55);
    glVertex2f(-1,55);
    glEnd();
    glColor3f( 0.47,0.19,0.53);
    glBegin(GL_POLYGON);
    glVertex2f(3.3,38);
    glVertex2f(3.6,38);
    glVertex2f(3.6,55);
    glVertex2f(3.3,55);
    glEnd();
    int wg21=0;
    for(int i=0; i<3; i++,wg21-=4)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(-0.5,wg21+50);
        glVertex2f(0,wg21+50);
        glVertex2f(0,wg21+53);
        glVertex2f(-0.5,wg21+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(0.3,wg21+50);
        glVertex2f(0.8,wg21+50);
        glVertex2f(0.8,wg21+53);
        glVertex2f(0.3,wg21+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1.5,wg21+50);
        glVertex2f(2,wg21+50);
        glVertex2f(2,wg21+53);
        glVertex2f(1.5,wg21+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(2.3,wg21+50);
        glVertex2f(2.8,wg21+50);
        glVertex2f(2.8,wg21+53);
        glVertex2f(2.3,wg21+53);
        glEnd();
    }


    //////building22 (DARK ASH)
    glColor3f(0.87,0.87,0.62);
    glBegin(GL_POLYGON);
    glVertex2f(4,38);
    glVertex2f(8.8,38);
    glVertex2f(8.8,58);
    glVertex2f(4,58);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(4.5,58);
    glVertex2f(8.3,58);
    glVertex2f(8.3,60);
    glVertex2f(4.5,60);
    glEnd();
    glColor3f( 0.65,0.65,0.46);
    glBegin(GL_POLYGON);
    glVertex2f(8.8,38);
    glVertex2f(9.2,38);
    glVertex2f(9.2,57.7);
    glVertex2f(8.8,58);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(8.3,58);
    glVertex2f(8.6,58);
    glVertex2f(8.6,59.8);
    glVertex2f(8.3,60);
    glEnd();
    int wg22=3.9;
    for(int i=0; i<4; i++,wg22-=4)
    {
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
        glVertex2f(4.7,wg22+50);
        glVertex2f(5.2,wg22+50);
        glVertex2f(5.2,wg22+53);
        glVertex2f(4.7,wg22+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(5.5,wg22+50);
        glVertex2f(6,wg22+50);
        glVertex2f(6,wg22+53);
        glVertex2f(5.5,wg22+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(6.8,wg22+50);
        glVertex2f(7.3,wg22+50);
        glVertex2f(7.3,wg22+53);
        glVertex2f(6.8,wg22+53);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(7.6,wg22+50);
        glVertex2f(8.1,wg22+50);
        glVertex2f(8.1,wg22+53);
        glVertex2f(7.6,wg22+53);
        glEnd();
    }


    //////BUILDING23 (GREEN)
    glColor3f(0.1,0.6,0);
    glBegin(GL_POLYGON);
    glVertex2f(7,38);
    glVertex2f(13,38);
    glVertex2f(13,50);
    glVertex2f(7,50);
    glEnd();
    glColor3f(0.08,0.45,0);
    glBegin(GL_POLYGON);
    glVertex2f(7,44);
    glVertex2f(13,44);
    glVertex2f(13,45);
    glVertex2f(7,45);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(6.5,50);
    glVertex2f(13.5,50);
    glVertex2f(13.5,51);
    glVertex2f(6.5,51);
    glEnd();
    glColor3f(0,0.84,1);
    glBegin(GL_POLYGON);
    glVertex2f(9.5,38);
    glVertex2f(10.5,38);
    glVertex2f(10.5,43);
    glVertex2f(9.5,43);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(7.5,41);
    glVertex2f(9,41);
    glVertex2f(9,43);
    glVertex2f(7.5,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(7.5,38.5);
    glVertex2f(9,38.5);
    glVertex2f(9,40.5);
    glVertex2f(7.5,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(11,41);
    glVertex2f(12.5,41);
    glVertex2f(12.5,43);
    glVertex2f(11,43);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(11,38.5);
    glVertex2f(12.5,38.5);
    glVertex2f(12.5,40.5);
    glVertex2f(11,40.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(7.5,46);
    glVertex2f(9.5,46);
    glVertex2f(9.5,49);
    glVertex2f(7.5,49);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(10.6,46);
    glVertex2f(12.5,46);
    glVertex2f(12.5,49);
    glVertex2f(10.6,49);
    glEnd();





    ////////BRIDGE
    glColor3f(0.6,0.3,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,29);
    glVertex2f(100,29);
    glVertex2f(100,38);
    glVertex2f(0,38);
    glEnd();
    glColor3f(1,0.75,0.5);
    glBegin(GL_LINES);
    glVertex2f(0,29.5);
    glVertex2f(100,29.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0,31);
    glVertex2f(100,31);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0,32.5);
    glVertex2f(100,32.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0,34);
    glVertex2f(100,34);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0,35.5);
    glVertex2f(100,35.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0,37);
    glVertex2f(100,37);
    glEnd();
    for(int bg=3; bg<100; bg+=3)
    {
        glBegin(GL_LINES);
        glVertex2f(bg,38);
        glVertex2f(bg,29);
        glEnd();
    }
    glColor3f(0.4,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,38);
    glVertex2f(100,38);
    glVertex2f(100,39);
    glVertex2f(0,39);
    glEnd();




    /////////BRIDGE HOLE
    glColor3f(0.0,0.4,0.7);
    circle(5,7,46,29);
    circle(5,7,58,29);


    ////////WATER LINES
    double t1,tk=0,t2;

    for(t1=17; t1<=28; t1+=4)
    {
        for(t2=0.0; t2<=200; t2+=3)
        {
            glBegin(GL_LINES);
            glColor3f(0.7,0.7,0.7);
            glVertex2f(wm+0+t2,t1);
            glVertex2f(wm+1+t2,t1);
            glEnd();
        }
    }


    for(t1=19; t1<=28; t1+=4)
    {
        for(t2=0.0; t2<=200; t2+=3)
        {
            glBegin(GL_LINES);
            glColor3f(0.7,0.7,0.7);
            glVertex2f(wm+1+t2,t1);
            glVertex2f(wm+2+t2,t1);
            glEnd();
        }
    }


    glBegin(GL_LINES);
    glVertex2f(+41,29);
    glVertex2f(42,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+44,29);
    glVertex2f(+45,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+47,29);
    glVertex2f(+48,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+50,29);
    glVertex2f(+51,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(42,31);
    glVertex2f(43,31);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+45,31);
    glVertex2f(+46,31);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+48,31);
    glVertex2f(+49,31);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+44,33);
    glVertex2f(+45,33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+47,33);
    glVertex2f(+48,33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+45,35);
    glVertex2f(46,35);
    glEnd();


    glBegin(GL_LINES);
    glVertex2f(+53,29);
    glVertex2f(+54,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(56,29);
    glVertex2f(57,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+59,29);
    glVertex2f(+60,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+62,29);
    glVertex2f(+63,29);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+54,31);
    glVertex2f(+55,31);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+57,31);
    glVertex2f(+58,31);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+60,31);
    glVertex2f(+61,31);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+56,33);
    glVertex2f(+57,33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+59,33);
    glVertex2f(+60,33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(+57,35);
    glVertex2f(+58,35);
    glEnd();
    if(wm>-100)
    {
        wm-=0.003;
    }
    else
    {
        wm=0;
    }
    glutPostRedisplay();



    /////////////TRAIN
    /////FIRST COMPARTMENT
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+32.8,39);
    glVertex2f(tm+52,39);
    glVertex2f(tm+48,45);
    glVertex2f(tm+47.5,45.2);
    glVertex2f(tm+47,45.5);
    glVertex2f(tm+32.8,45.5);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+52,39);
    glVertex2f(tm+56,39);
    glVertex2f(tm+52,45);
    glVertex2f(tm+51.5,45.2);
    glVertex2f(tm+51,45.5);
    glVertex2f(tm+48,45.5);
    glVertex2f(tm+47.5,45.2);
    glVertex2f(tm+47,45.5);
    glEnd();
    glColor3f( 0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+48.2,44);
    glVertex2f(tm+52.7,44);
    glVertex2f(tm+52,45);
    glVertex2f(tm+51,45.5);
    glVertex2f(tm+46.3,45.5);
    glEnd();
    glColor3f(0,0.15,0.9);
    glBegin(GL_POLYGON);
    glVertex2f(tm+50.9,40.5);
    glVertex2f(tm+55.1,40.5);
    glVertex2f(tm+52.7,44);
    glVertex2f(tm+48.2,44);
    glEnd();
    glColor3f( 0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+52,39.4);
    glVertex2f(tm+52.7,39.4);
    glVertex2f(tm+52.7,40);
    glVertex2f(tm+52,40);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+54.5,39.4);
    glVertex2f(tm+55.2,39.4);
    glVertex2f(tm+55.2,40);
    glVertex2f(tm+54.5,40);
    glEnd();
    glColor3f( 0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+32.8,40.5);
    glVertex2f(tm+49,40.5);
    glVertex2f(tm+49,40.9);
    glVertex2f(tm+32.8,40.9);
    glEnd();

    glColor3f(0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+33,41.1);
    glVertex2f(tm+49,41.1);
    glVertex2f(tm+45.8,44);
    glVertex2f(tm+45.3,44.2);
    glVertex2f(tm+44.9,44.5);
    glVertex2f(tm+33,44.5);
    glEnd();
    glColor3f(0.87,0.87,0.79);
    glBegin(GL_POLYGON);
    glVertex2f(tm+51.5,39);
    glVertex2f(tm+52,39);
    glVertex2f(tm+48.1,44);

    glVertex2f(tm+47.3,45);
    glVertex2f(tm+47,45.3);
    glVertex2f(tm+46.8,45.5);
    glVertex2f(tm+46.5,45.5);
    glEnd();
    glColor3f(0,0.15,0.9);
    glBegin(GL_POLYGON);
    glVertex2f(tm+33.2,41.7);
    glVertex2f(tm+37,41.7);
    glVertex2f(tm+37,43.9);
    glVertex2f(tm+33.2,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+37.3,41.7);
    glVertex2f(tm+41.1,41.7);
    glVertex2f(tm+41.1,43.9);
    glVertex2f(tm+37.3,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+41.4,41.7);
    glVertex2f(tm+45.1,41.7);
    glVertex2f(tm+45.1,43.9);
    glVertex2f(tm+41.4,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+45.4,41.7);
    glVertex2f(tm+47.9,41.7);
    glVertex2f(tm+45.4,43.9);
    glEnd();
    glColor3f(0.44,0.06,0.62);
    glBegin(GL_POLYGON);
    glVertex2f(tm+32.6,39);
    glVertex2f(tm+32.8,39);
    glVertex2f(tm+32.8,45.5);
    glVertex2f(tm+32.6,45.5);
    glEnd();


    /////SECOND COMPARTMENT
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+15.5,39);
    glVertex2f(tm+32.6,39);
    glVertex2f(tm+32.6,45.5);
    glVertex2f(tm+15.5,45.5);
    glEnd();
    glColor3f( 0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+15.5,40.5);
    glVertex2f(tm+32.6,40.5);
    glVertex2f(tm+32.6,40.9);
    glVertex2f(tm+15.5,40.9);
    glEnd();
    glColor3f(0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm+15.7,41.1);
    glVertex2f(tm+32.4,41.1);
    glVertex2f(tm+32.4,44.5);
    glVertex2f(tm+15.7,44.5);
    glEnd();
    glColor3f(0,0.15,0.9);
    glBegin(GL_POLYGON);
    glVertex2f(tm+15.9,41.7);
    glVertex2f(tm+19.7,41.7);
    glVertex2f(tm+19.7,43.9);
    glVertex2f(tm+15.9,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+20,41.7);
    glVertex2f(tm+23.8,41.7);
    glVertex2f(tm+23.8,43.9);
    glVertex2f(tm+20,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+24.1,41.7);
    glVertex2f(tm+27.9,41.7);
    glVertex2f(tm+27.9,43.9);
    glVertex2f(tm+24.1,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+28.2,41.7);
    glVertex2f(tm+32,41.7);
    glVertex2f(tm+32,43.9);
    glVertex2f(tm+28.2,43.9);
    glEnd();
    glColor3f(0.44,0.06,0.62);
    glBegin(GL_POLYGON);
    glVertex2f(tm+15.3,39);
    glVertex2f(tm+15.5,39);
    glVertex2f(tm+15.5,45.5);
    glVertex2f(tm+15.3,45.5);
    glEnd();



    //THIRD COMPARTMENT
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm-1.8,39);
    glVertex2f(tm+15.3,39);
    glVertex2f(tm+15.3,45.5);
    glVertex2f(tm-1.8,45.5);
    glEnd();
    glColor3f( 0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm-1.8,40.5);
    glVertex2f(tm+15.3,40.5);
    glVertex2f(tm+15.3,40.9);
    glVertex2f(tm-1.8,40.9);
    glEnd();
    glColor3f(0.7,0.1,1);
    glBegin(GL_POLYGON);
    glVertex2f(tm-1.6,41.1);
    glVertex2f(tm+15.1,41.1);
    glVertex2f(tm+15.1,44.5);
    glVertex2f(tm-1.6,44.5);
    glEnd();
    glColor3f(0,0.15,0.9);
    glBegin(GL_POLYGON);
    glVertex2f(tm-1.4,41.7);
    glVertex2f(tm+2.4,41.7);
    glVertex2f(tm+2.4,43.9);
    glVertex2f(tm-1.4,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+2.7,41.7);
    glVertex2f(tm+6.5,41.7);
    glVertex2f(tm+6.5,43.9);
    glVertex2f(tm+2.7,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+6.8,41.7);
    glVertex2f(tm+10.6,41.7);
    glVertex2f(tm+10.6,43.9);
    glVertex2f(tm+6.8,43.9);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(tm+10.9,41.7);
    glVertex2f(tm+14.7,41.7);
    glVertex2f(tm+14.7,43.9);
    glVertex2f(tm+10.9,43.9);
    glEnd();


    /////TRAIN MOVE
    if(tm<120)
    {
        tm=tm+ts;
    }
    else
    {
        tm=-90;
    }
    glutPostRedisplay();



    /////////BOAT (WHITE)
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+38.2,33);
    glVertex2f(bm1+47,33);
    glVertex2f(bm1+46,40);
    glVertex2f(bm1+42,40.7);
    glEnd();
    glColor3f(0.84,0.83,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+43.4,34);
    glVertex2f(bm1+44,34);
    glVertex2f(bm1+43.8,38.2);
    glVertex2f(bm1+43.6,38.3);
    glEnd();

    glColor3f(0.84,0.83,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+32.7,32.5);
    glVertex2f(bm1+37.6,34.8);
    glVertex2f(bm1+50.5,33.7);
    glVertex2f(bm1+51,30.6);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+47,33.8);
    glVertex2f(bm1+49,33.8);
    glVertex2f(bm1+47.5,38);
    glVertex2f(bm1+46,38);
    glEnd();

    glColor3f(0.84,0.83,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+45.5,33.8);
    glVertex2f(bm1+47,33.8);
    glVertex2f(bm1+46,38);
    glVertex2f(bm1+44.9,38);
    glEnd();

    glColor3f(0.84,0.83,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+40.5,38.2);
    glVertex2f(bm1+45,37.5);
    glVertex2f(bm1+45,38);
    glVertex2f(bm1+40.4,38.7);
    glEnd();

    float bg3=0,gg1=0.0;
    glColor3f(0.84,0.83,0.8);
    for(int i=0; i<3; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(bg3+bm1+41.5,38);
        glVertex2f(bg3+bm1+41.8,38);
        glVertex2f(bg3+bm1+42.9,41-gg1);
        glVertex2f(bg3+bm1+42.6,41-gg1);
        glEnd();
        bg3++;
        //gg1=gg1+0.2;

    }


    glColor3f(0.72,0.72,0.71);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+41.5,40.7);
    glVertex2f(bm1+46.5,40);
    glVertex2f(bm1+46.5,40.5);
    glVertex2f(bm1+41.4,41.2);

    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+45,38);
    glVertex2f(bm1+47,38);
    glVertex2f(bm1+46,40.5);
    glVertex2f(bm1+45.5,40.6);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+44,40.5);
    glVertex2f(bm1+46,40.5);
    glVertex2f(bm1+45,44.5);
    glVertex2f(bm1+44,44.8);
    glEnd();

    glColor3f(0.84,0.83,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+44.3,40.5);
    glVertex2f(bm1+46,40.5);
    glVertex2f(bm1+45,44.5);
    glVertex2f(bm1+44.3,44.7);
    glEnd();


    glColor3f(1,1,1);

    float bg2=0,gg=0.0;
    for(int i=0; i<15; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(bg2+bm1+31.5,30.5);
        glVertex2f(bg2+bm1+31.8,30.5);
        glVertex2f(bg2+bm1+31.5,35.4-gg);
        glVertex2f(bg2+bm1+31.2,35.4-gg);
        glEnd();
        bg2++;
        gg=gg+0.2;

    }
    glColor3f(0.15,0.26,0.48);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+34,24);
    glVertex2f(bm1+52,24);
    glVertex2f(bm1+52.8,25.8);
    glVertex2f(bm1+52,30.5);
    glVertex2f(bm1+30.5,33);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+32.7,27.6);
    glVertex2f(bm1+52.6,26);
    glVertex2f(bm1+52.1,29.9);
    glVertex2f(bm1+30.8,32.4);
    glEnd();

    glColor3f(0.15,0.26,0.48);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+32.4,28.2);
    glVertex2f(bm1+52.6,26.5);
    glVertex2f(bm1+52.5,26.7);
    glVertex2f(bm1+32.3,28.4);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(bm1+30.5,35);
    glVertex2f(bm1+47,32.5);
    glVertex2f(bm1+47.5,32.9);
    glVertex2f(bm1+30.5,35.4);
    glEnd();


    if(bm1>-120)
    {
        bm1-=bos1;
    }
    else
    {
        bm1=90;
    }
    glutPostRedisplay();


    //////////BOAT (BLACK & RED)
    glColor3f(0.9,0.15,0);
    glBegin(GL_POLYGON);
    glVertex2f(bm+72,20);
    glVertex2f(bm+82.5,20);
    glVertex2f(bm+84.5,22.5);
    glVertex2f(bm+71,22.5);
    glEnd();

    glColor3f(0.75,0.88,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(bm+74.5,26.5);
    glVertex2f(bm+82,26.5);
    glVertex2f(bm+82,35.5);
    glVertex2f(bm+74.5,35.5);
    glEnd();

    glColor3f(0.28,0.51,0.51);
    glBegin(GL_POLYGON);
    glVertex2f(bm+86,41.5);
    glVertex2f(bm+82,32);
    glVertex2f(bm+82,34);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(bm+84,26);
    glVertex2f(bm+84.1,26);
    glVertex2f(bm+85.9,41.5);
    glVertex2f(bm+86,41.5);
    glEnd();


    glColor3f(0.9,0.15,0);
    glBegin(GL_POLYGON);
    glVertex2f(bm+74,35.5);
    glVertex2f(bm+82.5,35.5);
    glVertex2f(bm+82.5,36.5);
    glVertex2f(bm+74,36.5);
    glEnd();
    glColor3f(1,1,1);
    circle(0.8,2.3,bm+75.9,31.8);
    circle(0.8,2.3,bm+78.3,31.8);
    circle(0.8,2.3,bm+80.7,31.8);
    glColor3f(0,0.8,0.8);
    circle(0.6,2,bm+75.9,31.8);
    circle(0.6,2,bm+78.3,31.8);
    circle(0.6,2,bm+80.7,31.8);

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(bm+71,22.5);
    glVertex2f(bm+86,22.5);
    glVertex2f(bm+88,24.5);
    glVertex2f(bm+88,26.7);
    glVertex2f(bm+78,26.7);
    glVertex2f(bm+76,28.7);
    glVertex2f(bm+68,28.7);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(bm+71,22.5);
    glVertex2f(bm+86,22.5);
    glVertex2f(bm+88,24.5);
    glVertex2f(bm+88,26.5);
    glVertex2f(bm+78,26.5);
    glVertex2f(bm+76,28.5);
    glVertex2f(bm+68,28.5);
    glEnd();

    glColor3f(0.6,0.62,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(bm+76.4,28);
    glVertex2f(bm+87,28);
    glVertex2f(bm+87,28.3);
    glVertex2f(bm+76.4,28.3);
    glEnd();
    glColor3f(0.6,0.62,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(bm+87.9,26.5);
    glVertex2f(bm+88,26.5);
    glVertex2f(bm+87,28.3);
    glVertex2f(bm+87,28);
    glEnd();
    float bg=0;
    for(int i=0; i<10; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(bg+bm+77.6,26.5);
        glVertex2f(bg+bm+77.8,26.5);
        glVertex2f(bg+bm+77.8,28.3);
        glVertex2f(bg+bm+77.6,28.3);
        glEnd();
        bg++;

    }


    glColor3f(0.6,0.62,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(bm+67.4,30);
    glVertex2f(bm+74.6,30);
    glVertex2f(bm+74.6,30.3);
    glVertex2f(bm+67.4,30.3);
    glEnd();
    glColor3f(0.6,0.62,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(bm+75.8,28.5);
    glVertex2f(bm+76,28.5);
    glVertex2f(bm+74.6,30.3);
    glVertex2f(bm+74.6,30);
    glEnd();
    float bg1=0;
    for(int i=0; i<7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(bg1+bm+68.5,28.5);
        glVertex2f(bg1+bm+68.7,28.5);
        glVertex2f(bg1+bm+68.7,30.3);
        glVertex2f(bg1+bm+68.5,30.3);
        glEnd();
        bg1++;

    }

    if(bm>-90)
    {
        bm-=bos;
    }
    else
    {
        bm=35;
    }
    glutPostRedisplay();




    /////////ROAD-FENCE
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,23);
    glVertex2f(100,23);
    glVertex2f(100,24);
    glVertex2f(0,24);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0,20);
    glVertex2f(100,20);
    glVertex2f(100,21);
    glVertex2f(0,21);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0,17);
    glVertex2f(100,17);
    glVertex2f(100,18);
    glVertex2f(0,18);
    glEnd();
    int rgg=0;
    glColor3f( 0.9,0.15,0);
    for(int i=0; i<12; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(rgg+2,16);
        glVertex2f(rgg+3,16);
        glVertex2f(rgg+3,24);
        glVertex2f(rgg+2,24);
        glEnd();
        rgg+=10;

    }


    /////////STREET-LIGHT
    int sl=4;
    for(int i=0; i<4; i++)
    {
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(sl+5,15.5);
        glVertex2f(sl+6.2,15.5);
        glVertex2f(sl+6,19);
        glVertex2f(sl+5.2,19);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(sl+5.4,19);
        glVertex2f(sl+5.8,19);
        glVertex2f(sl+5.8,29.5);
        glVertex2f(sl+5.4,29.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(sl+5,29.5);
        glVertex2f(sl+6.2,29.5);
        glVertex2f(sl+6.2,30);
        glVertex2f(sl+5,30);
        glEnd();
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex2f(sl+5,30);
        glVertex2f(sl+6.2,30);
        glVertex2f(sl+6.4,33.5);
        glVertex2f(sl+4.8,33.5);
        glEnd();
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(sl+5,30);
        glVertex2f(sl+5.2,30);
        glVertex2f(sl+4.8,33.5);
        glVertex2f(sl+4.6,33.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(sl+6,30);
        glVertex2f(sl+6.2,30);
        glVertex2f(sl+6.6,33.5);
        glVertex2f(sl+6.4,33.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(sl+5.5,30);
        glVertex2f(sl+5.7,30);
        glVertex2f(sl+5.7,33.5);
        glVertex2f(sl+5.5,33.5);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(sl+4.7,33.5);
        glVertex2f(sl+6.5,33.5);
        glVertex2f(sl+6.5,34);
        glVertex2f(sl+4.7,34);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(sl+4.7,34);
        glVertex2f(sl+6.5,34);
        glVertex2f(sl+5.6,36);
        glEnd();
        circle(0.3,0.3,sl+5.6,36.3);
        sl+=24;
    }



    //////////CAR (BLUE)
    glColor3f(0,0.47,0.7);
    glBegin(GL_POLYGON);
    glVertex2f(cm1+71,13.5);
    glVertex2f(cm1+80,13.5);
    glVertex2f(cm1+79.8,15.5);
    glVertex2f(cm1+78,16.5);
    glVertex2f(cm1+76,19.5);
    glVertex2f(cm1+71,19.5);
    glEnd();

    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(cm1+71.5,16.5);
    glVertex2f(cm1+74,16.5);
    glVertex2f(cm1+74,18.5);
    glVertex2f(cm1+71.5,18.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(cm1+74.5,16.5);
    glVertex2f(cm1+77.3,16.5);
    glVertex2f(cm1+76,18.5);
    glVertex2f(cm1+74.5,18.5);
    glEnd();
    glColor3f(0,0,0);
    circle(1,1.8,cm1+72.75,13);
    circle(1,1.8,cm1+78,13);
    glColor3f(0.62,0.62,0.56);
    circle(0.4,0.9,cm1+72.75,13);
    circle(0.4,0.9,cm1+78,13);
    if(cm1<60)
    {
        cm1+=cs1;
    }
    else
    {
        cm1=-150;
    }
    glutPostRedisplay();



    /////////BUS (PURPLE)
    glColor3f(0.67,0,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(bsm2+65,13);
    glVertex2f(bsm2+81,13);
    glVertex2f(bsm2+81,17);
    glVertex2f(bsm2+79,22);
    glVertex2f(bsm2+65,22);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(bsm2+66,17);
    glVertex2f(bsm2+68,17);
    glVertex2f(bsm2+68,21);
    glVertex2f(bsm2+66,21);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(bsm2+69,17);
    glVertex2f(bsm2+71,17);
    glVertex2f(bsm2+71,21);
    glVertex2f(bsm2+69,21);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(bsm2+74,17);
    glVertex2f(bsm2+72,17);
    glVertex2f(bsm2+72,21);
    glVertex2f(bsm2+74,21);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(bsm2+75,17);
    glVertex2f(bsm2+77,17);
    glVertex2f(bsm2+77,21);
    glVertex2f(bsm2+75,21);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(bsm2+78,17);
    glVertex2f(bsm2+80.5,17);
    glVertex2f(bsm2+79,21);
    glVertex2f(bsm2+78,21);
    glEnd();
    glColor3f(0,0,0);
    circle(1.3,2.2,bsm2+78.5,12.5);
    circle(1.3,2.2,bsm2+68,12.5);
    glColor3f(0.62,0.62,0.56);
    circle(0.6,1.1,bsm2+78.5,12.5);
    circle(0.6,1.1,bsm2+68,12.5);
    if(bsm2<70)
    {
        bsm2+=bs2;
    }
    else
    {
        bsm2=-80;
    }
    glutPostRedisplay();



    ////////CAR(RED)
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(cm+71,12);
    glVertex2f(cm+80,12);
    glVertex2f(cm+79.8,14);
    glVertex2f(cm+78,15);
    glVertex2f(cm+76,18);
    glVertex2f(cm+71,18);
    glEnd();

    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(cm+71.5,15);
    glVertex2f(cm+74,15);
    glVertex2f(cm+74,17);
    glVertex2f(cm+71.5,17);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(cm+74.5,15);
    glVertex2f(cm+77.3,15);
    glVertex2f(cm+76,17);
    glVertex2f(cm+74.5,17);
    glEnd();
    glColor3f(0,0,0);
    circle(1,1.8,cm+72.75,11.5);
    circle(1,1.8,cm+78,11.5);
    glColor3f(0.62,0.62,0.56);
    circle(0.4,0.9,cm+72.75,11.5);
    circle(0.4,0.9,cm+78,11.5);
    if(cm<60)
    {
        cm+=cs;
    }
    else
    {
        cm=-80;
    }
    glutPostRedisplay();




    /////////TRUCK (YELLOW)
    glColor3f(0.8,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(trm1+23,11);
    glVertex2f(trm1+33,11);
    glVertex2f(trm1+33,21);
    glVertex2f(trm1+23,21);

    glEnd();

    glColor3f(1,1,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(trm1+33.5,11);
    glVertex2f(trm1+38,11);
    glVertex2f(trm1+38,15);
    glVertex2f(trm1+36.5,19);
    glVertex2f(trm1+33.5,19);
    glEnd();

    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(trm1+34.5,14);
    glVertex2f(trm1+37.5,14);
    glVertex2f(trm1+37.5,15);
    glVertex2f(trm1+36.5,18);
    glVertex2f(trm1+34.5,18);


    glEnd();
    glColor3f(0,0,0);
    circle(1.3,2.2,trm1+35.5,10.5);
    circle(1.3,2.2,trm1+25,10.5);
    glColor3f(0.62,0.62,0.56);
    circle(0.6,1.1,trm1+35.5,10.5);
    circle(0.6,1.1,trm1+25,10.5);

    if(trm1<80)
    {
        trm1+=trs1;
    }
    else
    {
        trm1=-40;
    }
    glutPostRedisplay();


    ////////BUS (BLUE)
    glColor3f(0,0.3,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(50+bsm1+19,5.5);
    glVertex2f(50+bsm1+35,5.5);
    glVertex2f(50+bsm1+35,14.5);
    glVertex2f(50+bsm1+21,14.5);
    glVertex2f(50+bsm1+19,9.5);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(50+bsm1+32,9.5);
    glVertex2f(50+bsm1+34,9.5);
    glVertex2f(50+bsm1+34,13.5);
    glVertex2f(50+bsm1+32,13.5);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(50+bsm1+29,9.5);
    glVertex2f(50+bsm1+31,9.5);
    glVertex2f(50+bsm1+31,13.5);
    glVertex2f(50+bsm1+29,13.5);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(50+bsm1+26,9.5);
    glVertex2f(50+bsm1+28,9.5);
    glVertex2f(50+bsm1+28,13.5);
    glVertex2f(50+bsm1+26,13.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(50+bsm1+23,9.5);
    glVertex2f(50+bsm1+25,9.5);
    glVertex2f(50+bsm1+25,13.5);
    glVertex2f(50+bsm1+23,13.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(50+bsm1+19.5,9.5);
    glVertex2f(50+bsm1+22,9.5);
    glVertex2f(50+bsm1+22,13.5);
    glVertex2f(50+bsm1+21,13.5);
    glEnd();
    glColor3f(0,0,0);
    circle(1.3,2.2,50+bsm1+21.5,5);
    circle(1.3,2.2,50+bsm1+32,5);
    glColor3f(0.62,0.62,0.56);
    circle(0.6,1.1,50+bsm1+21.5,5);
    circle(0.6,1.1,50+bsm1+32,5);
    if(bsm1>-90)
    {
        bsm1-=bs1;
    }
    else
    {
        bsm1=55;
    }
    glutPostRedisplay();



    ////////TRUCK (RED)
    glColor3f(0.72,0.72,0.71);
    glBegin(GL_POLYGON);
    glVertex2f(trm+67,4);
    glVertex2f(trm+77,4);
    glVertex2f(trm+77,14);
    glVertex2f(trm+67,14);
    glEnd();

    glColor3f(0.7,0.12,0);
    glBegin(GL_POLYGON);
    glVertex2f(trm+62,4);
    glVertex2f(trm+66.5,4);
    glVertex2f(trm+66.5,12);
    glVertex2f(trm+63.5,12);
    glVertex2f(trm+62,8);
    glEnd();

    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(trm+62.5,7);
    glVertex2f(trm+65.5,7);
    glVertex2f(trm+65.5,11);
    glVertex2f(trm+63.5,11);
    glVertex2f(trm+62.5,8);
    glEnd();
    glColor3f(0,0,0);
    circle(1.3,2.2,trm+64.5,3.5);
    circle(1.3,2.2,trm+75,3.5);
    glColor3f(0.62,0.62,0.56);
    circle(0.6,1.1,trm+64.5,3.5);
    circle(0.6,1.1,trm+75,3.5);

    if(trm>-80)
    {
        trm-=trs;
    }
    else
    {
        trm=50;
    }
    glutPostRedisplay();



    ////////BUS (YELLOW)
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(bsm+19,3.5);
    glVertex2f(bsm+35,3.5);
    glVertex2f(bsm+35,12.5);
    glVertex2f(bsm+21,12.5);
    glVertex2f(bsm+19,7.5);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(bsm+32,7.5);
    glVertex2f(bsm+34,7.5);
    glVertex2f(bsm+34,11.5);
    glVertex2f(bsm+32,11.5);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(bsm+29,7.5);
    glVertex2f(bsm+31,7.5);
    glVertex2f(bsm+31,11.5);
    glVertex2f(bsm+29,11.5);
    glEnd();
    glColor3f(0.25,1,0.88);
    glBegin(GL_POLYGON);
    glVertex2f(bsm+26,7.5);
    glVertex2f(bsm+28,7.5);
    glVertex2f(bsm+28,11.5);
    glVertex2f(bsm+26,11.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(bsm+23,7.5);
    glVertex2f(bsm+25,7.5);
    glVertex2f(bsm+25,11.5);
    glVertex2f(bsm+23,11.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(bsm+19.5,7.5);
    glVertex2f(bsm+22,7.5);
    glVertex2f(bsm+22,11.5);
    glVertex2f(bsm+21,11.5);
    glEnd();
    glColor3f(0,0,0);
    circle(1.3,2.2,bsm+21.5,3);
    circle(1.3,2.2,bsm+32,3);
    glColor3f(0.62,0.62,0.56);
    circle(0.6,1.1,bsm+21.5,3);
    circle(0.6,1.1,bsm+32,3);
    if(bsm>-80)
    {
        bsm-=bs;
    }
    else
    {
        bsm=100;
    }
    glutPostRedisplay();



    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1270,690);
    glutCreateWindow("City View");
    init();
    glutDisplayFunc(Draw);
    glutSpecialFunc(SpecialKey);
    glutMouseFunc(MouseClick);
    glutKeyboardFunc(KeyboardButton);
    glutMainLoop();
    return 0;
}


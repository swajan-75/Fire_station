#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <math.h>
#define db double
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
void set_bg_color(int r, int g, int b){
    float a  = float(r)/255.0f , f = float(g)/255.0f , c = float(b)/255.0f ;
    glClearColor(a,f,c,1);
    
}
void rgb(int r, int g, int b){
    float a = float(r) / 255.0f;
    float f = float(g) / 255.0f;
    float c = float(b) / 255.0f;
    glColor3f(a, f, c);
}

void window(){
    glPushAttrib(GL_CURRENT_BIT);
    rgb(126,175,196);
    glBegin(GL_POLYGON);
    glVertex2d(34,36);
    glVertex2d(38,36);
    glVertex2d(38,30);
    glVertex2d(34,30);
    glEnd();
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(255,255,255);
    glBegin(GL_LINES);
    glVertex2d(34,36);
    glVertex2d(38,36);
    
    glVertex2d(38,36);
    glVertex2d(38,30);
    
    glVertex2d(38,30);
    glVertex2d(34,30);
    
    glVertex2d(34,30);
    glVertex2d(34,36);
    
    glVertex2d(34,35);
    glVertex2d(38,35);
    
    glVertex2d(36,35);
    glVertex2d(36,30);
    
    glEnd();
    glPopAttrib();

}
void tr(){
    glPushAttrib(GL_CURRENT_BIT);
    rgb(81,41,29);
    glBegin(GL_POLYGON);
    glVertex2d(62,25.5);
    glVertex2d(82,25.5);
    glVertex2d(82,10);
    glVertex2d(62,10);
    glEnd();
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(223,11,25);
    glBegin(GL_POLYGON);
    glVertex2d(66.8108250005174,21.7154);
    glVertex2d(67.1200431246581,22.2361);
    glVertex2d(67.4494523018849,22.4086485276);
    glVertex2d(68.0455260511525,22.4243346);
    glVertex2d(68.0455260511525,21.7154);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2d(68.0455260511525,21.7154);
    glVertex2d(68.0455260511525,22.4243346);
    glVertex2d(68.4219936822689,22.989036);
    glVertex2d(69.8337472989553,23.0047222768875);
    glVertex2d(70.3143437554746,22.4475822412939);
    glVertex2d(71.3048886070909,22.47782788);
    glVertex2d(71.3048886070909,21.7154);
    
    glEnd();
    glPopAttrib();
    glPushAttrib(GL_CURRENT_BIT);
    rgb(49,51,141);
    glBegin(GL_POLYGON);
    glVertex2d(71.3048886070909,21.7154);
    glVertex2d(71.3048886070909,22.47782788);
    glVertex2d(71.2455009156418,23.240014);
    glVertex2d(71.5121654876825,23.82040214);
    glVertex2d(71.982750026578,23.8674605981);
    glVertex2d(72.3592176576944,23.27138);
    glVertex2d(72.3105562808692,22.4551);
    glVertex2d(72.3105562808692,21.7154);
    glEnd();
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(223,11,25);
    glBegin(GL_POLYGON);
    glVertex2d(66.8108250005174,21.7154325512439);
    glVertex2d(76.777671155249,21.8541141265);
    glVertex2d(77.3,13.92);
    glVertex2d(66.4,13.9);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2d(72.3105562808692,21.7154);
    glVertex2d(72.3105562808692,22.4551);
    
    glVertex2d(73.2557326659992,22.455);
    glVertex2d(73.2557326659992,21.7154);
    glEnd();
    glTranslatef(5.2, 0, 0);
    //rgb(49,51,141);
    glBegin(GL_POLYGON);
    glVertex2d(68.0455260511525,21.7154);
    glVertex2d(68.0455260511525,22.4243346);
    glVertex2d(68.4219936822689,22.989036);
    glVertex2d(69.8337472989553,23.0047222768875);
    glVertex2d(70.3143437554746,22.4475822412939);
    glVertex2d(70.3143437554746,21.7154);
    glEnd();
    glTranslatef(-5.2, 0, 0);
    
    glBegin(GL_POLYGON);
    glVertex2d(75.3195488480495,21.715432);
    glVertex2d(75.612548093034,22.44302975);
    glVertex2d(76.1520781570066,22.43219358);
    glVertex2d(76.4987519168411,22.20107774142);
    glVertex2d(76.777671155249,21.854114126);
    
    glEnd();
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(153,192,206);
    glBegin(GL_POLYGON);
    glVertex2d(67.2648252163437,21.7159);
    glVertex2d(71.5392923506031,21.736809);
    glVertex2d(71.5392923506031,19.0028778142);
    glVertex2d(67.2648252163437,18.9764851545851);
   // glVertex2d(76.777671155249,21.854114126);
    
    glEnd();
    
    glTranslatef(4.7, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(67.2648252163437,21.7159);
    glVertex2d(71.5392923506031,21.736809);
    glVertex2d(71.5392923506031,19.0028778142);
    glVertex2d(67.2648252163437,18.9764851545851);
   // glVertex2d(76.777671155249,21.854114126);
    glEnd();

    glPopAttrib();
    glTranslatef(-4.7, 0, 0);
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(57,69,92);
    glBegin(GL_POLYGON);
    glVertex2d(69.2138157350475,15.773908);
    glVertex2d(74.3488427159769,15.77088667424);
    glVertex2d(74.3488427159769,14.4256760946169);
    glVertex2d(69.1973569542964,14.3913712);
   // glVertex2d(76.777671155249,21.854114126);
    
    glEnd();
  

    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(122,141,163);
    glBegin(GL_POLYGON);
    glVertex2d(66.4,13.9);
    glVertex2d(77.3,13.92);
    glVertex2d(77.4,12.6);
    glVertex2d(66.4,12.6);
    glEnd();

    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(36,48,65);
    glBegin(GL_POLYGON);
    glVertex2d(66.75,12.6);
    glVertex2d(68.95,12.6);
    glVertex2d(68.95,10);
    glVertex2d(66.75,10);
    glEnd();
    
    glTranslatef(7.85, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(66.75,12.6);
    glVertex2d(68.95,12.6);
    glVertex2d(68.95,10);
    glVertex2d(66.75,10);
    glEnd();

    glPopAttrib();
    glTranslatef(-7.85, 0, 0);
    
}
void display(){
    set_bg_color(153,204,255);    // Background color
    glClear(GL_COLOR_BUFFER_BIT);
    glPushAttrib(GL_CURRENT_BIT);
    rgb(81,41,29);
    glBegin(GL_POLYGON);
        glVertex2d(30,42);
        glVertex2d(28,40);
        glVertex2d(50,40);
        glVertex2d(50.0032576167938,41.97);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2d(50,40);
        glVertex2d(60,50);
        glVertex2d(60,52);
        glVertex2d(50.0032576167938,41.97);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2d(60,50);
        glVertex2d(70,40);
        glVertex2d(70,42);
        glVertex2d(60,52);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2d(70,40);
        glVertex2d(92,40);
        glVertex2d(90,42);
        glVertex2d(70,42);
    glEnd();
    glPopMatrix();
    glPopAttrib();
    ////////////
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(164,114,105);
    glBegin(GL_POLYGON);
    glVertex2d(90,42);
    glVertex2d(90,50);
    glVertex2d(110,50);
    glVertex2d(110,42);
    
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2d(92,40);
    glVertex2d(90,42);
    glVertex2d(110,42);
    glVertex2d(110,40);
    glEnd();
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(125,177,198);
    glBegin(GL_POLYGON);
    glVertex2d(92,46);
    glVertex2d(98,46);
    glVertex2d(98,43);
    glVertex2d(92,43);
    glEnd();
    
    glTranslatef(10,0 , 0);
    glBegin(GL_POLYGON);
    glVertex2d(92,46);
    glVertex2d(98,46);
    glVertex2d(98,43);
    glVertex2d(92,43);
    glEnd();
   // glLoadIdentity();
    glTranslatef(-10,0 , 0);
    glPopAttrib();
    
   //
    glPushAttrib(GL_CURRENT_BIT);
    rgb(81,41,29);
    glBegin(GL_POLYGON);
    glVertex2d(90,50);
    glVertex2d(85,50);
    glVertex2d(90,55);
    glVertex2d(110,55);
    glVertex2d(115,50);
    
    glEnd();
    
    glPopAttrib();
    
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(164,114,105);
    glBegin(GL_POLYGON);
    glVertex2d(30,40);
    glVertex2d(110,40);
    glVertex2d(110,10);
    glVertex2d(30,10);

    
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(50,40);
    glVertex2d(60,50);
    glVertex2d(70,40);
    
    glEnd();
    glPopAttrib();
    // window
    window();
    for(int i =0;i<7;i++){
        glTranslatef(10, 0, 0);
        window();
    }
    //glLoadIdentity();
    glPopMatrix();
    
    for(int i =0;i<7;i++){
        glTranslatef(-10, 0, 0);
        //window();
    }
    tr();
    glTranslatef(24.5, 0, 0);
    tr();
    glTranslatef(-24.5, 0, 0);
    
   
    glPushAttrib(GL_CURRENT_BIT);
    rgb(234,5,29);
    
    
    glPopAttrib();
    
    
    
    glFlush();
}
int main(int argc, char** argv) {
    glutInitWindowSize(1420, 920); // Set the window's initial width & height
      glutInit(&argc, argv); // Initialize GLUT
      glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1420) / 2,
          (glutGet(GLUT_SCREEN_HEIGHT) - 950) / 2);
   
      glutCreateWindow("Futureistic city"); // Create a window with the given title
    //  init();
      //glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

      glutDisplayFunc(display); // Register display callback handler for window re-pain
      gluOrtho2D(0, +130, 0, 80);
      glutMainLoop(); // Enter the event-processing loop
   
   
    
    return 0;
}



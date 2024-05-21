#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <math.h>
#define db double
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
# define PI           3.14159265358979323846
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
void circle (GLfloat x, GLfloat y , GLfloat radius ,int R , int G , int B){
    int i;

    int triangleAmount = 1000;
    

    GLfloat twicePi = 2.0f * PI;

    glColor3ub(R,G,B);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
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
    
    circle(60,42, 2.3,  100,68,59);
    circle(60,42, 2, 246,246,237);
    glPushAttrib(GL_CURRENT_BIT);
    rgb(83,40,33);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d(60,42);
    glVertex2d(60,43.8);
    
    glVertex2d(60,42);
    glVertex2d(59,41);
    glEnd();
    
    /// road
    /// change the color
    glBegin(GL_POLYGON);
    rgb(0,0,0); // change the color froom here
    glVertex2d(0,10);
    glVertex2d(130,10);
    
    glVertex2d(130,0);
    glVertex2d(0,0);
    
    glEnd();
    
    // end road
    
    glPopAttrib();
   
    
    
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(76,43,34);
    glBegin(GL_POLYGON);
    glVertex2d(37.5,25.5);
    glVertex2d(58,25.5);
    glVertex2d(58,10);
    glVertex2d(37.5,10);
    
    glEnd();
    
    glPopAttrib();
   
    glPushAttrib(GL_CURRENT_BIT);
    rgb(234,5,29);
    glBegin(GL_POLYGON);
    glVertex2d(46.8334001914649,21.054349407994);
    glVertex2d(46.8334001914649,13.445718941779);
    glVertex2d(55.085934,13.445718941779);
    glVertex2d(55.0099834738217,15.426884536);
    glVertex2d(54.7313994835305,17.154105);
    glVertex2d(53.4471743781866,21.054349407994);
    
    glEnd();
    
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(116,136,154);
    glBegin(GL_POLYGON);
    glVertex2d(52.3119620481642,11.816956000);
    glVertex2d(55.4413729219545,11.8156637);
    glVertex2d(55.4916525410031,10.587165161033);
    glVertex2d(55.0499198744292,10.21905460);
    glVertex2d(52.4240645786846,10.19451390185);
    
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2d(49.8226315807687,12.900635430041);
    glVertex2d(49.8595967110803,13.3963267);
    glVertex2d(55.085934,13.3963267);
    glVertex2d(55.085934,11.8118);
    glVertex2d(51.6997263071673,11.812437099);
    glVertex2d(51.1510852550365,12.186931182);
    glVertex2d(50.4226907047354,12.7154446395);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2d(46.797920839796,13.445718);
    glVertex2d(49.8595967110803,13.3963);
    glVertex2d(49.8226315807687,12.900635);
    glVertex2d(46.797920839796,12.93174961);
    glEnd();
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
    rgb(231,7,27);
    glBegin(GL_POLYGON);
    glVertex2d(49.0308914928697,13.4465513);
    glVertex2d(55.08593,13.4465513);
    glVertex2d(55.08593,11.81180);
    glVertex2d(52.3119620481642,11.8169560);
    
    glVertex2d(51.4357536299582,12.546057179);
    glVertex2d(50.6641956186881,13.0777);
    glVertex2d(49.8595967110803,13.396326786);
    glEnd();
    glPopAttrib();
    glFlush();
    
    rgb(231,7,27);
    glBegin(GL_POLYGON);
    glVertex2d(46.1486194709086, 21.0137694664219);
    glVertex2d(46.3330496630647, 11.6346109270006);
    glVertex2d(39.7004011988998, 12.0639085622216);
    glVertex2d(39.7241291699892, 20.9738559342526);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(231,7,27);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(35.1995831016598, 12.9065835614216);
    glVertex2d(36.5820221240591, 12.314109694679);
    glVertex2d(37.2622698969857, 11.6777488748445);
    glVertex2d(37.7450263809981, 10.9316706722798);
    glVertex2d(39.1274654033973, 10.9536141488258);
    glVertex2d(39.0308418004589, 19.4217466116249);
    glVertex2d(34.9237316391494, 19.4637719312422);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(231,7,27);
    glBegin(GL_TRIANGLE_FAN);
   glVertex2d(26.1369272881538, 12.7968661786915);
    glVertex2d(23.9243715669953, 10.8271828635351);
    glVertex2d(23.9243715669953, 10.8271828635351);
    glVertex2d(21.6519620721821, 10.8271828635351);
    glVertex2d(21.5599045241551, 19.3127669469387);
     glVertex2d(24.91396254477, 19.3971340402988);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(231,7,27);
    glBegin(GL_POLYGON);
    glVertex2d(24.91396254477, 19.3971340402988);
    glVertex2d(34.9237316391494, 19.4637719312422);
    glVertex2d(35.1995831016598, 12.9065835614216);
    glVertex2d(26.1369272881538, 12.7968661786915);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2d(50, 22);
    glVertex2d(50.4640345840519, 22.3976601678795);
    glVertex2d(51, 22);
    glVertex2d(50.9957903260548, 21.0655541357049);
    glVertex2d(49.9804941280069, 21.0655541357049);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(153,192,206);//w
    glBegin(GL_POLYGON);
    glVertex2d(49.3430233874105, 20.5853446167077);
    glVertex2d(52.787076576038, 20.5848165700939);
    glVertex2d(53.8691941777123, 17.2152466998462);
    glVertex2d(49.34302338741048, 17.23832900768441);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(255,0,0);//w
    glBegin(GL_POLYGON);
    glVertex2d(31.3155877530144, 18.2827353151963);
    glVertex2d(38.0995378670706, 18.3202411359404);
    glVertex2d(38.1692924715519, 13.4374188222543);
    glVertex2d(31.3565927672181, 13.4839218919084);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(255,0,0);//w
    glBegin(GL_POLYGON);
    glVertex2d(22.939537159816, 18.2737380662862);
    glVertex2d(29.7289853293227, 18.2737380662862);
    glVertex2d(29.6824822596685, 13.4839218919084);
    glVertex2d(22.916285624989, 13.4606703570813);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(153,192,206);//w
    glBegin(GL_POLYGON);
    glVertex2d(41.5247923371261, 20.5802200965367);
    glVertex2d(44.5769436179326, 20.5272926176788);
    glVertex2d(44.5240161390747, 17.2105039425828);
    glVertex2d(41.5005409699637, 17.2522626038589);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(255,255,255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(23.2418071125681, 15.5068054218641);
    glVertex2d(29.4499669113978, 15.5300569566912);
    glVertex2d(29.4503922466027, 14.3109660603668);
    glVertex2d(23.2418071125681, 14.274474076029);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(255,255,255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(31.7105703308427,15.5765600263453);
    glVertex2d(37.8437709839728, 15.5765600263453);
    glVertex2d(37.8437709839728, 14.3209771456832);
    glVertex2d(31.7105703308427, 14.3209771456832);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(255,255,255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(41.1719424780733, 15.4815396332242);
    glVertex2d(44.8543900512785, 15.4999565595871);
    glVertex2d(44.8543900512785, 14.3064471176098);
    glVertex2d(41.1542999851206, 14.2994926053974);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(255,255,255);//w up
    glBegin(GL_POLYGON);
    glVertex2d(49.2911316725419, 15.4740107021528);
    glVertex2d(53.9094942958453, 15.4740107021528);
    glVertex2d(53.8996323374047, 14.369005273119);
    glVertex2d(49.3110658928046, 14.3870704953419);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(153,192,206);//w up 1st
    glBegin(GL_POLYGON);
    glVertex2d(47.4230299372731, 20.5334529018391);
    glVertex2d(48.5646476643818, 20.5075070444048);
    glVertex2d(48.5127559495132, 17.2383290076844);
    glVertex2d(47.3699233690105, 17.2582882283807);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(116,136,154);//light
    glBegin(GL_POLYGON);
    glVertex2d(54.6081872078554, 13.3602646789695);
    glVertex2d(55.3555741263943, 13.3602882363358);
    glVertex2d(55.3797495221613, 12.2240446352898);
    glVertex2d(54.6081872078554, 12.2313923088363);
    glEnd();
    glPopAttrib();
    glFlush();
    
    glLineWidth(3.0);
    rgb(231,7,27);//back light
    glBegin(GL_LINE_STRIP);
    glVertex2d(21.5599045241551, 17.0138108519123);
    glVertex2d(20.8267397415953, 17.022010625676);
    glVertex2d(20.8267397415953, 12.2181681288848);
    glVertex2d(21.5732837151714, 12.1423715673884);
    glEnd();
    glPopAttrib();
    glFlush();
    glLineWidth(3.0);
    rgb(231,7,27);//back light
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.7942920682033, 15.6020109406877);
    glVertex2f(20.7942920682033, 15.6020109406877);
    glEnd();
    glPopAttrib();
    glFlush();
    glLineWidth(3.0);
    rgb(231,7,27);//back light
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.7974606771144, 13.9378239754953);
    glVertex2f(20.7942920682033, 13.9378239754953);
    glEnd();
    glPopAttrib();
    glFlush();
    glLineWidth(5.0);
    rgb(36,48,65);//door lock1
    glBegin(GL_LINE_STRIP);
    glVertex2f(49.6284278191877, 16.6156284292615);
    glVertex2f(50.5624786868221, 16.6156284292615);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(36,48,65);//door lock2
    glBegin(GL_LINE_STRIP);
    glVertex2f(42.4154794524554, 16.5896825718272);
    glVertex2f(41.4554827273867,  16.5896825718272);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(36,48,65);//door lock3
    glBegin(GL_LINE_STRIP);
    glVertex2f(34.3154929546001, 13.905169536597);
    glVertex2f(35.3045888031958, 13.905169536597);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(36,48,65);//door lock4
    glBegin(GL_LINE_STRIP);
    glVertex2f(26.8627707465772, 13.905169536597);
    glVertex2f(25.7356615237589, 13.905169536597);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(36,48,65);//down box
    glBegin(GL_POLYGON);
    glVertex2d(40.0100902904908, 11.1264964327739);
    glVertex2d(42.2337369380796, 11.1264964327739);
    glVertex2d(42.2337369380796, 10.2575143869939);
    glVertex2d(40.0100902904908, 10.2575143869939);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(36,48,65);//down box
    glBegin(GL_POLYGON);
    glVertex2d(42.9407748370432, 11.1264964327739);
    glVertex2d(45.2750991560996, 11.1264964327739);
    glVertex2d(45.2921380197423, 10.2575143869939);
    glVertex2d(42.9407748370432, 10.2575143869939);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(231,7,27);//up up
    glBegin(GL_POLYGON);
    glVertex2d(19.3769617619995, 20.9546969925578);
    glVertex2d(45.6500290286987, 23.3486930186285);
    glVertex2d(45.8048074835745, 21.7815611630111);
    glVertex2d(19.4878874464761, 19.3462745676484);
    glEnd();
    glPopAttrib();
    glFlush();
    rgb(116,136,154);//up up
    glBegin(GL_POLYGON);
    glVertex2d(19.46948860948, 21.8136884087071);
    glVertex2d(45.3615870698793, 24.1753132538273);
    glVertex2d(45.4243327942939, 23.6984457482764);
    glVertex2d(19.3769617619995, 20.9546969925578);
    glEnd();
    glPopAttrib();
    glFlush();
    glLineWidth(3.0);
    rgb(255,0,0);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.5302029271408, 18.1647425252181);
    glVertex2f(21.0368070900852, 18.2135985625796);
    glVertex2f(21.0570658917769, 19.7631784555012);
    glVertex2f(37.3276790031822, 20.0920763559326);
    glVertex2f(37.7321905160404, 19.4499781612862);
    glEnd();
    glPopAttrib();
    glFlush();
    glLineWidth(3.0);
    rgb(255,0,0);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(23.0621180365267, 19.9729595867611);
    glVertex2f(23.0494065655737, 19.3537722733407);
    glVertex2f(24.91396254477, 19.3971340402988);
    glVertex2f(24.903309806019, 20.0343326457442);
    glVertex2f(34.9510492228316, 20.0920763559326);
    glVertex2f(34.9237316391494, 19.4637719312422);

    glEnd();
    glPopAttrib();
    glFlush();
    rgb(116,136,154);//light
    glBegin(GL_POLYGON);
    glVertex2d(39.7004011988998, 12.0639085622216);
    glVertex2d(46.2983756850536, 12.0822382068951);
    glVertex2d(46.2983756850536, 11.6358982503123);
    glVertex2d(39.7004011988998, 11.6560758087616);
    glEnd();
    glPopAttrib();
    glFlush();
    glLineWidth(3.0);
    rgb(116,136,154);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(21.8672523298731, 22.0572579909476);
    glVertex2f(21.8672523298731, 19.3127669469387);
    glEnd();
    glPopAttrib();
    glFlush();
    glLineWidth(3.0);
    rgb(116,136,154);//up
    glBegin(GL_LINE_STRIP);
    glVertex2f(40.8438949120281, 23.9494286459348);
    glVertex2f(40.8438949120281, 21.3365731052432);
    glEnd();
    glPopAttrib();
    
    glPushAttrib(GL_CURRENT_BIT);
   // rgb();
    circle(48.8348877616194,9.526494836701, 3.5, 37,46,63);
    circle(48.8348877616194,9.526494836701, 1.5,116,139,163);
    
    circle(34.2958815689635,9.487043930, 3.5, 37,46,63);
    circle(34.2958815689635,9.487043930, 1.5,116,139,163);
    
    circle(27.4786530845238,9.4287770205, 3.5, 37,46,63);
    circle(27.4786530845238,9.4287770205, 1.5,116,139,163);
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




#include <iostream>
#include <graphics.h>
using namespace std;

void drawDoraemon() {
   int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

	    ellipse(185, 170, 0,360, 5, 9);
 setfillstyle(SOLID_FILL, BLACK);
   floodfill(185,170,BLACK);

     ellipse(185, 150, 0,360, 15, 30);
 setfillstyle(SOLID_FILL, WHITE);
   floodfill(185,150,WHITE);

     ellipse(215, 170, 0,360, 5, 9);
 setfillstyle(SOLID_FILL, BLACK);
   floodfill(215,170,BLACK);

ellipse(215, 150, 0,360, 15, 30);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(215,150,WHITE);

circle(200, 310, 10);
rectangle(150,300,250,320);


circle(200, 200, 100);
setfillstyle(SOLID_FILL, CYAN);
	floodfill(200, 200, 15);


		circle(200, 220, 80);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(202, 212, 15);

setcolor(BLACK);
line(140, 220, 260, 220);
line(200, 180, 200, 220);

 ellipse(185, 150, 0,360, 15, 30);
 ellipse(215, 150, 0,360, 15, 30);
ellipse(200, 220,110,430, 80,80);


setcolor(RED);
 circle(200, 180, 10);
setfillstyle(SOLID_FILL, RED);
	floodfill(200, 180, RED);


	getch();
	closegraph();

}
void home(){
  int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw home
    setcolor(LIGHTBLUE);
    rectangle(200, 200, 400, 400); // Main body
    rectangle(250, 250, 350, 400); // Door
    rectangle(280, 280, 320, 400); // Door knob
    line(200, 200, 300, 100); // Left roof line
    line(300, 100, 400, 200); // Right roof line

    delay(5000);
    closegraph();
}
void car(){
int gd = DETECT, gm;

initgraph(&gd, &gm,NULL);


line(0,300,640,300);

setcolor(4);


circle(100,285,15);
circle(200,285,15);
circle(100,285,5);
circle(200,285,5);

line(65,285,85,285);
line(115,285,185,285);
line(215,285,235,285);
line(65,285,65,260);
line(235,285,235,260);

line(65,260,100,255);
line(235,260,200,255);

line(100,255,115,235);
line(200,255,185,235);

line(115,235,185,235);

line(106,255,118,238);
line(118,238,118,255);
line(106,255,118,255);

line(194,255,182,238);
line(182,238,182,255);
line(194,255,182,255);

line(121,238,121,255);
line(121,238,148,238);
line(121,255,148,255);
line(148,255,148,238);


line(179,238,179,255);
line(179,238,152,238);
line(179,255,152,255);
line(152,255,152,238);
setcolor(4);
//floodfill(150,200,4);

getch();
closegraph();
}

void emoji(){
      int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
setfillstyle(SOLID_FILL,RED);
circle(60, 80, 10);
 floodfill(60,80, WHITE);

setfillstyle(SOLID_FILL,RED);
	circle(140, 80, 10);
floodfill(140,80, WHITE);

	// circle function
	setfillstyle(SOLID_FILL,YELLOW);
	circle(100, 100, 90);
    floodfill(100,100, WHITE);

setcolor(BLACK);
  ellipse(100,100,200,340,50,50);
floodfill(200,340, BLACK);

	getch();
	closegraph();
}
int main() {
    char choice;
    float num1, num2;

    cout << "Choose your moption \n";
    cout << "-----------------\n";
    cout << "Choose an operation:\n";
    cout << "1. Doraemon \n";
    cout << "2. Home \n";
    cout << "3. Emoji\n";
    cout << "4. Car \n";
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    switch (choice) {
        case '1':
            drawDoraemon();
            break;
        case '2':
            home();
            break;
        case '3':
            emoji();
            break;
        case '4':
            car();
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}

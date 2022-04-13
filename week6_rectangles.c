#include<stdio.h>
#include<windows.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30; 
	int y = 100; 
	int i = 0;

	while (i < 10) {
		Rectangle(hdc,x,y,x+60,y+60 );
		x += 70;
		i++;
	}
}

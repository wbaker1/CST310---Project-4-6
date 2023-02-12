// Code produced 100% by Wesley Baker, utilizing GLUT and GL APIs.

#include <iostream>
#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <cstdlib>

void display() {
    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set the camera position
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);

	// Fridge Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.35, 0.35, 0.35);
    glVertex3f(4.9, 5.0, -3.9);//Top Left Vertex
    glVertex3f(4.9, -3.85, -3.9);//Bottom Left Vertex
    glVertex3f(5.2, -3.85, -3.9);//Bottom Right Vertex
    glVertex3f(5.2, 5.0, -3.9);//Top Right Vertex
    glEnd();
    
	// Fridge Base *Done
    glBegin(GL_QUADS);
    glColor3f(0.25, 0.25, 0.25);
    glVertex3f(5.9, 5.0, -11.5);//Top Left Vertex
    glVertex3f(4.9, 5.0, -3.9);//Bottom Left Vertex
    glVertex3f(4.9, -2.44, -3.9);//Bottom Right Vertex
    glVertex3f(5.9, -2.4, -11.5);//Top Right Vertex
    glEnd();
	
	// Left Lower Counter Drawer Handle *Done
    glBegin(GL_QUADS);
    glColor3f(0.65, 0.65, 0.65);
    glVertex3f(4.15, -3.03, -3.9);//Top Left Vertex
    glVertex3f(4.15, -3.2, -3.9);//Bottom Left Vertex
    glVertex3f(3.45, -3.2, -3.9);//Bottom Right Vertex
    glVertex3f(3.45, -3.03, -3.9);//Top Right Vertex
    glEnd();
    
	// Left Lower Counter Drawer Handle *Done
    glBegin(GL_QUADS);
    glColor3f(0.65, 0.65, 0.65);
    glVertex3f(-4.05, -3.03, -3.9);//Top Left Vertex
    glVertex3f(-4.05, -3.2, -3.9);//Bottom Left Vertex
    glVertex3f(-3.35, -3.2, -3.9);//Bottom Right Vertex
    glVertex3f(-3.35, -3.03, -3.9);//Top Right Vertex
    glEnd();
    
	// Left Lower Counter Drawer Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-4.9, -2.44, -3.9);//Top Left Vertex
    glVertex3f(-4.9, -3.85, -3.9);//Bottom Left Vertex
    glVertex3f(-2.5, -3.85, -3.9);//Bottom Right Vertex
    glVertex3f(-2.5, -2.44, -3.9);//Top Right Vertex
    glEnd();
    
    // Left Counter Base *Done
    glBegin(GL_QUADS);
    glColor3f(0.85, 0.85, 0.85);
    glVertex3f(-4.9, -2.4, -11.5);//Top Left Vertex
    glVertex3f(-4.9, -2.44, -3.9);//Bottom Left Vertex
    glVertex3f(-2.5, -2.44, -3.9);//Bottom Right Vertex
    glVertex3f(-2.5, -2.4, -11.5);//Top Right Vertex
    glEnd();
    
    // Right Counter Base *Done
    glBegin(GL_QUADS);
    glColor3f(0.85, 0.85, 0.85);
    glVertex3f(3.45, -2.4, -11.5);//Top Left Vertex
    glVertex3f(2.64, -2.44, -3.9);//Bottom Left Vertex
    glVertex3f(4.9, -2.44, -3.9);//Bottom Right Vertex
    glVertex3f(5.9, -2.4, -11.5);//Top Right Vertex
    glEnd();
    
    // Stove Control Dial P1 *Done
	glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(2.34, -0.9, -9.2);
    glVertex3f(2.34, -0.55, -11.0);
    glVertex3f(2.94, -0.55, -11.0);
    glVertex3f(2.9, -0.9, -9.2);
    glEnd();
    
    // Stove Control Dial P2 *Done
	glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(1.55, -0.9, -9.2);
    glVertex3f(1.63, -0.55, -11.0);
    glVertex3f(2.24, -0.55, -11.0);
    glVertex3f(2.20, -0.9, -9.2);
    glEnd();
    
    // Stove Control Dial P3 *Done
	glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(-2.1, -0.9, -9.2);
    glVertex3f(-2.1, -0.55, -11.0);
    glVertex3f(-1.53, -0.55, -11.0);
    glVertex3f(-1.53, -0.9, -9.2);
    glEnd();
    
    // Stove Control Dial P4 *Done
	glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(-1.4, -0.9, -9.2);
    glVertex3f(-1.4, -0.55, -11.0);
    glVertex3f(-0.8, -0.55, -11.0);
    glVertex3f(-0.8, -0.9, -9.2);
    glEnd();
    
    // Stove Time Display *Done
	glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-0.6, -1.0, -9.2);
    glVertex3f(-0.6, -0.5, -11.2);
    glVertex3f(1.5, -0.5, -11.2);
    glVertex3f(1.38, -1.0, -9.2);
    glEnd();
    
    // Stove Control Base P2 *Done
	glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(-2.5, -1.3, -9.5);
    glVertex3f(-2.32, -0.4, -11.5);
    glVertex3f(3.2, -0.4, -11.5);
    glVertex3f(3.2, -1.3, -9.5);
    glEnd();
    
    // Stove Control Base P1 *Done
	glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(-2.5, -2.5, -9.5);
    glVertex3f(-2.5, -1.3, -9.5);
    glVertex3f(3.2, -1.3, -9.5);
    glVertex3f(3.2, -2.5, -9.5);
    glEnd();
    
    // Stove Burner P1 *Done
    glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(1.2, -2.4, -6.0);//Top Left Vertex
    glVertex3f(1.15, -2.44, -4.4);//Bottom Left Vertex
    glVertex3f(2.35, -2.44, -4.4);//Bottom Right Vertex
    glVertex3f(2.4, -2.4, -6.0);//Top Right Vertex
    glEnd();
    
    // Stove Burner P2 *Done
    glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(1.4, -2.4, -8.2);//Top Left Vertex
    glVertex3f(1.2, -2.44, -4.7);//Bottom Left Vertex
    glVertex3f(2.4, -2.44, -4.7);//Bottom Right Vertex
    glVertex3f(2.5, -2.4, -8.2);//Top Right Vertex
    glEnd();
    
    // Stove Burner P3 *Done
    glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(-1.9, -2.4, -5.8);//Top Left Vertex
    glVertex3f(-1.96, -2.44, -4.4);//Bottom Left Vertex
    glVertex3f(-0.55, -2.44, -4.4);//Bottom Right Vertex
    glVertex3f(-0.55, -2.4, -5.8);//Top Right Vertex
    glEnd();
    
    // Stove Burner P4 *Done
    glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(-2.0, -2.4, -8.2);//Top Left Vertex
    glVertex3f(-2.06, -2.44, -4.6);//Bottom Left Vertex
    glVertex3f(-0.5, -2.44, -4.6);//Bottom Right Vertex
    glVertex3f(-0.5, -2.4, -8.2);//Top Right Vertex
    glEnd();
    
    // Stove Base P1 *Done
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-2.2, -2.4, -8.8);//Top Left Vertex
    glVertex3f(-2.26, -2.44, -4.1);//Bottom Left Vertex
    glVertex3f(2.5, -2.44, -4.1);//Bottom Right Vertex
    glVertex3f(2.82, -2.4, -8.8);//Top Right Vertex
    glEnd();
    
    // Stove Base P2 *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(-3.0, -2.4, -11.5);//Top Left Vertex
    glVertex3f(-2.46, -2.44, -3.9);//Bottom Left Vertex
    glVertex3f(2.6, -2.44, -3.9);//Bottom Right Vertex
    glVertex3f(3.5, -2.4, -11.5);//Top Right Vertex
    glEnd();
    
    // Oven Towel Front Stripe *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(-0.45, -2.98, -3.9);//Top Left Vertex
    glVertex3f(-0.45, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(-0.05, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(-0.05, -2.98, -3.9);//Top Right Vertex
    glEnd();
    
    // Oven Towel Front Stripe *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(0.05, -2.98, -3.9);//Top Left Vertex
    glVertex3f(0.05, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(0.18, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(0.18, -2.98, -3.9);//Top Right Vertex
    glEnd();
    
    // Oven Towel Front Stripe *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(0.28, -2.98, -3.9);//Top Left Vertex
    glVertex3f(0.28, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(0.4, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(0.4, -2.98, -3.9);//Top Right Vertex
    glEnd();
    
    // Oven Towel Front Stripe *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(0.48, -2.98, -3.9);//Top Left Vertex
    glVertex3f(0.48, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(0.58, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(0.58, -2.98, -3.9);//Top Right Vertex
    glEnd();
    
    // Oven Towel Front Stripe *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(0.9, -2.98, -3.9);//Top Left Vertex
    glVertex3f(0.9, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(1.0, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(1.0, -2.98, -3.9);//Top Right Vertex
    glEnd();
    
    // Oven Towel Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.85, 0.85, 0.85);
    glVertex3f(-0.5, -2.98, -3.9);//Top Left Vertex
    glVertex3f(-0.5, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(1.15, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(1.15, -2.98, -3.9);//Top Right Vertex
    glEnd();
    
    
    // Oven Handle Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(-2.05, -2.98, -3.9);//Top Left Vertex
    glVertex3f(-2.05, -3.2, -3.9);//Bottom Left Vertex
    glVertex3f(2.15, -3.2, -3.9);//Bottom Right Vertex
    glVertex3f(2.15, -2.98, -3.9);//Top Right Vertex
    glEnd();
    
    // Oven Window Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.55, 0.55, 0.55);
    glVertex3f(-2.25, -2.63, -3.9);//Top Left Vertex
    glVertex3f(-2.25, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(2.35, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(2.35, -2.63, -3.9);//Top Right Vertex
    glEnd();
    
    // Oven Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.45, 0.45, 0.45);
    glVertex3f(-2.46, -2.44, -3.9);//Top Left Vertex
    glVertex3f(-2.46, -3.9, -3.9);//Bottom Left Vertex
    glVertex3f(2.6, -3.9, -3.9);//Bottom Right Vertex
    glVertex3f(2.6, -2.44, -3.9);//Top Right Vertex
    glEnd();
    
    // Right Lower Counter Drawer Front Face*Done
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(4.9, -2.44, -3.9);//Top Left Vertex
    glVertex3f(4.9, -3.85, -3.9);//Bottom Left Vertex
    glVertex3f(2.64, -3.85, -3.9);//Bottom Right Vertex
    glVertex3f(2.64, -2.44, -3.9);//Top Right Vertex
    glEnd();
    
    // Left Lower Counter, Oven and Right Lower Counter Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-4.9, -2.4, -3.9);
    glVertex3f(-4.9, -3.9, -3.9);
    glVertex3f(4.9, -3.9, -3.9);
    glVertex3f(4.9, -2.4, -3.9);
    glEnd();
	
	// Left Upper Cabinet Handle *Done
	glBegin(GL_QUADS);
    glColor3f(0.65, 0.65, 0.65);
    glVertex3f(-3.3, 1.25, -3.9);
    glVertex3f(-3.3, 1.85, -3.9);
    glVertex3f(-3.15, 1.85, -3.9);
    glVertex3f(-3.15, 1.25, -3.9);
    glEnd();
    
	// Left Upper Cabinet Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-3.45, 1.05, -3.9);
    glVertex3f(-3.45, 3.9, -3.9);
    glVertex3f(-1.4, 3.9, -3.9);
    glVertex3f(-1.4, 1.05, -3.9);
    glEnd();
    
    
    // Right Upper Cabinet Handle *Done
	glBegin(GL_QUADS);
    glColor3f(0.65, 0.65, 0.65);
    glVertex3f(2.3, 1.25, -3.9);
    glVertex3f(2.3, 1.85, -3.9);
    glVertex3f(2.15, 1.85, -3.9);
    glVertex3f(2.15, 1.25, -3.9);
    glEnd();
    
    // Right Upper Cabinet Front Face *Done
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(4.0, 1.05, -3.9);
    glVertex3f(4.0, 3.9, -3.9);
    glVertex3f(2.0, 3.9, -3.9);
    glVertex3f(2.0, 1.05, -3.9);
    glEnd();
	
	// Microwave Buttons Core *Done
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(1.285, 2.0, -3.9);//1.68
    glVertex3f(1.285, 2.6, -3.9);
    glVertex3f(1.85, 2.6, -3.9); //2.6
    glVertex3f(1.85, 2.0, -3.9);
    glEnd();
    
    // Microwave Start Buttons *Done
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(1.285, 1.74, -3.9); //1.68
    glVertex3f(1.285, 1.86, -3.9);
    glVertex3f(1.85, 1.86, -3.9); //2.6
    glVertex3f(1.85, 1.74, -3.9);
    glEnd();
    
    // Microwave Preset Buttons *Done 
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(1.285, 2.7, -3.9);
    glVertex3f(1.285, 2.9, -3.9);
    glVertex3f(1.85, 2.9, -3.9);
    glVertex3f(1.85, 2.7, -3.9);
    glEnd();
    
 
    // Microwave Display Time *Done
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(1.4, 2.96, -3.9);
    glVertex3f(1.4, 3.1, -3.9);
    glVertex3f(1.74, 3.1, -3.9);
    glVertex3f(1.74, 2.96, -3.9);
    glEnd();
    
    // Microwave Handle *Done
	glBegin(GL_QUADS);
    glColor3f(0.4, 0.4, 0.4);
    glVertex3f(0.825, 1.68, -3.9);
    glVertex3f(0.825, 2.9, -3.9);
    glVertex3f(0.98, 2.9, -3.9);
    glVertex3f(0.98, 1.68, -3.9);
    glEnd();
    
    // Microwave Glass Window *Done
	glBegin(GL_QUADS);
    glColor3f(0.65, 0.65, 0.65);
    glVertex3f(-1.16, 1.68, -3.9);
    glVertex3f(-1.16, 2.9, -3.9);
    glVertex3f(0.68, 2.9, -3.9);
    glVertex3f(0.68, 1.68, -3.9);
    glEnd();
    
	// Microwave Door *Done
	glBegin(GL_QUADS);
    glColor3f(0.35, 0.35, 0.35);
    glVertex3f(-1.28, 1.45, -3.9);
    glVertex3f(-1.28, 3.15, -3.9);
    glVertex3f(1.1, 3.15, -3.9);
    glVertex3f(1.1, 1.45, -3.9);
    glEnd();
	
	// Microwave Base *Done
	glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-3.5, 1.0, -3.9);
    glVertex3f(-3.5, 3.9, -3.9);
    glVertex3f(4.0, 3.9, -3.9);
    glVertex3f(4.0, 1.0, -3.9);
    glEnd();
    
	//Top Left Offscreen Cabinet *Done
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-4.9, 3.9, -3.9);
    glVertex3f(-4.9, 2.5, -3.9);
    glVertex3f(-2.4, 2.5, -3.9);
    glVertex3f(-2.4, 3.9, -3.9);
    glEnd();
	
	// Paper Towel Holder *Done
	glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-3.4, -0.5, -7.3);
    glVertex3f(-3.4, -0.2, -7.3);
    glVertex3f(-3.2, -0.2, -7.3);
    glVertex3f(-3.2, -0.5, -7.3);
    glEnd();
	
	// Paper Towel Top *Done
	glBegin(GL_QUADS);
    glColor3f(0.95, 0.95, 0.95);
    glVertex3f(-3.6, -0.5, -7.8);
    glVertex3f(-3.6, -0.5, -6.5);
    glVertex3f(-2.9, -0.5, -6.5);
    glVertex3f(-2.9, -0.5, -7.8);
    glEnd();
	
	// Paper Towel Front Face *Done
	glBegin(GL_QUADS);
    glColor3f(0.99, 0.99, 0.99);
    glVertex3f(-3.6, -2.5, -6.5);
    glVertex3f(-3.6, -0.5, -6.5);
    glVertex3f(-2.9, -0.5, -6.5);
    glVertex3f(-2.9, -2.5, -6.5);
    glEnd();
    
    // Paper Towel Side Face *Done
	glBegin(GL_QUADS);
    glColor3f(0.95, 0.95, 0.95);
    glVertex3f(-2.9, -2.5, -7.8);
    glVertex3f(-2.9, -2.5, -6.5);
    glVertex3f(-2.9, -0.5, -6.5);
    glVertex3f(-2.9, -0.5, -7.8);
    glEnd();
    
    
	// Kitchen Wall Decoration *Done
	glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-3.9, -0.5, -11.5);
    glVertex3f(-3.9, 1.1, -11.5);
    glVertex3f(-2.9, 1.1, -11.5);
    glVertex3f(-2.9, -0.5, -11.5);
    glEnd();
	
	// Kitchen Wall Backboard *Done
	glBegin(GL_QUADS);
    glColor3f(0.65, 0.65, 0.65);
    glVertex3f(-9.9, -2.5, -11.5);
    glVertex3f(-9.9, -1.1, -11.5);
    glVertex3f(9.9, -1.1, -11.5);
    glVertex3f(9.9, -2.5, -11.5);
    glEnd();
    
    // Kitchen Wall Base *Done 
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-9.9, -2.5, -11.5);
    glVertex3f(-9.9, 4.5, -11.5);
    glVertex3f(9.9, 4.5, -11.5);
    glVertex3f(9.9, -2.5, -11.5);
    glEnd();

	// Sink Surface *Done 
	glBegin(GL_QUADS);
    glColor3f(0.4, 0.4, 0.4);
    glVertex3f(-9.9, -3.5, -9.5);
    glVertex3f(-9.9, -2.44, -9.5);
    glVertex3f(-4.5, -2.44, -9.5);
    glVertex3f(-4.5, -3.5, -9.5);
    glEnd();
    
    // Sink Wall *Done 
	glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-9.9, -3.5, -9.5);
    glVertex3f(-9.9, -2.44, -3.9);
    glVertex3f(-4.5, -2.44, -3.9);
    glVertex3f(-4.5, -3.5, -9.5);
    glEnd();
    
    // Sink Base *Done
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-9.9, -2.4, -11.5);//Top Left Vertex
    glVertex3f(-9.9, -2.44, -8.9);//Bottom Left Vertex
    glVertex3f(-4.5, -2.44, -8.9);//Bottom Right Vertex
    glVertex3f(-4.5, -2.4, -11.5);//Top Right Vertex
    glEnd();
    
    // Finish the drawing
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Kitchen");
    glutDisplayFunc(display);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, 800.0 / 600, 1, 100);
    glMatrixMode(GL_MODELVIEW);
    glutMainLoop();
    return 0;
}

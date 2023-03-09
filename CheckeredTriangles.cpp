#include <GL/glut.h>
#include <iostream>

float cameraX = 0.0; // camera position in the x-axis
float cameraSpeed = 0.1; // camera movement speed

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(cameraX, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glTexCoord2f(0.0, 0.0);
    glVertex2f(-1.5, -3);
    glTexCoord2f(4, 0.0);
    glVertex2f(1.5, -3);
    glEnd();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 100.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'a': // Move Camera Left
        cameraX -= cameraSpeed;
        break;
    case 'd': // Move Camera Right
        cameraX += cameraSpeed;
        break;
    }
    std::cout << "Camera X: " << cameraX << std::endl;
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(520, 390);
    glutCreateWindow("Textured Triangles");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glLoadIdentity();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    return 0;
}

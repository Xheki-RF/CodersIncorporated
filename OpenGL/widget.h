#ifndef WIDGET_H
#define WIDGET_H
#include "QMatrix4x4"
#include "QtOpenGL/QGLShaderProgram"
#include "QtOpenGL/QGLBuffer"
#include <QtOpenGL>
#include "QtOpenGL/QGLShader"
#include "QtOpenGL/QGLWidget"

struct VertexData
{
    VertexData()
    {
    }
    VertexData(QVector3D p, QVector2D t, QVector3D n):
    position(p), textCoord(t), normal(n)
    {
    }
    QVector3D position;
    QVector2D textCoord;
    QVector3D normal;

};

class Widget : public QGLWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void initCube(float width);
    void initShaders();
private:
    QMatrix4x4 m_projectionMatrix;
    QGLShaderProgram m_program;
    //QGLTextures m_texture;
    QGLBuffer m_arrayBuffer;
    QGLBuffer m_indexBuffer;
};

#endif // WIDGET_H

#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QString>
#include <QPixmap>
#include <QVector>

#include "fviewsolution.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Создаем главное окно
    QWidget window;
    window.setWindowTitle("Queens_0");
    window.resize(400, 400);

    QVector<int> qvData = QVector<int>();
    qvData.clear();
    qvData.append(0);//0
    qvData.append(1);//1
    qvData.append(2);//2
    qvData.append(3);//3
    qvData.append(4);//4
    qvData.append(5);//5
    qvData.append(6);//6
    qvData.append(7);//7

    // Создаем layout
    QGridLayout *gridLayout = new QGridLayout(&window);
    viewSolution(gridLayout, qvData);

    window.show();
    return app.exec();
}

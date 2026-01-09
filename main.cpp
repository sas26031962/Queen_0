#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <QPixmap>
#include <QVector>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Создаем главное окно
    QWidget window;
    window.setWindowTitle("Queens_0");
    window.resize(400, 400);

    // Создаем layout
    QGridLayout *gridLayout = new QGridLayout(&window);
    QString qsBlack = "background-color: rgba(10, 10, 10, 50%);";
    QString qsWhite = "background-color: rgba(210, 210, 210, 50%);";
    QPixmap pmQween = QPixmap(":/icons/programm/img/Qween24.png");

    QVector<int> qvData = QVector<int>();
    qvData.clear();
    qvData.append(1);//0
    qvData.append(1);//1
    qvData.append(1);//2
    qvData.append(1);//3
    qvData.append(1);//4
    qvData.append(1);//5
    qvData.append(1);//6
    qvData.append(1);//7

    // Создаем виджеты

    // Добавляем виджеты в сетку с указанием позиций (строка, столбец)
    for(int j = 0; j < 8; j++)
    {
        for(int i = 0; i < 8; i++)
        {
            //Создание ячейки
            QLabel * CellLabel = new QLabel();
            CellLabel->setAlignment(Qt::AlignCenter);
            //Чередование чёрных и белых полей
            if(i % 2)
            {
                if(j % 2)
                {
                    CellLabel->setStyleSheet(qsBlack);
                }
                else
                {
                    CellLabel->setStyleSheet(qsWhite);
                }
            }
            else
            {
                if(j % 2)
                {
                    CellLabel->setStyleSheet(qsWhite);
                }
                else
                {
                    CellLabel->setStyleSheet(qsBlack);
                }
            }
            //Рисование ферзя в ячейке
            if(qvData[i] == j)CellLabel->setPixmap(pmQween);
            //Рисование ячейки на виджете
            gridLayout->addWidget(CellLabel, i, j);
        }
    }

    window.show();
    return app.exec();
}

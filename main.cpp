#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QString>

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
    // Создаем виджеты

    // Добавляем виджеты в сетку с указанием позиций (строка, столбец)
    for(int j = 0; j < 8; j++)
    {
        for(int i = 0; i < 8; i++)
        {
            QLabel * CellLabel = new QLabel();
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
            gridLayout->addWidget(CellLabel, i, j);    // строка 0, столбец i
        }
    }

    // Настройка отступов
//    gridLayout->setHorizontalSpacing(10); // горизонтальный отступ между ячейками
//    gridLayout->setVerticalSpacing(15);   // вертикальный отступ между ячейками
//    gridLayout->setContentsMargins(20, 20, 20, 20); // отступы от краев (лево, верх, право, низ)

    window.show();
    return app.exec();
}

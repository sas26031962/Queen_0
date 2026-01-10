#ifndef FVIEWSOLUTION_H
#define FVIEWSOLUTION_H

#include <QVector>
#include <QGridLayout>
#include <QLabel>

void viewSolution(QGridLayout *gridLayout, QVector<int> data)
{
    // Оформляем поле ячеек
    QString qsBlack = "background-color: rgba(10, 10, 10, 50%);";
    QString qsWhite = "background-color: rgba(210, 210, 210, 50%);";
    QPixmap pmQween = QPixmap(":/icons/programm/img/Qween24.png");

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
            if(data[i] == j)CellLabel->setPixmap(pmQween);
            //Рисование ячейки на виджете
            gridLayout->addWidget(CellLabel, i, j);
        }
    }
}

#endif // FVIEWSOLUTION_H

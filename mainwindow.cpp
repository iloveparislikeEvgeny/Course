#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::prediction()
{
    for (int i = 2; i <= 4; i++)
    {
        for (int j = 2; j <= 4; j++)
        {
            if (prec[i][j] == 1)
            {
                 if(prec[i-2][j] == 1 && prec[i-1][j] == 1 && prec[i+1][j] == 1 && prec[i+2][j] == 1)
                 {
                     return(-1);
                 }
                 if(prec[i][j-2] == 1 && prec[i][j-1] == 1 && prec[i][j+1] == 1 && prec[i][j+2]==1)
                 {
                     return(-1);
                 }
                 if(prec[i-2][j-2] == 1 && prec[i-1][j-1] == 1 && prec[i+1][j+1] == 1 && prec[i+2][j+2] == 1)
                 {
                     return(-1);
                 }
                 if(prec[i-2][j+2] == 1 && prec[i-1][j+1] == 1 && prec[i+1][j-1] == 1 && prec[i+2][j-2]==1)
                 {
                     return(-1);
                 }

            }
            if (prec[i][j] == 2)
            {
                if(prec[i-2][j] == 2 && prec[i-1][j] == 2 && prec[i+1][j] == 2 && prec[i+2][j] == 2)
                 {
                     return(2);
                 }
                 if(prec[i][j-2] == 2 && prec[i][j-1] == 2 && prec[i][j+1] == 2 && prec[i][j+2] == 2)
                 {
                     return(2);
                 }
                 if(prec[i-2][j-2] == 2 && prec[i-1][j-1] == 2 && prec[i+1][j+1] == 2 && prec[i+2][j+2]==2)
                 {
                     return(2);
                 }
                 if(prec[i-2][j+2] == 2 && prec[i-1][j+1] == 2 && prec[i+1][j-1] == 2 && prec[i+2][j-2])
                 {
                     return(2);
                 }

            }
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(prec[1][i] == 1)
        {
            if(i == 5)
            {
                return(-1);
            }
        }
        else
        {
            break;
        }

    }
    for(int i = 1; i <= 5; i++)
    {
        if(prec[5][i] == 1)
        {
            if(i == 5)
            {
                return(-1);
            }
        }
        else
        {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
         if(prec[i][5] == 1)
         {
            if(i == 5)
            {
                return(-1);
            }
         }
         else
         {
             break;
         }

    }
    for(int i = 1; i <= 5; i++)
    {
        if(prec[i][1] == 1)
        {
            if(i == 5)
            {

                return(-1);
            }
        }
        else
        {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(prec[1][i] == 2)
        {
            if(i == 5)
            {

                return(2);
            }
        }
        else {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(prec[5][i] == 2)
        {
            if(i == 5)
            {

                return(2);
            }
        }
        else {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(prec[i][5] == 2)
        {
            if(i == 5)
            {

                return(2);
            }
        }
            else {
                break;
            }

    }
    for(int i = 1; i <= 5; i++)
    {
        if(prec[i][1] == 2)
        {
            if(i == 5)
            {
                return(2);
            }
        }
        else
        {
            break;
        }
    }
    if (predicted_counter == 25)
    {
        return(0);
    }
    else {
        return(1);
    }
}

int MainWindow::MAX(int a, int b)
{
    if(a >= b)
    {
        return(a);
    }
    else{
        return(b);
    }
}
int MainWindow::MIN(int a, int b)
{
    if(a <= b)
    {
        return(a);
    }
    else{
        return(b);
    }
}


int MainWindow::rnd(int min, int max)
{
  // Установить генератор случайных чисел
  srand(time(nullptr));

  // Получить случайное число - формула
  int num = min + rand() % (max - min + 1);

  return num;
}

void MainWindow::Enable()
{
    ui->pushButton11->setEnabled(true);
    ui->pushButton12->setEnabled(true);
    ui->pushButton13->setEnabled(true);
    ui->pushButton14->setEnabled(true);
    ui->pushButton15->setEnabled(true);

    ui->pushButton21->setEnabled(true);
    ui->pushButton22->setEnabled(true);
    ui->pushButton23->setEnabled(true);
    ui->pushButton24->setEnabled(true);
    ui->pushButton25->setEnabled(true);

    ui->pushButton31->setEnabled(true);
    ui->pushButton32->setEnabled(true);
    ui->pushButton33->setEnabled(true);
    ui->pushButton34->setEnabled(true);
    ui->pushButton35->setEnabled(true);

    ui->pushButton41->setEnabled(true);
    ui->pushButton42->setEnabled(true);
    ui->pushButton43->setEnabled(true);
    ui->pushButton44->setEnabled(true);
    ui->pushButton45->setEnabled(true);

    ui->pushButton51->setEnabled(true);
    ui->pushButton52->setEnabled(true);
    ui->pushButton53->setEnabled(true);
    ui->pushButton54->setEnabled(true);
    ui->pushButton55->setEnabled(true);
}

void MainWindow::Disable()
{
    ui->pushButton11->setEnabled(false);
    ui->pushButton12->setEnabled(false);
    ui->pushButton13->setEnabled(false);
    ui->pushButton14->setEnabled(false);
    ui->pushButton15->setEnabled(false);

    ui->pushButton21->setEnabled(false);
    ui->pushButton22->setEnabled(false);
    ui->pushButton23->setEnabled(false);
    ui->pushButton24->setEnabled(false);
    ui->pushButton25->setEnabled(false);

    ui->pushButton31->setEnabled(false);
    ui->pushButton32->setEnabled(false);
    ui->pushButton33->setEnabled(false);
    ui->pushButton34->setEnabled(false);
    ui->pushButton35->setEnabled(false);

    ui->pushButton41->setEnabled(false);
    ui->pushButton42->setEnabled(false);
    ui->pushButton43->setEnabled(false);
    ui->pushButton44->setEnabled(false);
    ui->pushButton45->setEnabled(false);

    ui->pushButton51->setEnabled(false);
    ui->pushButton52->setEnabled(false);
    ui->pushButton53->setEnabled(false);
    ui->pushButton54->setEnabled(false);
    ui->pushButton55->setEnabled(false);
}

int MainWindow:: isGameEnded()
{

    for (int i = 2; i <= 4; i++)
    {
        for (int j = 2; j <= 4; j++)
        {
            if (logic[i][j] == 1)
            {
                 if(logic[i-2][j] == 1 && logic[i-1][j] == 1 && logic[i+1][j] == 1 && logic[i+2][j] == 1)
                 {
                     ui->label_2->setText("X won the game");
                     game = false;
                     return(1);
                 }
                 if(logic[i][j-2] == 1 && logic[i][j-1] == 1 && logic[i][j+1] == 1 && logic[i][j+2]==1)
                 {
                     ui->label_2->setText("X won the game");
                     game = false;
                     return(1);
                 }
                 if(logic[i-2][j-2] == 1 && logic[i-1][j-1] == 1 && logic[i+1][j+1] == 1 && logic[i+2][j+2] == 1)
                 {
                     ui->label_2->setText("X won the game");
                     game = false;
                     return(1);
                 }
                 if(logic[i-2][j+2] == 1 && logic[i-1][j+1] == 1 && logic[i+1][j-1] == 1 && logic[i+2][j-2]==1)
                 {
                     ui->label_2->setText("X won the game");
                     game = false;
                     return(1);
                 }

            }
            if (logic[i][j] == 2)
            {
                if(logic[i-2][j] == 2 && logic[i-1][j] == 2 && logic[i+1][j] == 2 && logic[i+2][j] == 2)
                 {
                     ui->label_2->setText("O won the game");
                     game = false;
                     return(2);
                 }
                 if(logic[i][j-2] == 2 && logic[i][j-1] == 2 && logic[i][j+1] == 2 && logic[i][j+2] == 2)
                 {
                     ui->label_2->setText("O won the game");
                     game = false;
                     return(2);
                 }
                 if(logic[i-2][j-2] == 2 && logic[i-1][j-1] == 2 && logic[i+1][j+1] == 2 && logic[i+2][j+2]==2)
                 {
                     ui->label_2->setText("O won the game");
                     game = false;
                     return(2);
                 }
                 if(logic[i-2][j+2] == 2 && logic[i-1][j+1] == 2 && logic[i+1][j-1] == 2 && logic[i+2][j-2])
                 {
                     ui->label_2->setText("O won the game");
                     game = false;
                     return(2);
                 }

            }
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(logic[1][i] == 1)
        {
            if(i == 5)
            {
                ui->label_2->setText("X won the game");
                game = false;
                return(1);
            }
        }
        else
        {
            break;
        }

    }
    for(int i = 1; i <= 5; i++)
    {
        if(logic[5][i] == 1)
        {
            if(i == 5)
            {
                ui->label_2->setText("X won the game");
                game = false;
                return(1);
            }
        }
        else
        {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
         if(logic[i][5] == 1)
         {
            if(i == 5)
            {
                ui->label_2->setText("X won the game");
                game = false;
                return(1);
            }
         }
         else
         {
             break;
         }

    }
    for(int i = 1; i <= 5; i++)
    {
        if(logic[i][1] == 1)
        {
            if(i == 5)
            {
                ui->label_2->setText("X won the game");
                game = false;
                return(1);
            }
        }
        else
        {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(logic[1][i] == 2)
        {
            if(i == 5)
            {
                ui->label_2->setText("O won the game");
                game = false;
                return(2);
            }
        }
        else {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(logic[5][i] == 2)
        {
            if(i == 5)
            {
                ui->label_2->setText("O won the game");
                game = false;
                return(2);
            }
        }
        else {
            break;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        if(logic[i][5] == 2)
        {
            if(i == 5)
            {
                ui->label_2->setText("O won the game");
                game = false;
                return(2);
            }
        }
            else {
                break;
            }

    }
    for(int i = 1; i <= 5; i++)
    {
        if(logic[i][1] == 2)
        {
            if(i == 5)
            {
                ui->label_2->setText("O won the game");
                game = false;
                return(2);
            }
        }
        else
        {
            break;
        }
    }
    if (counter == 25)
    {
        ui->label_2->setText("Draw");
        game = false;
        return(0);
    }
    else
    {
        return(-1);
    }
}


int MainWindow::getPos()
{
    int local;
    bool poka = true;;
    best_score = -2;
    int x = 0;
    int y = 0;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++ )
        {
            prec[i][j] = logic[i][j];
        }
    }
    while(poka)
    {
        for (int i = 1; i<=5 ;i++)
        {
            if(isGameEnded() == 0)
            {
                poka = false;
                break;
            }
            local = rnd(1,5);
            if(logic[i][local] == 0)
            {
                x = i;
                y = local;
                poka = false;
                break;

            }

        }
    }
    num[x][y] = 1;
    omoves();
    return(0);
}



void MainWindow::xmoves()
{

    ui->label_2->setText("");
    int a = 0;
    int b = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (num[i][j] == 1)
            {
                a = i;
      b = j;
            }
        }
    }

    if (a == 1)
    {
        if (b == 1)
        {
            ui->pushButton11->setEnabled(false);
            ui->pushButton11->setText("X");
            logic [1][1] = 1;
        }
        else if (b == 2)
        {
            ui->pushButton12->setEnabled(false);
            ui->pushButton12->setText("X");
            logic [1][2] = 1;
        }
        else if (b == 3)
        {
            ui->pushButton13->setEnabled(false);
            ui->pushButton13->setText("X");
            logic [1][3] = 1;
        }
        else if (b == 4)
        {
            ui->pushButton14->setEnabled(false);
            ui->pushButton14->setText("X");
            logic [1][4] = 1;
        }
        else if (b == 5)
        {
            ui->pushButton15->setEnabled(false);
            ui->pushButton15->setText("X");
            logic [1][5] = 1;
        }
    }
    else if (a == 2)
    {
        if (b == 1)
        {
            ui->pushButton21->setEnabled(false);
            ui->pushButton21->setText("X");
            logic [2][1] = 1;
        }
        else if (b == 2)
        {
            ui->pushButton22->setEnabled(false);
            ui->pushButton22->setText("X");
            logic [2][2] = 1;
        }
        else if (b == 3)
        {
            ui->pushButton23->setEnabled(false);
            ui->pushButton23->setText("X");
            logic [2][3] = 1;
        }
        else if (b == 4)
        {
            ui->pushButton24->setEnabled(false);
            ui->pushButton24->setText("X");
            logic [2][4] = 1;
        }
        else if (b == 5)
        {
            ui->pushButton25->setEnabled(false);
            ui->pushButton25->setText("X");
            logic [2][5] = 1;
        }
    }
    else if (a == 3)
    {
        if (b == 1)
        {
            ui->pushButton31->setEnabled(false);
            ui->pushButton31->setText("X");
            logic [3][1] = 1;

        }
        else if (b == 2)
        {
            ui->pushButton32->setEnabled(false);
            ui->pushButton32->setText("X");
            logic [3][2] = 1;
        }
        else if (b == 3)
        {
            ui->pushButton33->setEnabled(false);
            ui->pushButton33->setText("X");
            logic [3][3] = 1;

        }
        else if (b == 4)
        {
            ui->pushButton34->setEnabled(false);
            ui->pushButton34->setText("X");
            logic [3][4] = 1;
        }
        else if (b == 5)
        {
            ui->pushButton35->setEnabled(false);
            ui->pushButton35->setText("X");
            logic [3][5] = 1;
        }
    }
    else if (a == 4)
    {
        if (b == 1)
        {
            ui->pushButton41->setEnabled(false);
            ui->pushButton41->setText("X");
            logic [4][1] = 1;
        }
        else if (b == 2)
        {
            ui->pushButton42->setEnabled(false);
            ui->pushButton42->setText("X");
            logic [4][2] = 1;
        }
        else if (b == 3)
        {
            ui->pushButton43->setEnabled(false);
            ui->pushButton43->setText("X");
            logic [4][3] = 1;
        }
        else if (b == 4)
        {
            ui->pushButton44->setEnabled(false);
            ui->pushButton44->setText("X");
            logic [4][4] = 1;

        }
        else if (b == 5)
        {
            ui->pushButton45->setEnabled(false);
            ui->pushButton45->setText("X");
            logic [4][5] = 1;
        }
    }
    else if (a == 5)
    {
        if (b == 1)
        {
            ui->pushButton51->setEnabled(false);
            ui->pushButton51->setText("X");
            logic [5][1] = 1;
        }
        else if (b == 2)
        {
            ui->pushButton52->setEnabled(false);
            ui->pushButton52->setText("X");
            logic [5][2] = 1;
        }
        else if (b == 3)
        {
            ui->pushButton53->setEnabled(false);
            ui->pushButton53->setText("X");
            logic [5][3] = 1;
        }
        else if (b == 4)
        {
            ui->pushButton54->setEnabled(false);
            ui->pushButton54->setText("X");
            logic [5][4] = 1;
        }
        else if (b == 5)
        {
            ui->pushButton55->setEnabled(false);
            ui->pushButton55->setText("X");
            logic [5][5] = 1;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            num[i][j] = 0;
        }
    }
    isXmoves = false;
    counter++;
    if (isGameEnded() == 1 or isGameEnded() == 2 or isGameEnded() == 0)
    {
        ui->pushButton_play_VS_player->setText("Play again");
        ui->pushButton_play_VS_player->setEnabled(true);
        playagain =true;
    }
    else
    {
        ui->pushButton_play_VS_player->setText("Play with player");
        ui->pushButton_play_VS_player->setEnabled(false);
    }
    if(doiplaywithBOT)
    {
        getPos();
    }
}

void MainWindow::omoves()
{
    int a = 0;
    int b = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (num[i][j] == 1)
            {
                a = i;
      b = j;
            }
        }
    }

    if (a == 1)
    {
        if (b == 1)
        {
            ui->pushButton11->setEnabled(false);
            ui->pushButton11->setText("O");
            logic [1][1] = 2;
        }
        else if (b == 2)
        {
            ui->pushButton12->setEnabled(false);
            ui->pushButton12->setText("O");
            logic [1][2] = 2;
        }
        else if (b == 3)
        {
            ui->pushButton13->setEnabled(false);
            ui->pushButton13->setText("O");
            logic [1][3] = 2;
        }
        else if (b == 4)
        {
            ui->pushButton14->setEnabled(false);
            ui->pushButton14->setText("O");
            logic [1][4] = 2;
        }
        else if (b == 5)
        {
            ui->pushButton15->setEnabled(false);
            ui->pushButton15->setText("O");
            logic [1][5] = 2;
        }
    }
    else if (a == 2)
    {
        if (b == 1)
        {
            ui->pushButton21->setEnabled(false);
            ui->pushButton21->setText("O");
            logic [2][1] = 2;
        }
        else if (b == 2)
        {
            ui->pushButton22->setEnabled(false);
            ui->pushButton22->setText("O");
            logic [2][2] = 2;
        }
        else if (b == 3)
        {
            ui->pushButton23->setEnabled(false);
            ui->pushButton23->setText("O");
            logic [2][3] = 2;
        }
        else if (b == 4)
        {
            ui->pushButton24->setEnabled(false);
            ui->pushButton24->setText("O");
            logic [2][4] = 2;
        }
        else if (b == 5)
        {
            ui->pushButton25->setEnabled(false);
            ui->pushButton25->setText("O");
            logic [2][5] = 2;
        }
    }
    else if (a == 3)
    {
        if (b == 1)
        {
            ui->pushButton31->setEnabled(false);
            ui->pushButton31->setText("O");
            logic [3][1] = 2;
        }
        else if (b == 2)
        {
            ui->pushButton32->setEnabled(false);
            ui->pushButton32->setText("O");
            logic [3][2] = 2;
        }
        else if (b == 3)
        {
            ui->pushButton33->setEnabled(false);
            ui->pushButton33->setText("O");
            logic [3][3] = 2;
        }
        else if (b == 4)
        {
            ui->pushButton34->setEnabled(false);
            ui->pushButton34->setText("O");
            logic [3][4] = 2;
        }
        else if (b == 5)
        {
            ui->pushButton35->setEnabled(false);
            ui->pushButton35->setText("O");
            logic [3][5] = 2;
        }
    }
    else if (a == 4)
    {
        if (b == 1)
        {
            ui->pushButton41->setEnabled(false);
            ui->pushButton41->setText("O");
            logic [4][1] = 2;
        }
        else if (b == 2)
        {
            ui->pushButton42->setEnabled(false);
            ui->pushButton42->setText("O");
            logic [4][2] = 2;
        }
        else if (b == 3)
        {
            ui->pushButton43->setEnabled(false);
            ui->pushButton43->setText("O");
            logic [4][3] = 2;
        }
        else if (b == 4)
        {
            ui->pushButton44->setEnabled(false);
            ui->pushButton44->setText("O");
            logic [4][4] = 2;
        }
        else if (b == 5)
        {
            ui->pushButton45->setEnabled(false);
            ui->pushButton45->setText("O");
            logic [4][5] = 2;
        }
    }
    else if (a == 5)
    {
        if (b == 1)
        {
            ui->pushButton51->setEnabled(false);
            ui->pushButton51->setText("O");
            logic [5][1] = 2;
        }
        else if (b == 2)
        {
            ui->pushButton52->setEnabled(false);
            ui->pushButton52->setText("O");
            logic [5][2] = 2;
        }
        else if (b == 3)
        {
            ui->pushButton53->setEnabled(false);
            ui->pushButton53->setText("O");
            logic [5][3] = 2;
        }
        else if (b == 4)
        {
            ui->pushButton54->setEnabled(false);
            ui->pushButton54->setText("O");
            logic [5][4] = 2;
        }
        else if (b == 5)
        {
            ui->pushButton55->setEnabled(false);
            ui->pushButton55->setText("O");
            logic [5][5] = 2;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            num[i][j] = 0;
        }
    }
    isXmoves = true;
    counter++;
    isGameEnded();
}

void MainWindow::on_pushButton11_clicked()
{
    num[1][1] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton12_clicked()
{
    num[1][2] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton13_clicked()
{
    num[1][3] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton14_clicked()
{
    num[1][4] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton15_clicked()
{
    num[1][5] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton21_clicked()
{
    num[2][1] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton22_clicked()
{
    num[2][2] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton23_clicked()
{
    num[2][3] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton24_clicked()
{
    num[2][4] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton25_clicked()
{
    num[2][5] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton31_clicked()
{
    num[3][1] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton32_clicked()
{
    num[3][2] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton33_clicked()
{
    num[3][3] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton34_clicked()
{
    num[3][4] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton35_clicked()
{
    num[3][5] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton41_clicked()
{
    num[4][1] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton42_clicked()
{
    num[4][2] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton43_clicked()
{
    num[4][3] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton44_clicked()
{
    num[4][4] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton45_clicked()
{
    num[4][5] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton51_clicked()
{
    num[5][1] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton52_clicked()
{
    num[5][2] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton53_clicked()
{
    num[5][3] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton54_clicked()
{
    num[5][4] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}

void MainWindow::on_pushButton55_clicked()
{
    num[5][5] = 1;
    z = true;
    if (game)
    {
        if (isXmoves)
        {
            xmoves();
        }
        else
        {
            omoves();
        }

    }

}




void MainWindow::on_pushButton_play_VS_player_clicked()
{

    ui->pushButton11->setEnabled(true);
    ui->pushButton12->setEnabled(true);
    ui->pushButton13->setEnabled(true);
    ui->pushButton14->setEnabled(true);
    ui->pushButton15->setEnabled(true);

    ui->pushButton21->setEnabled(true);
    ui->pushButton22->setEnabled(true);
    ui->pushButton23->setEnabled(true);
    ui->pushButton24->setEnabled(true);
    ui->pushButton25->setEnabled(true);

    ui->pushButton31->setEnabled(true);
    ui->pushButton32->setEnabled(true);
    ui->pushButton33->setEnabled(true);
    ui->pushButton34->setEnabled(true);
    ui->pushButton35->setEnabled(true);

    ui->pushButton41->setEnabled(true);
    ui->pushButton42->setEnabled(true);
    ui->pushButton43->setEnabled(true);
    ui->pushButton44->setEnabled(true);
    ui->pushButton45->setEnabled(true);

    ui->pushButton51->setEnabled(true);
    ui->pushButton52->setEnabled(true);
    ui->pushButton53->setEnabled(true);
    ui->pushButton54->setEnabled(true);
    ui->pushButton55->setEnabled(true);



    ui->pushButton_play_VS_player->setEnabled(false);
    ui->pushButton_play_vs_bot->setEnabled(false);
    QString e = "";

    if(playagain)
    {
        ui->pushButton_play_VS_player->setText("Play vs player");
        ui->pushButton_play_VS_player->setEnabled(true);
        ui->pushButton_play_vs_bot->setEnabled(true);
        for(int i = 1; i <= 5; i++)
        {
            for(int j = 1; j <= 5; j++ )
            {
                prec[i][j] = 0;
                logic[i][j] = 0;
                num[i][j] = 0;

            }
        }
        ui->pushButton11->setText(" ");
        ui->pushButton12->setText(" ");
        ui->pushButton13->setText(" ");
        ui->pushButton14->setText(" ");
        ui->pushButton15->setText(" ");

        ui->pushButton21->setText(" ");
        ui->pushButton22->setText(" ");
        ui->pushButton23->setText(" ");
        ui->pushButton24->setText(" ");
        ui->pushButton25->setText(" ");

        ui->pushButton31->setText(" ");
        ui->pushButton32->setText(" ");
        ui->pushButton33->setText(" ");
        ui->pushButton34->setText(" ");
        ui->pushButton35->setText(" ");

        ui->pushButton41->setText(" ");
        ui->pushButton42->setText(" ");
        ui->pushButton43->setText(" ");
        ui->pushButton44->setText(" ");
        ui->pushButton45->setText(" ");

        ui->pushButton51->setText(" ");
        ui->pushButton52->setText(" ");
        ui->pushButton53->setText(" ");
        ui->pushButton54->setText(" ");
        ui->pushButton55->setText(" ");
        isXmoves = true;
        playagain = false;
        counter = 0;


    }
    else
    {
        game = true;
        ui->label_2->setText("X goes first");
    }




}



void MainWindow::on_pushButton_play_vs_bot_clicked()
{
    ui->pushButton11->setEnabled(true);
    ui->pushButton12->setEnabled(true);
    ui->pushButton13->setEnabled(true);
    ui->pushButton14->setEnabled(true);
    ui->pushButton15->setEnabled(true);

    ui->pushButton21->setEnabled(true);
    ui->pushButton22->setEnabled(true);
    ui->pushButton23->setEnabled(true);
    ui->pushButton24->setEnabled(true);
    ui->pushButton25->setEnabled(true);

    ui->pushButton31->setEnabled(true);
    ui->pushButton32->setEnabled(true);
    ui->pushButton33->setEnabled(true);
    ui->pushButton34->setEnabled(true);
    ui->pushButton35->setEnabled(true);

    ui->pushButton41->setEnabled(true);
    ui->pushButton42->setEnabled(true);
    ui->pushButton43->setEnabled(true);
    ui->pushButton44->setEnabled(true);
    ui->pushButton45->setEnabled(true);

    ui->pushButton51->setEnabled(true);
    ui->pushButton52->setEnabled(true);
    ui->pushButton53->setEnabled(true);
    ui->pushButton54->setEnabled(true);
    ui->pushButton55->setEnabled(true);

    ui->label_2->setText("Player goes first");

    ui->pushButton_play_VS_player->setEnabled(false);
    ui->pushButton_play_vs_bot->setEnabled(false);
    game = true;

    doiplaywithBOT = true;

    ui->label_2->setText("Player moves first");
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_play_VS_player_clicked();

    void on_pushButton11_clicked();

    void on_pushButton12_clicked();

    void on_pushButton13_clicked();

    void on_pushButton14_clicked();

    void on_pushButton15_clicked();

    void on_pushButton21_clicked();

    void on_pushButton22_clicked();

    void on_pushButton23_clicked();

    void on_pushButton24_clicked();

    void on_pushButton25_clicked();

    void on_pushButton31_clicked();

    void on_pushButton32_clicked();

    void on_pushButton33_clicked();

    void on_pushButton34_clicked();

    void on_pushButton35_clicked();

    void on_pushButton41_clicked();

    void on_pushButton42_clicked();

    void on_pushButton43_clicked();

    void on_pushButton44_clicked();

    void on_pushButton45_clicked();

    void on_pushButton51_clicked();

    void on_pushButton52_clicked();

    void on_pushButton53_clicked();

    void on_pushButton54_clicked();

    void on_pushButton55_clicked();

    void on_pushButton_play_vs_bot_clicked();

private:
    Ui::MainWindow *ui;



    void xmoves();

    void omoves();

    int isGameEnded();

    int miniMax();

    int prediction();

    int getPos();

    int MAX(int a, int b);

    int MIN(int a, int b);

    void Disable();

    void Enable();

    int rnd(int min, int max);

    int score = -1;

    int best_score = -1;

    bool isBotMoveThink = true;

    int predicted_counter = 0;

    int counter = 0;

    bool z = false;

    bool game = false;

    bool isXmoves = true;

    bool doiplaywithBOT = false;

    bool playagain = false;

    int logic[6][6] = {
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0}
    };

    int num[6][6] = {
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0}
    };

    int prec[6][6] = {
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0}
    };
};




#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formulairefonds.h"
#include "formulairecadastre.h"
#include "formulaireicono.h"
#include "formulairefilmographie.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList listeGrilles;
    listeGrilles << "Ensemble des fonds" << "Cadastres" << "Documents iconographiques" << "Documents filmographiques";
    modele = new QStringListModel(listeGrilles);
    ui->listView->setModel(modele);
    ui->pushButton->setText("Afficher la sélection");
    setStyleSheet("MainWindow{background-color : lightblue}");

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(clicSelection()));
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(clicFonds()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::clicSelection()
{
    QItemSelectionModel *selection = ui->listView->selectionModel();
    QModelIndex indexElementSelectionne = selection->currentIndex();
    indexElementSelectionne.row();
    switch (indexElementSelectionne.row())
    {
        case 0:
            clicFonds();
        break;
        case 1:
            clicCadastre();
        break;
        case 2:
            clicIcono();
        break;
        case 3:
            clicFilm();
        break;
        default:
        break;
    }

}

void MainWindow::clicFonds()
{
    formulaireFonds *formFonds = new formulaireFonds();
    formFonds->setStyleSheet("QDialog{background-color : lightblue}");
    formFonds->show();
}

void MainWindow::clicCadastre()
{
    FormulaireCadastre *formCadastre = new FormulaireCadastre();
    formCadastre->setStyleSheet("QDialog{background-color : lightblue}");
    formCadastre->show();
}

void MainWindow::clicIcono()
{
    FormulaireIcono *formIcono = new FormulaireIcono();
    formIcono->setStyleSheet("QDialog{background-color : lightblue}");
    formIcono->show();
}

void MainWindow::clicFilm()
{
    FormulaireFilmographie *formFilm = new FormulaireFilmographie();
    formFilm->setStyleSheet("QDialog{background-color : lightblue}");
    formFilm->show();
}

/*void MainWindow::on_pushButton_clicked()
{

}*/

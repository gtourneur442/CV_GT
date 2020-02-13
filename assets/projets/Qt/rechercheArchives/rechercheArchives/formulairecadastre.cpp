#include "formulairecadastre.h"
#include "ui_formulairecadastre.h"

FormulaireCadastre::FormulaireCadastre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormulaireCadastre)
{
    ui->setupUi(this);
}

FormulaireCadastre::~FormulaireCadastre()
{
    delete ui;
}

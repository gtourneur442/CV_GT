#include "formulaireicono.h"
#include "ui_formulaireicono.h"

FormulaireIcono::FormulaireIcono(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormulaireIcono)
{
    ui->setupUi(this);
}

FormulaireIcono::~FormulaireIcono()
{
    delete ui;
}

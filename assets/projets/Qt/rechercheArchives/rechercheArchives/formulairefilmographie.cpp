#include "formulairefilmographie.h"
#include "ui_formulairefilmographie.h"

FormulaireFilmographie::FormulaireFilmographie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormulaireFilmographie)
{
    ui->setupUi(this);
}

FormulaireFilmographie::~FormulaireFilmographie()
{
    delete ui;
}

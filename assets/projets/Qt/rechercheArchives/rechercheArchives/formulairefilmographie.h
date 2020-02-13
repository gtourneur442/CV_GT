#ifndef FORMULAIREFILMOGRAPHIE_H
#define FORMULAIREFILMOGRAPHIE_H

#include <QDialog>

namespace Ui {
class FormulaireFilmographie;
}

class FormulaireFilmographie : public QDialog
{
    Q_OBJECT

public:
    explicit FormulaireFilmographie(QWidget *parent = nullptr);
    ~FormulaireFilmographie();

private:
    Ui::FormulaireFilmographie *ui;
};

#endif // FORMULAIREFILMOGRAPHIE_H

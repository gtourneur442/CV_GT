#ifndef FORMULAIREICONO_H
#define FORMULAIREICONO_H

#include <QDialog>

namespace Ui {
class FormulaireIcono;
}

class FormulaireIcono : public QDialog
{
    Q_OBJECT

public:
    explicit FormulaireIcono(QWidget *parent = nullptr);
    ~FormulaireIcono();

private:
    Ui::FormulaireIcono *ui;
};

#endif // FORMULAIREICONO_H

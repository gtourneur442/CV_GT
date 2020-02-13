#ifndef FORMULAIRECADASTRE_H
#define FORMULAIRECADASTRE_H

#include <QDialog>

namespace Ui {
class FormulaireCadastre;
}

class FormulaireCadastre : public QDialog
{
    Q_OBJECT

public:
    explicit FormulaireCadastre(QWidget *parent = nullptr);
    ~FormulaireCadastre();

private:
    Ui::FormulaireCadastre *ui;
};

#endif // FORMULAIRECADASTRE_H

#include "formulairefonds.h"
#include "ui_formulairefonds.h"

formulaireFonds::formulaireFonds(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formulaireFonds)
{
    ui->setupUi(this);
}

formulaireFonds::~formulaireFonds()
{
    delete ui;
}

/********************************************************************************
** Form generated from reading UI file 'formulairecadastre.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULAIRECADASTRE_H
#define UI_FORMULAIRECADASTRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FormulaireCadastre
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FormulaireCadastre)
    {
        if (FormulaireCadastre->objectName().isEmpty())
            FormulaireCadastre->setObjectName(QString::fromUtf8("FormulaireCadastre"));
        FormulaireCadastre->resize(701, 83);
        verticalLayout = new QVBoxLayout(FormulaireCadastre);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(FormulaireCadastre);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(FormulaireCadastre);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(FormulaireCadastre);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FormulaireCadastre);
        QObject::connect(buttonBox, SIGNAL(accepted()), FormulaireCadastre, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FormulaireCadastre, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormulaireCadastre);
    } // setupUi

    void retranslateUi(QDialog *FormulaireCadastre)
    {
        FormulaireCadastre->setWindowTitle(QApplication::translate("FormulaireCadastre", "Cadastre", nullptr));
        label->setText(QApplication::translate("FormulaireCadastre", "Lieu(x)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormulaireCadastre: public Ui_FormulaireCadastre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIRECADASTRE_H

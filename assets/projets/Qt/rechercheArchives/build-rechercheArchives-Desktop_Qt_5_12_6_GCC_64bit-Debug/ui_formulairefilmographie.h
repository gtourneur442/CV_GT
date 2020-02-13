/********************************************************************************
** Form generated from reading UI file 'formulairefilmographie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULAIREFILMOGRAPHIE_H
#define UI_FORMULAIREFILMOGRAPHIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FormulaireFilmographie
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FormulaireFilmographie)
    {
        if (FormulaireFilmographie->objectName().isEmpty())
            FormulaireFilmographie->setObjectName(QString::fromUtf8("FormulaireFilmographie"));
        FormulaireFilmographie->resize(1074, 269);
        verticalLayout = new QVBoxLayout(FormulaireFilmographie);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(FormulaireFilmographie);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(FormulaireFilmographie);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(FormulaireFilmographie);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_3 = new QLineEdit(FormulaireFilmographie);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_3 = new QLabel(FormulaireFilmographie);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(FormulaireFilmographie);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(FormulaireFilmographie);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_2 = new QSpinBox(FormulaireFilmographie);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(-3600);
        spinBox_2->setMaximum(2020);

        horizontalLayout->addWidget(spinBox_2);

        label_5 = new QLabel(FormulaireFilmographie);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        spinBox = new QSpinBox(FormulaireFilmographie);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-3600);
        spinBox->setMaximum(2020);

        horizontalLayout->addWidget(spinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        label_6 = new QLabel(FormulaireFilmographie);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_4 = new QLineEdit(FormulaireFilmographie);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_4);

        label_7 = new QLabel(FormulaireFilmographie);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        lineEdit_5 = new QLineEdit(FormulaireFilmographie);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_5);

        label_8 = new QLabel(FormulaireFilmographie);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        checkBox = new QCheckBox(FormulaireFilmographie);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, checkBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(FormulaireFilmographie);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FormulaireFilmographie);
        QObject::connect(buttonBox, SIGNAL(accepted()), FormulaireFilmographie, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FormulaireFilmographie, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormulaireFilmographie);
    } // setupUi

    void retranslateUi(QDialog *FormulaireFilmographie)
    {
        FormulaireFilmographie->setWindowTitle(QApplication::translate("FormulaireFilmographie", "Films", nullptr));
        label->setText(QApplication::translate("FormulaireFilmographie", "Lieu", nullptr));
        label_2->setText(QApplication::translate("FormulaireFilmographie", "Objet", nullptr));
        label_3->setText(QApplication::translate("FormulaireFilmographie", "Auteur", nullptr));
        label_4->setText(QApplication::translate("FormulaireFilmographie", "Ann\303\251es", nullptr));
        label_5->setText(QApplication::translate("FormulaireFilmographie", "\303\240", nullptr));
        label_6->setText(QApplication::translate("FormulaireFilmographie", "Recherche libre", nullptr));
        label_7->setText(QApplication::translate("FormulaireFilmographie", "Recherche Plein Texte", nullptr));
        label_8->setText(QApplication::translate("FormulaireFilmographie", "Uniquement documents num\303\251ris\303\251s", nullptr));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormulaireFilmographie: public Ui_FormulaireFilmographie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIREFILMOGRAPHIE_H

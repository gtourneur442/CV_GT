/********************************************************************************
** Form generated from reading UI file 'formulaireicono.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULAIREICONO_H
#define UI_FORMULAIREICONO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FormulaireIcono
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FormulaireIcono)
    {
        if (FormulaireIcono->objectName().isEmpty())
            FormulaireIcono->setObjectName(QString::fromUtf8("FormulaireIcono"));
        FormulaireIcono->resize(1042, 266);
        verticalLayout_2 = new QVBoxLayout(FormulaireIcono);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(FormulaireIcono);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(FormulaireIcono);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(FormulaireIcono);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(FormulaireIcono);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(FormulaireIcono);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(FormulaireIcono);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(FormulaireIcono);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(FormulaireIcono);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(FormulaireIcono);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(FormulaireIcono);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(FormulaireIcono);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(FormulaireIcono);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        label_7 = new QLabel(FormulaireIcono);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        checkBox = new QCheckBox(FormulaireIcono);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, checkBox);


        verticalLayout_2->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(FormulaireIcono);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(FormulaireIcono);
        QObject::connect(buttonBox, SIGNAL(accepted()), FormulaireIcono, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FormulaireIcono, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormulaireIcono);
    } // setupUi

    void retranslateUi(QDialog *FormulaireIcono)
    {
        FormulaireIcono->setWindowTitle(QApplication::translate("FormulaireIcono", "Fonds iconographiques", nullptr));
        label->setText(QApplication::translate("FormulaireIcono", "Sujet", nullptr));
        label_2->setText(QApplication::translate("FormulaireIcono", "Noms propres", nullptr));
        label_3->setText(QApplication::translate("FormulaireIcono", "Lieu", nullptr));
        label_4->setText(QApplication::translate("FormulaireIcono", "P\303\251riode historique", nullptr));
        label_5->setText(QApplication::translate("FormulaireIcono", "Typologie", nullptr));
        label_6->setText(QApplication::translate("FormulaireIcono", "Recherche libre", nullptr));
        label_7->setText(QApplication::translate("FormulaireIcono", "Uniquement documents num\303\251ris\303\251s", nullptr));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormulaireIcono: public Ui_FormulaireIcono {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIREICONO_H

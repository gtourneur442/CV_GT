/********************************************************************************
** Form generated from reading UI file 'formulairefonds.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULAIREFONDS_H
#define UI_FORMULAIREFONDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_formulaireFonds
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
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formulaireFonds)
    {
        if (formulaireFonds->objectName().isEmpty())
            formulaireFonds->setObjectName(QString::fromUtf8("formulaireFonds"));
        formulaireFonds->resize(987, 240);
        verticalLayout_2 = new QVBoxLayout(formulaireFonds);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(formulaireFonds);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formulaireFonds);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formulaireFonds);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formulaireFonds);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formulaireFonds);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(formulaireFonds);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(formulaireFonds);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(formulaireFonds);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-3600);
        spinBox->setMaximum(2020);

        horizontalLayout->addWidget(spinBox);

        label_5 = new QLabel(formulaireFonds);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        spinBox_2 = new QSpinBox(formulaireFonds);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(-3600);
        spinBox_2->setMaximum(2020);

        horizontalLayout->addWidget(spinBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        label_6 = new QLabel(formulaireFonds);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(formulaireFonds);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_6);

        label_7 = new QLabel(formulaireFonds);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEdit_7 = new QLineEdit(formulaireFonds);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_7);


        verticalLayout_2->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(formulaireFonds);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(formulaireFonds);
        QObject::connect(buttonBox, SIGNAL(accepted()), formulaireFonds, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formulaireFonds, SLOT(reject()));

        QMetaObject::connectSlotsByName(formulaireFonds);
    } // setupUi

    void retranslateUi(QDialog *formulaireFonds)
    {
        formulaireFonds->setWindowTitle(QApplication::translate("formulaireFonds", "Ensemble des Fonds", nullptr));
        label->setText(QApplication::translate("formulaireFonds", "Objet", nullptr));
        label_2->setText(QApplication::translate("formulaireFonds", "Noms propres", nullptr));
        label_3->setText(QApplication::translate("formulaireFonds", "Lieu(x)", nullptr));
        label_4->setText(QApplication::translate("formulaireFonds", "Ann\303\251es", nullptr));
        label_5->setText(QApplication::translate("formulaireFonds", "\303\240", nullptr));
        label_6->setText(QApplication::translate("formulaireFonds", "Recherche libre", nullptr));
        label_7->setText(QApplication::translate("formulaireFonds", "Recherche Plein Texte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formulaireFonds: public Ui_formulaireFonds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIREFONDS_H

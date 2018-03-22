/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *gbEntrada;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QPushButton *btnCadastro;
    QLineEdit *lineEdit;
    QPushButton *btnEntrar;
    QLabel *label_7;
    QGroupBox *gbOpcoes;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *gbExibir;
    QTableWidget *tblExibir;
    QGroupBox *gbCompromisso;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *textEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(847, 497);
        MainWindow->setMinimumSize(QSize(0, 497));
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 0, 361, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 410, 241, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 410, 231, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(520, 410, 171, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(710, 410, 131, 17));
        gbEntrada = new QGroupBox(centralWidget);
        gbEntrada->setObjectName(QStringLiteral("gbEntrada"));
        gbEntrada->setGeometry(QRect(0, 0, 271, 201));
        gridLayoutWidget = new QWidget(gbEntrada);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 230, 112));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        btnCadastro = new QPushButton(gridLayoutWidget);
        btnCadastro->setObjectName(QStringLiteral("btnCadastro"));

        gridLayout->addWidget(btnCadastro, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        btnEntrar = new QPushButton(gridLayoutWidget);
        btnEntrar->setObjectName(QStringLiteral("btnEntrar"));

        gridLayout->addWidget(btnEntrar, 2, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        gbOpcoes = new QGroupBox(centralWidget);
        gbOpcoes->setObjectName(QStringLiteral("gbOpcoes"));
        gbOpcoes->setGeometry(QRect(10, 220, 271, 181));
        gridLayoutWidget_2 = new QWidget(gbOpcoes);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 20, 251, 161));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        gbExibir = new QGroupBox(centralWidget);
        gbExibir->setObjectName(QStringLiteral("gbExibir"));
        gbExibir->setGeometry(QRect(330, 230, 351, 161));
        tblExibir = new QTableWidget(gbExibir);
        tblExibir->setObjectName(QStringLiteral("tblExibir"));
        tblExibir->setGeometry(QRect(10, 40, 331, 111));
        gbCompromisso = new QGroupBox(centralWidget);
        gbCompromisso->setObjectName(QStringLiteral("gbCompromisso"));
        gbCompromisso->setGeometry(QRect(310, 20, 381, 201));
        gridLayoutWidget_3 = new QWidget(gbCompromisso);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(60, 170, 281, 27));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(gridLayoutWidget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 3, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 3, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(gbCompromisso);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 30, 371, 134));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_4->addWidget(lineEdit_4, 1, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_4->addWidget(lineEdit_3, 0, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_4->addWidget(textEdit, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Agenda", nullptr));
        label->setText(QApplication::translate("MainWindow", "Estruturas-de-Dados-CC4651-Trabalho-da-Disciplina", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "IGOR DO NASCIMENTO ALVES", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "ALEXANDRE KENJY S KUMAGAI", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "AUGUSTO TUROLLA", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "RAFAEL DA SILVA", nullptr));
        gbEntrada->setTitle(QApplication::translate("MainWindow", "ENTRADA", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Senha:", nullptr));
        btnCadastro->setText(QApplication::translate("MainWindow", "Cadastro", nullptr));
        btnEntrar->setText(QApplication::translate("MainWindow", "Entrar", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Usuario:", nullptr));
        gbOpcoes->setTitle(QApplication::translate("MainWindow", "Op\303\247\303\265es", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Consulta", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Exibir Todos", nullptr));
        gbExibir->setTitle(QApplication::translate("MainWindow", "Exibir Todos", nullptr));
        gbCompromisso->setTitle(QApplication::translate("MainWindow", "Compromisso", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Deletar", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Voltar", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Descri\303\247\303\243o:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Nome:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Data:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *ajout_id;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *ajout_prix;
    QPushButton *pushButton;
    QLabel *label_7;
    QComboBox *ajout_type;
    QLabel *label_16;
    QComboBox *ajout_libelle;
    QLabel *label_17;
    QLabel *label_4;
    QLineEdit *ajout_cin;
    QLabel *label_5;
    QLineEdit *ajout_date;
    QWidget *tab_2;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *mod_id;
    QLineEdit *mod_cin;
    QPushButton *pushButton_3;
    QComboBox *mod_libelle;
    QLabel *label_13;
    QComboBox *mod_type;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_18;
    QLabel *label_33;
    QLineEdit *mod_prix;
    QLabel *label_34;
    QLineEdit *mod_date;
    QWidget *tab3;
    QLabel *label_12;
    QPushButton *pushButton_5;
    QLineEdit *supp_id;
    QWidget *tab_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QTableView *tableView;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QLineEdit *lineEdit_R;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QMenu *menuGestion_des_Factures;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(840, 590);
        QPalette palette;
        QBrush brush(QColor(255, 156, 85, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 791, 521));
        QFont font;
        font.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("color: rgb(58, 136, 145);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        ajout_id = new QLineEdit(tab);
        ajout_id->setObjectName(QStringLiteral("ajout_id"));
        ajout_id->setGeometry(QRect(190, 40, 121, 31));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 61, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font1.setPointSize(11);
        label->setFont(font1);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 210, 131, 21));
        label_3->setFont(font1);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 120, 81, 20));
        label_6->setFont(font1);
        ajout_prix = new QLineEdit(tab);
        ajout_prix->setObjectName(QStringLiteral("ajout_prix"));
        ajout_prix->setGeometry(QRect(190, 200, 121, 31));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 360, 111, 31));
        pushButton->setFont(font);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 30, 71, 41));
        label_7->setFont(font1);
        ajout_type = new QComboBox(tab);
        ajout_type->setObjectName(QStringLiteral("ajout_type"));
        ajout_type->setGeometry(QRect(610, 40, 121, 31));
        ajout_type->setFont(font1);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(60, 110, 71, 41));
        label_16->setFont(font1);
        ajout_libelle = new QComboBox(tab);
        ajout_libelle->setObjectName(QStringLiteral("ajout_libelle"));
        ajout_libelle->setGeometry(QRect(190, 110, 121, 31));
        ajout_libelle->setFont(font1);
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(-340, 310, 71, 41));
        label_17->setFont(font1);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(450, 200, 131, 21));
        label_4->setFont(font1);
        ajout_cin = new QLineEdit(tab);
        ajout_cin->setObjectName(QStringLiteral("ajout_cin"));
        ajout_cin->setGeometry(QRect(610, 190, 121, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(870, 190, 131, 21));
        label_5->setFont(font1);
        ajout_date = new QLineEdit(tab);
        ajout_date->setObjectName(QStringLiteral("ajout_date"));
        ajout_date->setGeometry(QRect(610, 120, 121, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setMinimumSize(QSize(515, 312));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 40, 61, 31));
        label_8->setFont(font1);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 170, 71, 31));
        label_10->setFont(font1);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(470, 270, 101, 41));
        label_11->setFont(font1);
        mod_id = new QLineEdit(tab_2);
        mod_id->setObjectName(QStringLiteral("mod_id"));
        mod_id->setGeometry(QRect(140, 40, 151, 31));
        mod_cin = new QLineEdit(tab_2);
        mod_cin->setObjectName(QStringLiteral("mod_cin"));
        mod_cin->setGeometry(QRect(580, 280, 131, 31));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 360, 111, 41));
        pushButton_3->setFont(font1);
        mod_libelle = new QComboBox(tab_2);
        mod_libelle->setObjectName(QStringLiteral("mod_libelle"));
        mod_libelle->setGeometry(QRect(150, 170, 151, 31));
        mod_libelle->setFont(font1);
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(470, 40, 71, 31));
        label_13->setFont(font1);
        mod_type = new QComboBox(tab_2);
        mod_type->setObjectName(QStringLiteral("mod_type"));
        mod_type->setGeometry(QRect(580, 40, 151, 31));
        mod_type->setFont(font1);
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(900, -100, 71, 31));
        label_14->setFont(font1);
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(470, 170, 71, 31));
        label_15->setFont(font1);
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(1340, -110, 71, 31));
        label_18->setFont(font1);
        label_33 = new QLabel(tab_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(30, 270, 101, 41));
        label_33->setFont(font1);
        mod_prix = new QLineEdit(tab_2);
        mod_prix->setObjectName(QStringLiteral("mod_prix"));
        mod_prix->setGeometry(QRect(150, 280, 131, 31));
        label_34 = new QLabel(tab_2);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(-190, 270, 101, 41));
        label_34->setFont(font1);
        mod_date = new QLineEdit(tab_2);
        mod_date->setObjectName(QStringLiteral("mod_date"));
        mod_date->setGeometry(QRect(580, 170, 131, 31));
        tabWidget->addTab(tab_2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QStringLiteral("tab3"));
        label_12 = new QLabel(tab3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(280, 120, 121, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font2.setPointSize(16);
        label_12->setFont(font2);
        pushButton_5 = new QPushButton(tab3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 280, 141, 51));
        pushButton_5->setFont(font1);
        supp_id = new QLineEdit(tab3);
        supp_id->setObjectName(QStringLiteral("supp_id"));
        supp_id->setGeometry(QRect(390, 120, 151, 41));
        tabWidget->addTab(tab3, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 387, 111, 31));
        pushButton_6->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral("../../Downloads/pngwing.com (4).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(20, 20));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 440, 111, 31));
        pushButton_8->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../Downloads/pngwing.com (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(22, 22));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(210, 390, 131, 31));
        pushButton_9->setFont(font1);
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 80, 711, 261));
        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(600, 40, 141, 31));
        pushButton_12->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../Downloads/pngwing.com (6).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon2);
        pushButton_12->setIconSize(QSize(20, 20));
        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(30, 40, 93, 31));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../Downloads/pngwing.com (7).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon3);
        pushButton_13->setIconSize(QSize(30, 30));
        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(630, 440, 111, 31));
        pushButton_11->setFont(font1);
        lineEdit_R = new QLineEdit(tab_3);
        lineEdit_R->setObjectName(QStringLiteral("lineEdit_R"));
        lineEdit_R->setGeometry(QRect(310, 40, 281, 31));
        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(210, 440, 131, 31));
        pushButton_10->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 840, 22));
        menuGestion_des_Factures = new QMenu(menubar);
        menuGestion_des_Factures->setObjectName(QStringLiteral("menuGestion_des_Factures"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGestion_des_Factures->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ajout_id->setText(QString());
        label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        ajout_prix->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Libelle", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        ajout_cin->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        ajout_date->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Libelle", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mod_id->setToolTip(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mod_id->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Stats", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "ORDER BY ASC", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "RESET", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "ARDUINO", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "ORDER BY DESC", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        menuGestion_des_Factures->setTitle(QApplication::translate("MainWindow", "Gestion des Factures", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

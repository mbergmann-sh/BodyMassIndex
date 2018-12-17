/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNeu;
    QAction *actionBerechnen;
    QAction *actionEnde;
    QAction *actionProgramminformation;
    QAction *actionInfo_zu_Qt;
    QAction *actionSpeichern;
    QAction *actionDrucken;
    QAction *actionReport_speichern_unter;
    QAction *actionReport_importieren;
    QAction *actionReport_verwerfen_und_neu_erfassen;
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_9;
    QLabel *label_2;
    QSpinBox *spinBox_Size;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_Weight;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_RolliWeight;
    QLabel *label_7;
    QDateTimeEdit *dateEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_Berechnen;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLCDNumber *lcdNumber;
    QLabel *label_warnung;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_4;
    QPushButton *btn_Neu;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QTextEdit *textEdit_Report;
    QPushButton *btn_Report_verwerfen;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_5;
    QPushButton *btn_Save;
    QPushButton *btn_Print;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menuHilfe;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(602, 487);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/img/personenwaage.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionNeu = new QAction(MainWindow);
        actionNeu->setObjectName(QStringLiteral("actionNeu"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/img/user-group-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNeu->setIcon(icon1);
        actionBerechnen = new QAction(MainWindow);
        actionBerechnen->setObjectName(QStringLiteral("actionBerechnen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/img/kcalc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBerechnen->setIcon(icon2);
        actionEnde = new QAction(MainWindow);
        actionEnde->setObjectName(QStringLiteral("actionEnde"));
        QIcon icon3;
        QString iconThemeName = QStringLiteral("Waage.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(":/Icons/img/exit (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionEnde->setIcon(icon3);
        actionProgramminformation = new QAction(MainWindow);
        actionProgramminformation->setObjectName(QStringLiteral("actionProgramminformation"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/img/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProgramminformation->setIcon(icon4);
        actionInfo_zu_Qt = new QAction(MainWindow);
        actionInfo_zu_Qt->setObjectName(QStringLiteral("actionInfo_zu_Qt"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/img/ktip.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo_zu_Qt->setIcon(icon5);
        actionSpeichern = new QAction(MainWindow);
        actionSpeichern->setObjectName(QStringLiteral("actionSpeichern"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/img/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSpeichern->setIcon(icon6);
        actionDrucken = new QAction(MainWindow);
        actionDrucken->setObjectName(QStringLiteral("actionDrucken"));
        actionDrucken->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/img/print_printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDrucken->setIcon(icon7);
        actionReport_speichern_unter = new QAction(MainWindow);
        actionReport_speichern_unter->setObjectName(QStringLiteral("actionReport_speichern_unter"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icons/img/SaveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReport_speichern_unter->setIcon(icon8);
        actionReport_importieren = new QAction(MainWindow);
        actionReport_importieren->setObjectName(QStringLiteral("actionReport_importieren"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icons/img/OpenFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReport_importieren->setIcon(icon9);
        actionReport_verwerfen_und_neu_erfassen = new QAction(MainWindow);
        actionReport_verwerfen_und_neu_erfassen->setObjectName(QStringLiteral("actionReport_verwerfen_und_neu_erfassen"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icons/img/recycle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReport_verwerfen_und_neu_erfassen->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Name = new QLineEdit(groupBox);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(lineEdit_Name, 0, 1, 1, 5);

        horizontalSpacer_5 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 6, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 9, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        spinBox_Size = new QSpinBox(groupBox);
        spinBox_Size->setObjectName(QStringLiteral("spinBox_Size"));
        spinBox_Size->setMinimumSize(QSize(61, 0));
        spinBox_Size->setMaximumSize(QSize(61, 16777215));
        spinBox_Size->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_Size->setMaximum(250);
        spinBox_Size->setValue(193);

        gridLayout->addWidget(spinBox_Size, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 5, 1, 1);

        doubleSpinBox_Weight = new QDoubleSpinBox(groupBox);
        doubleSpinBox_Weight->setObjectName(QStringLiteral("doubleSpinBox_Weight"));
        doubleSpinBox_Weight->setMinimumSize(QSize(61, 0));
        doubleSpinBox_Weight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_Weight->setMaximum(260.99);
        doubleSpinBox_Weight->setValue(103.2);

        gridLayout->addWidget(doubleSpinBox_Weight, 1, 6, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 7, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 8, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 9, 1, 2);

        doubleSpinBox_RolliWeight = new QDoubleSpinBox(groupBox);
        doubleSpinBox_RolliWeight->setObjectName(QStringLiteral("doubleSpinBox_RolliWeight"));
        doubleSpinBox_RolliWeight->setMinimumSize(QSize(61, 0));
        doubleSpinBox_RolliWeight->setMaximumSize(QSize(61, 16777215));
        doubleSpinBox_RolliWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_RolliWeight->setMaximum(199.99);

        gridLayout->addWidget(doubleSpinBox_RolliWeight, 1, 11, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 12, 1, 1);

        dateEdit = new QDateTimeEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setReadOnly(false);
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::TimeZone);

        gridLayout->addWidget(dateEdit, 0, 10, 1, 2);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(480, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        btn_Berechnen = new QPushButton(groupBox);
        btn_Berechnen->setObjectName(QStringLiteral("btn_Berechnen"));
        btn_Berechnen->setIcon(icon2);

        gridLayout_7->addWidget(btn_Berechnen, 1, 1, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 2, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(51, 0));
        lcdNumber->setMaximumSize(QSize(51, 23));
        lcdNumber->setStyleSheet(QLatin1String("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(lcdNumber, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        label_warnung = new QLabel(groupBox);
        label_warnung->setObjectName(QStringLiteral("label_warnung"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        label_warnung->setPalette(palette);

        gridLayout_2->addWidget(label_warnung, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(10, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        btn_Neu = new QPushButton(groupBox);
        btn_Neu->setObjectName(QStringLiteral("btn_Neu"));
        btn_Neu->setEnabled(false);
        btn_Neu->setIcon(icon1);

        gridLayout_4->addWidget(btn_Neu, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 3, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 3, 0, 1, 2);


        gridLayout_8->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        textEdit_Report = new QTextEdit(groupBox_2);
        textEdit_Report->setObjectName(QStringLiteral("textEdit_Report"));
        textEdit_Report->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit_Report->setLineWrapMode(QTextEdit::NoWrap);

        gridLayout_6->addWidget(textEdit_Report, 0, 0, 1, 3);

        btn_Report_verwerfen = new QPushButton(groupBox_2);
        btn_Report_verwerfen->setObjectName(QStringLiteral("btn_Report_verwerfen"));
        btn_Report_verwerfen->setEnabled(false);
        btn_Report_verwerfen->setIcon(icon10);

        gridLayout_6->addWidget(btn_Report_verwerfen, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(397, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        btn_Save = new QPushButton(groupBox_2);
        btn_Save->setObjectName(QStringLiteral("btn_Save"));
        btn_Save->setEnabled(false);
        btn_Save->setIcon(icon6);

        gridLayout_5->addWidget(btn_Save, 0, 0, 1, 1);

        btn_Print = new QPushButton(groupBox_2);
        btn_Print->setObjectName(QStringLiteral("btn_Print"));
        btn_Print->setEnabled(false);
        btn_Print->setIcon(icon7);

        gridLayout_5->addWidget(btn_Print, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 2, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 602, 21));
        menuDatei = new QMenu(menuBar);
        menuDatei->setObjectName(QStringLiteral("menuDatei"));
        menuHilfe = new QMenu(menuBar);
        menuHilfe->setObjectName(QStringLiteral("menuHilfe"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDatei->menuAction());
        menuBar->addAction(menuHilfe->menuAction());
        menuDatei->addAction(actionNeu);
        menuDatei->addAction(actionBerechnen);
        menuDatei->addAction(actionReport_verwerfen_und_neu_erfassen);
        menuDatei->addSeparator();
        menuDatei->addAction(actionDrucken);
        menuDatei->addSeparator();
        menuDatei->addAction(actionReport_importieren);
        menuDatei->addAction(actionSpeichern);
        menuDatei->addAction(actionReport_speichern_unter);
        menuDatei->addSeparator();
        menuDatei->addAction(actionEnde);
        menuHilfe->addAction(actionProgramminformation);
        menuHilfe->addAction(actionInfo_zu_Qt);
        mainToolBar->addAction(actionBerechnen);
        mainToolBar->addAction(actionNeu);
        mainToolBar->addAction(actionReport_verwerfen_und_neu_erfassen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSpeichern);
        mainToolBar->addAction(actionReport_speichern_unter);
        mainToolBar->addAction(actionReport_importieren);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDrucken);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionProgramminformation);
        mainToolBar->addAction(actionInfo_zu_Qt);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEnde);

        retranslateUi(MainWindow);
        QObject::connect(actionEnde, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionBerechnen, SIGNAL(triggered()), btn_Berechnen, SLOT(click()));
        QObject::connect(actionNeu, SIGNAL(triggered()), btn_Neu, SLOT(click()));
        QObject::connect(actionReport_verwerfen_und_neu_erfassen, SIGNAL(triggered()), btn_Report_verwerfen, SLOT(click()));
        QObject::connect(btn_Save, SIGNAL(clicked()), actionSpeichern, SLOT(trigger()));
        QObject::connect(actionDrucken, SIGNAL(triggered()), btn_Print, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Erfassung Kundengewichte und BMI", 0));
        actionNeu->setText(QApplication::translate("MainWindow", "\303\234bernehmen und neue Erfassung", 0));
        actionNeu->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionBerechnen->setText(QApplication::translate("MainWindow", "Berechnen", 0));
        actionBerechnen->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0));
        actionEnde->setText(QApplication::translate("MainWindow", "Ende", 0));
        actionEnde->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionProgramminformation->setText(QApplication::translate("MainWindow", "Programminformation", 0));
        actionInfo_zu_Qt->setText(QApplication::translate("MainWindow", "Info zu Qt", 0));
        actionSpeichern->setText(QApplication::translate("MainWindow", "Report speichern", 0));
        actionSpeichern->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionDrucken->setText(QApplication::translate("MainWindow", "Report drucken...", 0));
        actionDrucken->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionReport_speichern_unter->setText(QApplication::translate("MainWindow", "Report speichern unter...", 0));
        actionReport_speichern_unter->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        actionReport_importieren->setText(QApplication::translate("MainWindow", "Report  importieren", 0));
        actionReport_importieren->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionReport_verwerfen_und_neu_erfassen->setText(QApplication::translate("MainWindow", "Report verwerfen und neu erfassen", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Werte erfassen", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_Name->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hier den Namen des Kunden eintragen</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_Name->setText(QApplication::translate("MainWindow", "Musterfrau, Frieda Annakatrin", 0));
        label_9->setText(QApplication::translate("MainWindow", "Erfassungsdatum:", 0));
        label_2->setText(QApplication::translate("MainWindow", "K\303\266rpergr\303\266\303\237e:", 0));
#ifndef QT_NO_TOOLTIP
        spinBox_Size->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hier die K\303\266rpergr\303\266\303\237e des Kunden eintragen</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "cm", 0));
        label_4->setText(QApplication::translate("MainWindow", "K\303\266rpergewicht:", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_Weight->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hier das aktuelle Gewicht des Kunden eintragen</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MainWindow", "Kg", 0));
        label_6->setText(QApplication::translate("MainWindow", "Gewicht der Steh-/Sitzhilfe:", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RolliWeight->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hier das aktuelle Gewicht der Steh- oder Sitzhilfe eintragen</p><p><span style=\" font-weight:600;\">Hinweis:</span> Therapiestuhl immer mit Fu\303\237st\303\274tzen wiegen!</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainWindow", "Kg", 0));
        dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "dd.MM.yyyy", 0));
#ifndef QT_NO_TOOLTIP
        btn_Berechnen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Berechnung starten. Ein Kunde kann erst nach erfolgter Berechnung</p><p>\303\274ber die Schaltfl\303\244che &quot;\303\234bernehmen...&quot; zum Report hinzugef\303\274gt werden.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn_Berechnen->setText(QApplication::translate("MainWindow", "Berechnen", 0));
        label_8->setText(QApplication::translate("MainWindow", "BMI:", 0));
#ifndef QT_NO_TOOLTIP
        lcdNumber->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Anzeige des errechneten BMI</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_warnung->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Warnung:</span><span style=\" color:#ff0000;\"> Mindest-BMI unterschritten!</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        btn_Neu->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Aktuelle Berechnung in den Report \303\274bernehmen und neue Eingabe vorbereiten</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn_Neu->setText(QApplication::translate("MainWindow", "\303\234bernehmen und neue Erfassung", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Monatsreport - Druckausgabe", 0));
        textEdit_Report->setDocumentTitle(QApplication::translate("MainWindow", "Report", 0));
        textEdit_Report->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><title>Report</title><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        btn_Report_verwerfen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Einen bereits erstellten Report verwerfen.</p><p><span style=\" font-weight:600;\">Hinweis:</span> Alle nicht gespeicherten Daten gehen verloren!</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn_Report_verwerfen->setText(QApplication::translate("MainWindow", "Report verwerfen und neu erfassen", 0));
#ifndef QT_NO_TOOLTIP
        btn_Save->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Report speichern</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn_Save->setText(QApplication::translate("MainWindow", "Speichern", 0));
#ifndef QT_NO_TOOLTIP
        btn_Print->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Report ausdrucken</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn_Print->setText(QApplication::translate("MainWindow", "Drucken", 0));
        menuDatei->setTitle(QApplication::translate("MainWindow", "Datei", 0));
        menuHilfe->setTitle(QApplication::translate("MainWindow", "Hilfe", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

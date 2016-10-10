/********************************************************************************
** Form generated from reading UI file 'Lepton.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEPTON_H
#define UI_LEPTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lepton
{
public:
    QWidget *Image;
    QFrame *Buttons;
    QPushButton *UpdateFFC;
    QPlainTextEdit *FLIR_SN;
    QPlainTextEdit *Uptime;
    QLabel *label;
    QLabel *label_2;
    QFrame *FileButtons;
    QPushButton *SaveButton;
    QFrame *VideoLive;
    QGroupBox *VideoFreeze;
    QRadioButton *FreezeOn;
    QRadioButton *FreezeOff;
    QFrame *VideoPolarity;
    QGroupBox *Video;
    QRadioButton *WhiteHot;
    QRadioButton *BlackHot;
    QFrame *VideoAGCCont;
    QGroupBox *VideoAGC;
    QRadioButton *AGCOn;
    QRadioButton *AGCOff;
    QFrame *SceneBasedNUC;
    QGroupBox *SBNUC;
    QRadioButton *SBNUCOn;
    QRadioButton *SBNUCOff;
    QFrame *CameraTemp;
    QGroupBox *CameraTemperature;
    QLabel *label_4;
    QPlainTextEdit *FPATemp;
    QLabel *label_3;
    QPlainTextEdit *AuxTemp;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Lepton)
    {
        if (Lepton->objectName().isEmpty())
            Lepton->setObjectName(QString::fromUtf8("Lepton"));
        Lepton->resize(890, 560);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Lepton->sizePolicy().hasHeightForWidth());
        Lepton->setSizePolicy(sizePolicy);
        Lepton->setMinimumSize(QSize(890, 560));
        Lepton->setMaximumSize(QSize(890, 560));
        Image = new QWidget(Lepton);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(10, 10, 640, 480));
        Buttons = new QFrame(Lepton);
        Buttons->setObjectName(QString::fromUtf8("Buttons"));
        Buttons->setGeometry(QRect(140, 500, 181, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Buttons->sizePolicy().hasHeightForWidth());
        Buttons->setSizePolicy(sizePolicy1);
        Buttons->setFrameShape(QFrame::StyledPanel);
        Buttons->setFrameShadow(QFrame::Raised);
        UpdateFFC = new QPushButton(Buttons);
        UpdateFFC->setObjectName(QString::fromUtf8("UpdateFFC"));
        UpdateFFC->setGeometry(QRect(10, 10, 161, 30));
        FLIR_SN = new QPlainTextEdit(Lepton);
        FLIR_SN->setObjectName(QString::fromUtf8("FLIR_SN"));
        FLIR_SN->setEnabled(false);
        FLIR_SN->setGeometry(QRect(750, 10, 71, 30));
        FLIR_SN->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FLIR_SN->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Uptime = new QPlainTextEdit(Lepton);
        Uptime->setObjectName(QString::fromUtf8("Uptime"));
        Uptime->setEnabled(false);
        Uptime->setGeometry(QRect(750, 50, 91, 30));
        Uptime->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Uptime->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(Lepton);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(710, 10, 31, 31));
        label_2 = new QLabel(Lepton);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(680, 50, 67, 31));
        FileButtons = new QFrame(Lepton);
        FileButtons->setObjectName(QString::fromUtf8("FileButtons"));
        FileButtons->setGeometry(QRect(10, 500, 121, 51));
        FileButtons->setFrameShape(QFrame::StyledPanel);
        FileButtons->setFrameShadow(QFrame::Raised);
        SaveButton = new QPushButton(FileButtons);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(10, 10, 101, 31));
        VideoLive = new QFrame(Lepton);
        VideoLive->setObjectName(QString::fromUtf8("VideoLive"));
        VideoLive->setGeometry(QRect(670, 200, 181, 61));
        VideoLive->setFrameShape(QFrame::StyledPanel);
        VideoLive->setFrameShadow(QFrame::Raised);
        VideoFreeze = new QGroupBox(VideoLive);
        VideoFreeze->setObjectName(QString::fromUtf8("VideoFreeze"));
        VideoFreeze->setGeometry(QRect(30, 0, 121, 51));
        VideoFreeze->setAlignment(Qt::AlignCenter);
        FreezeOn = new QRadioButton(VideoFreeze);
        FreezeOn->setObjectName(QString::fromUtf8("FreezeOn"));
        FreezeOn->setGeometry(QRect(10, 30, 51, 26));
        FreezeOn->setChecked(false);
        FreezeOff = new QRadioButton(VideoFreeze);
        FreezeOff->setObjectName(QString::fromUtf8("FreezeOff"));
        FreezeOff->setGeometry(QRect(70, 30, 61, 26));
        FreezeOff->setChecked(true);
        VideoFreeze->raise();
        Image->raise();
        VideoPolarity = new QFrame(Lepton);
        VideoPolarity->setObjectName(QString::fromUtf8("VideoPolarity"));
        VideoPolarity->setGeometry(QRect(670, 380, 181, 91));
        VideoPolarity->setFrameShape(QFrame::StyledPanel);
        VideoPolarity->setFrameShadow(QFrame::Raised);
        Video = new QGroupBox(VideoPolarity);
        Video->setObjectName(QString::fromUtf8("Video"));
        Video->setGeometry(QRect(30, 0, 121, 91));
        Video->setAlignment(Qt::AlignCenter);
        WhiteHot = new QRadioButton(Video);
        WhiteHot->setObjectName(QString::fromUtf8("WhiteHot"));
        WhiteHot->setGeometry(QRect(10, 30, 101, 26));
        WhiteHot->setChecked(true);
        BlackHot = new QRadioButton(Video);
        BlackHot->setObjectName(QString::fromUtf8("BlackHot"));
        BlackHot->setGeometry(QRect(10, 60, 101, 26));
        BlackHot->setChecked(false);
        VideoAGCCont = new QFrame(Lepton);
        VideoAGCCont->setObjectName(QString::fromUtf8("VideoAGCCont"));
        VideoAGCCont->setGeometry(QRect(670, 260, 181, 61));
        VideoAGCCont->setFrameShape(QFrame::StyledPanel);
        VideoAGCCont->setFrameShadow(QFrame::Raised);
        VideoAGC = new QGroupBox(VideoAGCCont);
        VideoAGC->setObjectName(QString::fromUtf8("VideoAGC"));
        VideoAGC->setGeometry(QRect(40, 0, 121, 51));
        VideoAGC->setAlignment(Qt::AlignCenter);
        AGCOn = new QRadioButton(VideoAGC);
        AGCOn->setObjectName(QString::fromUtf8("AGCOn"));
        AGCOn->setGeometry(QRect(0, 30, 51, 26));
        AGCOn->setChecked(false);
        AGCOff = new QRadioButton(VideoAGC);
        AGCOff->setObjectName(QString::fromUtf8("AGCOff"));
        AGCOff->setGeometry(QRect(60, 30, 61, 26));
        AGCOff->setChecked(true);
        SceneBasedNUC = new QFrame(Lepton);
        SceneBasedNUC->setObjectName(QString::fromUtf8("SceneBasedNUC"));
        SceneBasedNUC->setGeometry(QRect(670, 320, 181, 61));
        SceneBasedNUC->setFrameShape(QFrame::StyledPanel);
        SceneBasedNUC->setFrameShadow(QFrame::Raised);
        SBNUC = new QGroupBox(SceneBasedNUC);
        SBNUC->setObjectName(QString::fromUtf8("SBNUC"));
        SBNUC->setGeometry(QRect(20, 0, 141, 51));
        SBNUC->setAlignment(Qt::AlignCenter);
        SBNUCOn = new QRadioButton(SBNUC);
        SBNUCOn->setObjectName(QString::fromUtf8("SBNUCOn"));
        SBNUCOn->setGeometry(QRect(20, 30, 51, 26));
        SBNUCOn->setChecked(false);
        SBNUCOff = new QRadioButton(SBNUC);
        SBNUCOff->setObjectName(QString::fromUtf8("SBNUCOff"));
        SBNUCOff->setGeometry(QRect(80, 30, 61, 26));
        SBNUCOff->setChecked(true);
        CameraTemp = new QFrame(Lepton);
        CameraTemp->setObjectName(QString::fromUtf8("CameraTemp"));
        CameraTemp->setGeometry(QRect(670, 90, 181, 111));
        CameraTemp->setFrameShape(QFrame::StyledPanel);
        CameraTemp->setFrameShadow(QFrame::Raised);
        CameraTemperature = new QGroupBox(CameraTemp);
        CameraTemperature->setObjectName(QString::fromUtf8("CameraTemperature"));
        CameraTemperature->setGeometry(QRect(10, 0, 151, 101));
        label_4 = new QLabel(CameraTemperature);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 31, 31));
        FPATemp = new QPlainTextEdit(CameraTemperature);
        FPATemp->setObjectName(QString::fromUtf8("FPATemp"));
        FPATemp->setEnabled(false);
        FPATemp->setGeometry(QRect(60, 30, 51, 30));
        FPATemp->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FPATemp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(CameraTemperature);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 41, 31));
        AuxTemp = new QPlainTextEdit(CameraTemperature);
        AuxTemp->setObjectName(QString::fromUtf8("AuxTemp"));
        AuxTemp->setEnabled(false);
        AuxTemp->setGeometry(QRect(60, 70, 51, 30));
        AuxTemp->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        AuxTemp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_5 = new QLabel(CameraTemperature);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 30, 16, 31));
        label_6 = new QLabel(CameraTemperature);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 70, 16, 31));

        retranslateUi(Lepton);

        QMetaObject::connectSlotsByName(Lepton);
    } // setupUi

    void retranslateUi(QWidget *Lepton)
    {
        Lepton->setWindowTitle(QApplication::translate("Lepton", "Lepton", 0, QApplication::UnicodeUTF8));
        UpdateFFC->setText(QApplication::translate("Lepton", "Update FFC", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Lepton", "S/N", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Lepton", "Up Time", 0, QApplication::UnicodeUTF8));
        SaveButton->setText(QApplication::translate("Lepton", "Save", 0, QApplication::UnicodeUTF8));
        VideoFreeze->setTitle(QApplication::translate("Lepton", "Video Freeze", 0, QApplication::UnicodeUTF8));
        FreezeOn->setText(QApplication::translate("Lepton", "On", 0, QApplication::UnicodeUTF8));
        FreezeOff->setText(QApplication::translate("Lepton", "Off", 0, QApplication::UnicodeUTF8));
        Video->setTitle(QApplication::translate("Lepton", "Video Polarity", 0, QApplication::UnicodeUTF8));
        WhiteHot->setText(QApplication::translate("Lepton", "White Hot", 0, QApplication::UnicodeUTF8));
        BlackHot->setText(QApplication::translate("Lepton", "Black Hot", 0, QApplication::UnicodeUTF8));
        VideoAGC->setTitle(QApplication::translate("Lepton", "Video AGC", 0, QApplication::UnicodeUTF8));
        AGCOn->setText(QApplication::translate("Lepton", "On", 0, QApplication::UnicodeUTF8));
        AGCOff->setText(QApplication::translate("Lepton", "Off", 0, QApplication::UnicodeUTF8));
        SBNUC->setTitle(QApplication::translate("Lepton", "Scene Based NUC", 0, QApplication::UnicodeUTF8));
        SBNUCOn->setText(QApplication::translate("Lepton", "On", 0, QApplication::UnicodeUTF8));
        SBNUCOff->setText(QApplication::translate("Lepton", "Off", 0, QApplication::UnicodeUTF8));
        CameraTemperature->setTitle(QApplication::translate("Lepton", "CameraTemperature", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Lepton", "FPA", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Lepton", "Case", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Lepton", "C", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Lepton", "C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Lepton: public Ui_Lepton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEPTON_H

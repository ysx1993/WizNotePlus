#ifndef WIZANIMATEACTION_H
#define WIZANIMATEACTION_H

#include "wizqthelper.h"

#include <QIcon>
#include <QList>

class QTimer;
class QAction;

class CWizAnimateAction : public QObject
{
    Q_OBJECT
public:
    CWizAnimateAction(QObject* parent);
    void setAction(QAction* action);
private:
    QAction* m_action;
    int m_nIconIndex;
    QIcon m_iconDefault;
    QList<QIcon> m_icons;
    QTimer* m_timer;
private:
    void nextIcon();
public:
    void setIcons(const CString& strIconBaseName);
    void startPlay();
    void stopPlay();
public slots:
    void on_timer_timeout();
};

#endif // WIZANIMATEACTION_H
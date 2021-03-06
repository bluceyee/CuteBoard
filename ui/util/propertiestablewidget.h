#ifndef PROPERTIESTREEWIDGET_H
#define PROPERTIESTREEWIDGET_H

#include <QTreeWidget>
#include <QDrag>
#include <QDragEnterEvent>
#include <QMimeData>

class PropertiesTableWidget : public QTreeWidget
{
    Q_OBJECT
public:
    PropertiesTableWidget(QWidget *parent = nullptr);

private slots:
    void contextMenuRequested(const QPoint& pos);
signals:
    void editProperties(QString label, QString descr);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void startDrag(Qt::DropActions supportedActions) override;
};

#endif

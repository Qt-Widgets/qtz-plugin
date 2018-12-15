#ifndef QTZ_JALALIDATEEDIT_PLUGIN_HPP
#define QTZ_JALALIDATEEDIT_PLUGIN_HPP

#include <QtUiPlugin/QDesignerCustomWidgetInterface>
#include "global.hpp"

class QTZ_PLUGIN_SHARED_EXPORT JalaliDateEditPlugin : public QObject, public QDesignerCustomWidgetInterface {
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    JalaliDateEditPlugin(QObject* parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget* createWidget(QWidget* parent);
    void initialize(QDesignerFormEditorInterface* core);

private:
    bool m_initialized;
};

#endif // QTZ_JALALIDATEEDIT_PLUGIN_HPP

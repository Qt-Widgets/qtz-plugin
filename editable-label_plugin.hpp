#ifndef QTZ_EDITABLELABELPLUGIN_HPP
#define QTZ_EDITABLELABELPLUGIN_HPP

#include <QtUiPlugin/QDesignerCustomWidgetInterface>
#include "global.hpp"

class QTZ_PLUGIN_SHARED_EXPORT EditableLabelPlugin : public QObject,
    public QDesignerCustomWidgetInterface {
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    EditableLabelPlugin(QObject* parent = 0);

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


#endif // QTZ_EDITABLELABELPLUGIN_HPP


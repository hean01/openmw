
#include "recordfilterbox.hpp"

#include <QHBoxLayout>
#include <QLabel>

#include "editwidget.hpp"

CSVFilter::RecordFilterBox::RecordFilterBox (CSMWorld::Data& data, QWidget *parent)
: QWidget (parent)
{
    QHBoxLayout *layout = new QHBoxLayout (this);

    layout->setContentsMargins (0, 0, 0, 0);

    layout->addWidget (new QLabel ("Record Filter", this));

    EditWidget *editWidget = new EditWidget (data, this);

    layout->addWidget (editWidget);

    setLayout (layout);

    connect (
        editWidget, SIGNAL (filterChanged (boost::shared_ptr<CSMFilter::Node>)),
        this, SIGNAL (filterChanged (boost::shared_ptr<CSMFilter::Node>)));
}

#include "rviz2_plugin_samples/sample_panel.h"
#include <QVBoxLayout>
#include <QMessageBox>

namespace rviz2_plugin_samples
{

ButtonPanel::ButtonPanel(QWidget *parent)  : rviz_common::Panel(parent)
{
    button_ = new QPushButton("Click me", this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(button_);
    setLayout(layout);

    connect(button_, SIGNAL(clicked()), this, SLOT(onButtonClick()));
}

void ButtonPanel::onButtonClick()
{
    QMessageBox::information(this, "Hello", "Hello World");
}

}  // namespace rviz2_plugin_samples

#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(rviz2_plugin_samples::ButtonPanel, rviz_common::Panel)
